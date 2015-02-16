# Copyright (c) 2012 The Chromium Authors. All rights reserved.
# Use of this source code is governed by a BSD-style license that can be
# found in the LICENSE file.

{
  'variables': {
    'chromium_code': 1,
  },
  'includes': [
    'ipc.gypi',
  ],
  'targets': [
    {
      'target_name': 'ipc',
      'type': '<(component)',
      'variables': {
        'ipc_target': 1,
      },
      'dependencies': [
        '../base/base.gyp:base',
        # TODO(viettrungluu): Needed for base/lazy_instance.h, which is suspect.
        '../base/third_party/dynamic_annotations/dynamic_annotations.gyp:dynamic_annotations',
      ],
      # TODO(gregoryd): direct_dependent_settings should be shared with the
      # 64-bit target, but it doesn't work due to a bug in gyp
      'direct_dependent_settings': {
        'include_dirs': [
          '..',
        ],
      },
    },
  ],
  'conditions': [
    ['OS=="win" and target_arch=="ia32"', {
      'targets': [
        {
          'target_name': 'ipc_win64',
          'type': '<(component)',
          'variables': {
            'ipc_target': 1,
          },
          'dependencies': [
            '../base/base.gyp:base_win64',
            # TODO(viettrungluu): Needed for base/lazy_instance.h, which is
            # suspect.
            '../base/third_party/dynamic_annotations/dynamic_annotations.gyp:dynamic_annotations_win64',
          ],
          # TODO(gregoryd): direct_dependent_settings should be shared with the
          # 32-bit target, but it doesn't work due to a bug in gyp
          'direct_dependent_settings': {
            'include_dirs': [
              '..',
            ],
          },
          'configurations': {
            'Common_Base': {
              'msvs_target_platform': 'x64',
            },
          },
        },
      ],
    }],
    ['OS == "android"', {
      'targets': [
        {
          'target_name': 'ipc_tests_apk',
          'type': 'none',
          'dependencies': [
            'ipc_tests',
          ],
          'variables': {
            'test_suite_name': 'ipc_tests',
          },
          'includes': [ '../build/apk_test.gypi' ],
        },
        {
          'target_name': 'ipc_perftests_apk',
          'type': 'none',
          'dependencies': [
            'ipc_perftests',
          ],
          'variables': {
            'test_suite_name': 'ipc_perftests',
          },
          'includes': [ '../build/apk_test.gypi' ],
        }],
    }],
  ],
}
