'use strict';

module.exports = function (grunt) {

  var PHP_FILES = [
    '*.info',
    '{,**}/*.{php,inc}'
  ];
  var IMAGE_FILES = [
    'images/**'
  ];
  var IMAGE_FILES_ICONS = [
    'images/icons2x/*.png'
  ];
  var CSS_FILES = [
    'css/{,**/}*.css'
  ];
  var SASS_FILES = [
    'sass/{,**/}*.{scss,sass}'
  ];
  var JS_FILES_NO_MIN = [
    'js/{,**/}*.js',
    '!js/{,**/}*.min.js'
  ];

  // https://github.com/Ensighten/grunt-spritesmith/issues/27
  // allows for cache busting of sprite images
  var md5 = require('md5');
  var fs = require('fs');

  function getCollectiveMd5(files) {
    var expandedFiles = grunt.file.expand(files),
        collectiveContent = expandedFiles.reduce(function (content, file) {
          return content + fs.readFileSync(file, 'binary');
        }, '');
    return md5(collectiveContent);
  }

  var spritecachebust = getCollectiveMd5(IMAGE_FILES_ICONS);

  grunt.initConfig({
    pkg: grunt.file.readJSON('package.json'),
    bower: grunt.file.readJSON('bower.json'),
    bower_config: grunt.file.readJSON('.bowerrc'),

    watch: {
      options: { },
      sass: {
        files: SASS_FILES,
        tasks: ['css:dev']
      },
      registry: {
        files: PHP_FILES,
        tasks: ['shell']
      },
      images: {
        files: IMAGE_FILES
      },
      css: {
        files: CSS_FILES
      },
      js: {
        files: JS_FILES_NO_MIN,
        // NOTE: jshint comes before general JS tasks, so it could abort before
        // general JS tasks are complete.
        tasks: ['jshint', 'js:dev']
      }
    },

    shell: {
      all: {
        command: 'drush cache-clear theme-registry'
      }
    },

    // FIXME: this could be used at some point later to dynamically resize the
    // 2x icons down to 1x
    image_resize: {
      options: {
        width: '50%',
        overwrite: true
      },
      all: {
        src : IMAGE_FILES_ICONS,
        dest : 'images/icons/'
      }
    },

    // FIXME: this could be used at some point later to combine the retina icons
    // into a single folder with the normal icons to allow spritesmith to
    // generate retina sprites in a more conventional way.
    copy: {
      all: {
        files: [{
          expand: true,
          dot: true,
          cwd: 'images/icons2x/',
          dest: 'images/icons/',
          src: ['*.png'],
          // rename image.png in src folder to to image-2x.png in dest folder.
          rename: function(dest, src) {
            return dest + src.replace(/\.(\w+)$/,'-2x.$1');
          }
        }]
      }
    },

    sprite:{
      all: {
        src             : IMAGE_FILES_ICONS,
        dest            : 'images/generated/sprite-' + spritecachebust + '.png',

        // FIXME: retina sprite generate is commented out. we have problems with a
        // few images re: retinaSrcFilter sorting and image size.
        //
        // src             : 'images/icons/*.png',
        // retinaSrcFilter : 'images/icons/*-2x.png',
        // dest            : 'images/generated/sprite.png',
        // retinaDest      : 'images/generated/sprite-2x.png',

        destCss         : 'sass/variables/_spritemap.scss',
        cssFormat       : 'scss_maps',

        // FIXME: need imgPath set explicitly because relative paths resolve
        // one level up from miss the 'mailman' folder. odd. need to figure out
        // why.
        imgPath         : '/sites/all/themes/custom/dfc/images/generated/sprite-' + spritecachebust + '.png',
        // retinaImgPath   : '/sites/all/themes/custom/mailman/images/generated/sprite-2x.png',

        // same as from compass config
        algorithm       : "left-right",
        padding         : 20
      }
    },

    sass_globbing: {
      options: {
        useSingleQuotes: false
      },
      all: {
        files: {
          'sass/variables.scss'    : 'sass/variables/**/*.scss',
          'sass/abstractions.scss' : 'sass/abstractions/**/*.scss',
          'sass/overrides.scss'    : 'sass/overrides/**/*.scss',
          'sass/base.scss'         : 'sass/base/**/*.scss',
          'sass/components.scss'   : 'sass/components/**/*.scss'
        }
      }
    },

    sass: {
      // see https://github.com/sass/node-sass#options
      options: {
        sourceMap: true,
        outputStyle : 'nested', // nested, expanded, compact, compressed
        sourceComments : true,
        // bower packages @import'ed in our CSS
        // FIXME: avoid hardcoding all of this. (thought: IIFE + somehow
        // leverage bower.json)
        includePaths : [
          "<%= bower_config.directory %>/normalize-scss",
          "<%= bower_config.directory %>/compass-mixins/lib",
          "<%= bower_config.directory %>/breakpoint-sass/stylesheets",
          "<%= bower_config.directory %>/susy/sass"
        ]
      },
      dev : {
        options : { },
        files: {
          'css/dfc.hacks.css'    : 'sass/dfc.hacks.scss',
          'css/dfc.no-query.css' : 'sass/dfc.no-query.scss',
          'css/dfc.normalize.css': 'sass/dfc.normalize.scss',
          'css/dfc.styles.css'   : 'sass/dfc.styles.scss'
        }
      },
      dist : {
        options : {
          outputStyle : 'compressed',
          sourceComments : false
        },
        files: "<%= sass.dev.files %>"
      }
    },

    jshint: {
      options: {
        jshintrc: '.jshintrc'
      },
      all: JS_FILES_NO_MIN
    },

    uglify: {
      dev: {
        options: {
          mangle: false,
          compress: false,
          beautify: true
        },
        files: [{
          expand: true,
          flatten: true,
          dest: 'js',
          src: JS_FILES_NO_MIN,
          rename: function(dest, src) {
            var folder = src.substring(0, src.lastIndexOf('/'));
            var filename = src.substring(src.lastIndexOf('/'), src.length);
            filename = filename.substring(0, filename.lastIndexOf('.'));
            return dest + '/' + folder + filename + '.min.js';
          }
        }]
      },
      dist: {
        options: {
          mangle: true,
          compress: true
        },
        files: "<%= uglify.dev.files %>"
      }
    },

    notify_hooks: {
      options: {
        enabled: true,
        success: true
      }
    }

  });


  grunt.loadNpmTasks('grunt-contrib-copy');
  grunt.loadNpmTasks('grunt-contrib-watch');
  grunt.loadNpmTasks('grunt-contrib-jshint');
  grunt.loadNpmTasks('grunt-contrib-uglify');
  grunt.loadNpmTasks('grunt-sass');
  grunt.loadNpmTasks('grunt-sass-globbing');
  grunt.loadNpmTasks('grunt-spritesmith');
  grunt.loadNpmTasks('grunt-image-resize');
  grunt.loadNpmTasks('grunt-shell');
  grunt.loadNpmTasks('grunt-notify');

  grunt.task.run('notify_hooks');

  grunt.registerTask('css', 'Run all tasks related to CSS compilation.', function(target) {
    // expect target passed. if no target, pull it from GRUNT_TARGET, otherwise
    // default to 'dev'
    if (target === undefined) {
      target = process.env['GRUNT_TARGET'] || 'dev';
      console.log("No target passed. Defaulting to '" + target + "'.");
    }

    grunt.task.run(
      // FIXME: add these tasks back in once we have retina sprite generation
      // worked out
      // 'image_resize',
      // 'copy',
      'sprite',
      'sass_globbing',
      'sass:' + target
    );
  });

  grunt.registerTask('js', 'Run all tasks related to JS (linting, minification).', function(target) {
    // expect target passed. if no target, pull it from GRUNT_TARGET, otherwise
    // default to 'dev'
    if (target === undefined) {
      target = process.env['GRUNT_TARGET'] || 'dev';
      console.log("No target passed. Defaulting to '" + target + "'.");
    }

    if (target === "dev") {
      // run jshint after uglify so the task does not abort due to linting
      // issues. it should really abort, but let's not change horses midstream.
      //
      // FIXME: disabled jshint because we don't seem to pay attention to
      // jshint's output, and should we switch to 'dev' on CI for any reason,
      // the grunt task should not abort.
      grunt.task.run(
        'uglify:' + target
        // 'jshint'
      );
    } else {
      grunt.task.run(
        'uglify:' + target
      );
    }
  });

  grunt.registerTask('build', 'Run all front-end related build tasks.', function(target) {
    // expect target passed. if no target, pull it from GRUNT_TARGET, otherwise
    // default to 'dev'
    if (target === undefined) {
      target = process.env['GRUNT_TARGET'] || 'dev';
      console.log("No target passed. Defaulting to '" + target + "'.");
    }

    grunt.task.run(
      'css:' + target,
      'js:' + target
    );
  });

};
