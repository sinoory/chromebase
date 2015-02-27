#
{

  'targets': [
    {
      'target_name': 'main',
      'type': 'executable',
      'dependencies': [
        '../base/base.gyp:base',
        '../ipc/ipc.gyp:ipc',
      ],
      'direct_dependent_settings': {
        'include_dirs': [
          '..',
        ],
      },

      'sources': [
        'main.cc',
      ],
      'cflags_cc': ['-fexceptions','-std=c++11'],
    },
  ],

}
