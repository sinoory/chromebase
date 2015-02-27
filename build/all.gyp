# Copyright (c) 2012 The Chromium Authors. All rights reserved.
# Use of this source code is governed by a BSD-style license that can be
# found in the LICENSE file.

{
  'variables': {
    # A hook that can be overridden in other repositories to add additional
    # compilation targets to 'All'. Only used on Android.
    'android_app_targets%': [],
  },
  'targets': [
    {
      'target_name': 'All',
      'type': 'none',
      'xcode_create_dependents_test_runner': 1,
      'dependencies': [
        'some.gyp:*',
        '../base/base.gyp:*',
        '../ipc/ipc.gyp:*',
        '../main/main.gyp:*',
      ],
      'conditions': [
        ['OS!="ios" and OS!="android"', {
          'dependencies': [
          ],
        }],
        ['OS=="win" or OS=="ios" or OS=="linux"', {
          'dependencies': [

           ],
        }],
        ['OS=="linux"', {
          'dependencies': [
          ],
          'conditions': [
            ['branding=="Chrome"', {
              'dependencies': [
              ],
            }],
            ['enable_ipc_fuzzer==1', {
              'dependencies': [
              ],
            }],
          ],
        }],
        ['toolkit_views==1', {
          'dependencies': [
          ],
        }],
        ['use_aura==1', {
          'dependencies': [
          ],
        }],
        ['use_ash==1', {
          'dependencies': [
          ],
        }],
        ['use_openssl==0', {
          'dependencies': [
          ],
        }],
        ['use_openssl==1', {
          'dependencies': [
          ],
        }],
      ],
    }, # target_name: All
  ],
  'conditions': [
    ['OS!="ios"', {
      'targets': [
       ],
    }], # OS!=ios
  ],  # conditions
}
