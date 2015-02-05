# Copyright (c) 2012 The Chromium Authors. All rights reserved.
# Use of this source code is governed by a BSD-style license that can be
# found in the LICENSE file.

{
  'variables': {
    'chromium_code': 1,
  },
  'includes': [
    '../build/win_precompile.gypi',
    'base.gypi',
  ],
  'targets': [
    {
      'target_name': 'base',
      'type': '<(component)',
      'toolsets': ['host', 'target'],
      'variables': {
        'base_target': 1,
        'enable_wexit_time_destructors': 1,
        'optimize': 'max',
      },
      'dependencies': [
        'base_static',
        'allocator/allocator.gyp:allocator_extension_thunks',
        '../testing/gtest.gyp:gtest_prod',
        '../third_party/modp_b64/modp_b64.gyp:modp_b64',
        'third_party/dynamic_annotations/dynamic_annotations.gyp:dynamic_annotations',
      ],
      # TODO(gregoryd): direct_dependent_settings should be shared with the
      #  64-bit target, but it doesn't work due to a bug in gyp
      'direct_dependent_settings': {
        'include_dirs': [
          '..',
        ],
      },
      'conditions': [
        ['desktop_linux == 1 or chromeos == 1', {
          'conditions': [
            ['chromeos==1', {
              'sources/': [ ['include', '_chromeos\\.cc$'] ]
            }],
          ],
          'dependencies': [
            'symbolize',
            'xdg_mime',
          ],
          'defines': [
            'USE_SYMBOLIZE',
          ],
        }, {  # desktop_linux == 0 and chromeos == 0
            'sources/': [
              ['exclude', '/xdg_user_dirs/'],
              ['exclude', '_nss\\.cc$'],
            ],
        }],
        ['use_glib==1', {
          'dependencies': [
            '../build/linux/system.gyp:glib',
          ],
          'export_dependent_settings': [
            '../build/linux/system.gyp:glib',
          ],
        }],
        ['OS == "android" and _toolset == "host"', {
          # Always build base as a static_library for host toolset, even if
          # we're doing a component build. Specifically, we only care about the
          # target toolset using components since that's what developers are
          # focusing on. In theory we should do this more generally for all
          # targets when building for host, but getting the gyp magic
          # per-toolset for the "component" variable is hard, and we really only
          # need base on host.
          'type': 'static_library',
          # Base for host support is the minimum required to run the
          # ssl false start blacklist tool. It requires further changes
          # to generically support host builds (and tests).
          # Note: when building for host, gyp has OS == "android",
          # hence the *_android.cc files are included but the actual code
          # doesn't have OS_ANDROID / ANDROID defined.
          'conditions': [
            ['host_os == "mac"', {
              'sources/': [
                ['exclude', '^native_library_linux\\.cc$'],
                ['exclude', '^process_util_linux\\.cc$'],
                ['exclude', '^sys_info_linux\\.cc$'],
                ['exclude', '^sys_string_conversions_linux\\.cc$'],
                ['exclude', '^worker_pool_linux\\.cc$'],
              ],
            }],
          ],
        }],
        ['OS == "android" and _toolset == "target"', {
          'conditions': [
            ['target_arch == "ia32" or target_arch == "x64"', {
              'sources/': [
                ['include', '^atomicops_internals_x86_gcc\\.cc$'],
              ],
            }],
            ['target_arch == "mipsel"', {
              'sources/': [
                ['include', '^atomicops_internals_mips_gcc\\.cc$'],
              ],
            }],
          ],
          'dependencies': [
            'base_jni_headers',
            '../third_party/ashmem/ashmem.gyp:ashmem',
          ],
          'link_settings': {
            'libraries': [
              '-llog',
            ],
          },
          'sources!': [
            'debug/stack_trace_posix.cc',
          ],
          'includes': [
            '../build/android/cpufeatures.gypi',
          ],
        }],
        ['OS == "android" and _toolset == "target" and android_webview_build == 0', {
          'dependencies': [
            'base_java',
          ],
        }],
        ['os_bsd==1', {
          'include_dirs': [
            '/usr/local/include',
          ],
          'link_settings': {
            'libraries': [
              '-L/usr/local/lib -lexecinfo',
            ],
          },
        }],
        ['OS == "linux"', {
          'link_settings': {
            'libraries': [
              # We need rt for clock_gettime().
              '-lrt',
              # For 'native_library_linux.cc'
              '-ldl',
            ],
          },
          'conditions': [
            ['use_allocator!="tcmalloc"', {
              'defines': [
                'NO_TCMALLOC',
              ],
              'direct_dependent_settings': {
                'defines': [
                  'NO_TCMALLOC',
                ],
              },
            }],
          ],
        }],
        ['OS == "win"', {
          # Specify delayload for base.dll.
          'msvs_settings': {
            'VCLinkerTool': {
              'DelayLoadDLLs': [
                'powrprof.dll',
              ],
              'AdditionalDependencies': [
                'powrprof.lib',
              ],
            },
          },
          # Specify delayload for components that link with base.lib.
          'all_dependent_settings': {
            'msvs_settings': {
              'VCLinkerTool': {
                'DelayLoadDLLs': [
                  'powrprof.dll',
                ],
                'AdditionalDependencies': [
                  'powrprof.lib',
                ],
              },
            },
          },
        }],
        ['OS == "mac" or (OS == "ios" and _toolset == "host")', {
          'link_settings': {
            'libraries': [
              '$(SDKROOT)/System/Library/Frameworks/AppKit.framework',
              '$(SDKROOT)/System/Library/Frameworks/ApplicationServices.framework',
              '$(SDKROOT)/System/Library/Frameworks/Carbon.framework',
              '$(SDKROOT)/System/Library/Frameworks/CoreFoundation.framework',
              '$(SDKROOT)/System/Library/Frameworks/Foundation.framework',
              '$(SDKROOT)/System/Library/Frameworks/IOKit.framework',
              '$(SDKROOT)/System/Library/Frameworks/Security.framework',
            ],
          },
          'dependencies': [
            '../third_party/mach_override/mach_override.gyp:mach_override',
          ],
        }],
        ['OS == "ios" and _toolset != "host"', {
          'link_settings': {
            'libraries': [
              '$(SDKROOT)/System/Library/Frameworks/CoreFoundation.framework',
              '$(SDKROOT)/System/Library/Frameworks/CoreGraphics.framework',
              '$(SDKROOT)/System/Library/Frameworks/CoreText.framework',
              '$(SDKROOT)/System/Library/Frameworks/Foundation.framework',
              '$(SDKROOT)/System/Library/Frameworks/UIKit.framework',
            ],
          },
        }],
        ['OS != "win" and OS != "ios"', {
            'dependencies': ['../third_party/libevent/libevent.gyp:libevent'],
        },],
        ['component=="shared_library"', {
          'conditions': [
            ['OS=="win"', {
              'sources!': [
                'debug/debug_on_start_win.cc',
              ],
            }],
          ],
        }],
      ],
      'sources': [
        'third_party/xdg_user_dirs/xdg_user_dir_lookup.cc',
        'third_party/xdg_user_dirs/xdg_user_dir_lookup.h',
        'async_socket_io_handler.h',
        'async_socket_io_handler_posix.cc',
        'async_socket_io_handler_win.cc',
        'auto_reset.h',
        'event_recorder.h',
        'event_recorder_stubs.cc',
        'event_recorder_win.cc',
        'linux_util.cc',
        'linux_util.h',
        'message_loop/message_pump_android.cc',
        'message_loop/message_pump_android.h',
        'message_loop/message_pump_glib.cc',
        'message_loop/message_pump_glib.h',
        'message_loop/message_pump_io_ios.cc',
        'message_loop/message_pump_io_ios.h',
        'message_loop/message_pump_libevent.cc',
        'message_loop/message_pump_libevent.h',
        'message_loop/message_pump_mac.h',
        'message_loop/message_pump_mac.mm',
        'metrics/field_trial.cc',
        'metrics/field_trial.h',
        'posix/file_descriptor_shuffle.cc',
        'posix/file_descriptor_shuffle.h',
        'sync_socket.h',
        'sync_socket_win.cc',
        'sync_socket_posix.cc',
      ],
    },
    {
      'target_name': 'base_i18n',
      'type': '<(component)',
      'variables': {
        'enable_wexit_time_destructors': 1,
        'optimize': 'max',
        'base_i18n_target': 1,
      },
      'dependencies': [
        'base',
        'third_party/dynamic_annotations/dynamic_annotations.gyp:dynamic_annotations',
        '../third_party/icu/icu.gyp:icui18n',
        '../third_party/icu/icu.gyp:icuuc',
      ],
      'conditions': [
        ['OS == "win"', {
          # TODO(jschuh): crbug.com/167187 fix size_t to int truncations.
          'msvs_disabled_warnings': [
            4267,
          ],
        }],
        ['icu_use_data_file_flag==1', {
          'defines': ['ICU_UTIL_DATA_IMPL=ICU_UTIL_DATA_FILE'],
        }, { # else icu_use_data_file_flag !=1
          'conditions': [
            ['OS=="win"', {
              'defines': ['ICU_UTIL_DATA_IMPL=ICU_UTIL_DATA_SHARED'],
            }, {
              'defines': ['ICU_UTIL_DATA_IMPL=ICU_UTIL_DATA_STATIC'],
            }],
          ],
        }],
      ],
      'export_dependent_settings': [
        'base',
      ],


    },
    {
      'target_name': 'base_prefs',
      'type': '<(component)',
      'variables': {
        'enable_wexit_time_destructors': 1,
        'optimize': 'max',
      },
      'dependencies': [
        'base',
      ],
      'export_dependent_settings': [
        'base',
      ],
      'defines': [
        'BASE_PREFS_IMPLEMENTATION',
      ],
      'sources': [
        'prefs/base_prefs_export.h',
        'prefs/default_pref_store.cc',
        'prefs/default_pref_store.h',
        'prefs/json_pref_store.cc',
        'prefs/json_pref_store.h',
        'prefs/overlay_user_pref_store.cc',
        'prefs/overlay_user_pref_store.h',
        'prefs/persistent_pref_store.h',
        'prefs/pref_change_registrar.cc',
        'prefs/pref_change_registrar.h',
        'prefs/pref_filter.h',
        'prefs/pref_member.cc',
        'prefs/pref_member.h',
        'prefs/pref_notifier.h',
        'prefs/pref_notifier_impl.cc',
        'prefs/pref_notifier_impl.h',
        'prefs/pref_observer.h',
        'prefs/pref_registry.cc',
        'prefs/pref_registry.h',
        'prefs/pref_registry_simple.cc',
        'prefs/pref_registry_simple.h',
        'prefs/pref_service.cc',
        'prefs/pref_service.h',
        'prefs/pref_service_factory.cc',
        'prefs/pref_service_factory.h',
        'prefs/pref_store.cc',
        'prefs/pref_store.h',
        'prefs/pref_value_map.cc',
        'prefs/pref_value_map.h',
        'prefs/pref_value_store.cc',
        'prefs/pref_value_store.h',
        'prefs/scoped_user_pref_update.cc',
        'prefs/scoped_user_pref_update.h',
        'prefs/value_map_pref_store.cc',
        'prefs/value_map_pref_store.h',
        'prefs/writeable_pref_store.h',
      ],
    },
    {
      # This is the subset of files from base that should not be used with a
      # dynamic library. Note that this library cannot depend on base because
      # base depends on base_static.
      'target_name': 'base_static',
      'type': 'static_library',
      'variables': {
        'enable_wexit_time_destructors': 1,
        'optimize': 'max',
      },
      'toolsets': ['host', 'target'],
      'sources': [
        'base_switches.cc',
        'base_switches.h',
        'win/pe_image.cc',
        'win/pe_image.h',
      ],
      'include_dirs': [
        '..',
      ],
    },
    # Include this target for a main() function that simply instantiates
    # and runs a base::TestSuite.
  ],
  'conditions': [
    ['OS!="ios"', {
      'targets': [
        {
          'target_name': 'check_example',
          'type': 'executable',
          'sources': [
            'check_example.cc',
          ],
          'dependencies': [
            'base',
          ],
        },
        {
          'target_name': 'build_utf8_validator_tables',
          'type': 'executable',
          'toolsets': ['host'],
          'dependencies': [
            'base',
            '../third_party/icu/icu.gyp:icuuc',
          ],
          'sources': [
            'i18n/build_utf8_validator_tables.cc'
          ],
        },
      ],
    }],
    ['OS == "win" and target_arch=="ia32"', {
      'targets': [
        # The base_win64 target here allows us to use base for Win64 targets
        # (the normal build is 32 bits).
        {
          'target_name': 'base_win64',
          'type': '<(component)',
          'variables': {
            'base_target': 1,
          },
          'dependencies': [
            'base_static_win64',
            'allocator/allocator.gyp:allocator_extension_thunks_win64',
            '../third_party/modp_b64/modp_b64.gyp:modp_b64_win64',
            'third_party/dynamic_annotations/dynamic_annotations.gyp:dynamic_annotations_win64',
          ],
          # TODO(gregoryd): direct_dependent_settings should be shared with the
          # 32-bit target, but it doesn't work due to a bug in gyp
          'direct_dependent_settings': {
            'include_dirs': [
              '..',
            ],
          },
          'defines': [
            'BASE_WIN64',
            '<@(nacl_win64_defines)',
          ],
          'configurations': {
            'Common_Base': {
              'msvs_target_platform': 'x64',
            },
          },
          'conditions': [
            ['component == "shared_library"', {
              'sources!': [
                'debug/debug_on_start_win.cc',
              ],
            }],
          ],
          # Specify delayload for base_win64.dll.
          'msvs_settings': {
            'VCLinkerTool': {
              'DelayLoadDLLs': [
                'powrprof.dll',
              ],
              'AdditionalDependencies': [
                'powrprof.lib',
              ],
            },
          },
          # Specify delayload for components that link with base_win64.lib.
          'all_dependent_settings': {
            'msvs_settings': {
              'VCLinkerTool': {
                'DelayLoadDLLs': [
                  'powrprof.dll',
                ],
                'AdditionalDependencies': [
                  'powrprof.lib',
                ],
              },
            },
          },
          # TODO(rvargas): Bug 78117. Remove this.
          'msvs_disabled_warnings': [
            4244,
            4996,
            4267,
          ],
          'sources': [
            'third_party/xdg_user_dirs/xdg_user_dir_lookup.cc',
            'third_party/xdg_user_dirs/xdg_user_dir_lookup.h',
            'async_socket_io_handler.h',
            'async_socket_io_handler_posix.cc',
            'async_socket_io_handler_win.cc',
            'auto_reset.h',
            'event_recorder.h',
            'event_recorder_stubs.cc',
            'event_recorder_win.cc',
            'linux_util.cc',
            'linux_util.h',
            'md5.cc',
            'md5.h',
            'message_loop/message_pump_libevent.cc',
            'message_loop/message_pump_libevent.h',
            'metrics/field_trial.cc',
            'metrics/field_trial.h',
            'posix/file_descriptor_shuffle.cc',
            'posix/file_descriptor_shuffle.h',
            'sync_socket.h',
            'sync_socket_win.cc',
            'sync_socket_posix.cc',
          ],
        },
        {
          'target_name': 'base_i18n_nacl_win64',
          'type': '<(component)',
          # TODO(gregoryd): direct_dependent_settings should be shared with the
          # 32-bit target, but it doesn't work due to a bug in gyp
          'direct_dependent_settings': {
            'include_dirs': [
              '..',
            ],
          },
          'defines': [
            '<@(nacl_win64_defines)',
            'BASE_I18N_IMPLEMENTATION',
          ],
          'include_dirs': [
            '..',
          ],
          'sources': [
            'i18n/icu_util_nacl_win64.cc',
          ],
          'configurations': {
            'Common_Base': {
              'msvs_target_platform': 'x64',
            },
          },
        },
        {
          # TODO(rvargas): Remove this when gyp finally supports a clean model.
          # See bug 36232.
          'target_name': 'base_static_win64',
          'type': 'static_library',
          'sources': [
            'base_switches.cc',
            'base_switches.h',
            'win/pe_image.cc',
            'win/pe_image.h',
          ],
          'sources!': [
            # base64.cc depends on modp_b64.
            'base64.cc',
          ],
          'include_dirs': [
            '..',
          ],
          'configurations': {
            'Common_Base': {
              'msvs_target_platform': 'x64',
            },
          },
          'defines': [
            '<@(nacl_win64_defines)',
          ],
          # TODO(rvargas): Bug 78117. Remove this.
          'msvs_disabled_warnings': [
            4244,
          ],
        },
      ],
    }],
    ['os_posix==1 and OS!="mac" and OS!="ios"', {
      'targets': [
        {
          'target_name': 'symbolize',
          'type': 'static_library',
          'toolsets': ['host', 'target'],
          'variables': {
            'chromium_code': 0,
          },
          'conditions': [
            ['OS == "solaris"', {
              'include_dirs': [
                '/usr/gnu/include',
                '/usr/gnu/include/libelf',
              ],
            },],
          ],
          'cflags': [
            '-Wno-sign-compare',
          ],
          'cflags!': [
            '-Wextra',
          ],
          'defines': [
            'GLOG_BUILD_CONFIG_INCLUDE="build/build_config.h"',
          ],
          'sources': [
            'third_party/symbolize/config.h',
            'third_party/symbolize/demangle.cc',
            'third_party/symbolize/demangle.h',
            'third_party/symbolize/glog/logging.h',
            'third_party/symbolize/glog/raw_logging.h',
            'third_party/symbolize/symbolize.cc',
            'third_party/symbolize/symbolize.h',
            'third_party/symbolize/utilities.h',
          ],
          'include_dirs': [
            '..',
          ],
        },
        {
          'target_name': 'xdg_mime',
          'type': 'static_library',
          'toolsets': ['host', 'target'],
          'variables': {
            'chromium_code': 0,
          },
          'cflags!': [
            '-Wextra',
          ],
          'sources': [
            'third_party/xdg_mime/xdgmime.c',
            'third_party/xdg_mime/xdgmime.h',
            'third_party/xdg_mime/xdgmimealias.c',
            'third_party/xdg_mime/xdgmimealias.h',
            'third_party/xdg_mime/xdgmimecache.c',
            'third_party/xdg_mime/xdgmimecache.h',
            'third_party/xdg_mime/xdgmimeglob.c',
            'third_party/xdg_mime/xdgmimeglob.h',
            'third_party/xdg_mime/xdgmimeicon.c',
            'third_party/xdg_mime/xdgmimeicon.h',
            'third_party/xdg_mime/xdgmimeint.c',
            'third_party/xdg_mime/xdgmimeint.h',
            'third_party/xdg_mime/xdgmimemagic.c',
            'third_party/xdg_mime/xdgmimemagic.h',
            'third_party/xdg_mime/xdgmimeparent.c',
            'third_party/xdg_mime/xdgmimeparent.h',
          ],
        },
      ],
    }],
  ],
}
