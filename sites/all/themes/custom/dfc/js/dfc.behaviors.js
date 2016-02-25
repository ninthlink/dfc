(function ($) {

  /**
   * The recommended way for producing HTML markup through JavaScript is to write
   * theming functions. These are similiar to the theming functions that you might
   * know from 'phptemplate' (the default PHP templating engine used by most
   * Drupal themes including Omega). JavaScript theme functions accept arguments
   * and can be overriden by sub-themes.
   *
   * In most cases, there is no good reason to NOT wrap your markup producing
   * JavaScript in a theme function.
   */
  Drupal.theme.prototype.dfcExampleButton = function (path, title) {
    // Create an anchor element with jQuery.
    return $('<a href="' + path + '" title="' + title + '">' + title + '</a>');
  };

  /**
   * Behaviors are Drupal's way of applying JavaScript to a page. In short, the
   * advantage of Behaviors over a simple 'document.ready()' lies in how it
   * interacts with content loaded through Ajax. Opposed to the
   * 'document.ready()' event which is only fired once when the page is
   * initially loaded, behaviors get re-executed whenever something is added to
   * the page through Ajax.
   *
   * You can attach as many behaviors as you wish. In fact, instead of overloading
   * a single behavior with multiple, completely unrelated tasks you should create
   * a separate behavior for every separate task.
   *
   * In most cases, there is no good reason to NOT wrap your JavaScript code in a
   * behavior.
   *
   * @param context
   *   The context for which the behavior is being executed. This is either the
   *   full page or a piece of HTML that was just added through Ajax.
   * @param settings
   *   An array of settings (added through drupal_add_js()). Instead of accessing
   *   Drupal.settings directly you should use this because of potential
   *   modifications made by the Ajax callback that also produced 'context'.
   */
  Drupal.behaviors.dfcExampleBehavior = {
    attach: function (context, settings) {
      
      if ( $('#block-views-user-ranking-block-1').size() > 0 ) {
        // add x?
        if ( $('body').hasClass('section-user') ) {
          $('#block-views-user-ranking-block-1').find('h2, h3, .view-filters, .views-field-lifetime-user-standing').remove();
        } else {
          // leaderboard page
          $('.view-user-ranking').each(function() {
            if ( $(this).find('.xcollapse').size() == 0 ) {
              $(this).find('.view-content').append('<a href="#x" class="xcollapse">x</a>')
                .children('.xcollapse').click(function() {
                  $('.block--views-user-ranking-block-1, .block--views-user-ranking-block-3').addClass('collapsed');
                  return false;
                });
            }
          });
          // add togglers
          if ( $('.content-bottom .leadertog').size() == 0 ) {
            $('.content-bottom').prepend('<a name="top" />').append('<div class="leadertog"><a href="#" class="lifetime">Lifetime Points</a><a href="#" class="monthly active">Monthly Points</a></div>')
              .find('.leadertog a.lifetime').click(function() {
                if ( $(this).hasClass('active') == false ) {
                  $('.block--views-user-ranking-block-3, .block--views-leaderboards-block-1').hide();
                  $('.block--views-user-ranking-block-1, .block--views-leaderboards-block-2').show();
                  $(this).addClass('active').next().removeClass('active');
                }
                return false;
              }).next().click(function() {
                if ( $(this).hasClass('active') == false ) {
                  $('.block--views-user-ranking-block-3, .block--views-leaderboards-block-1').show();
                  $('.block--views-user-ranking-block-1, .block--views-leaderboards-block-2').hide();
                  $(this).addClass('active').prev().removeClass('active');
                }
                return false;
              });
          }
        }
      }
      
      if ( $('#edit-field-media-type-tid-wrapper').size() > 0 ) {
        $('.block--views-media-items-block-3, .block--views-media-items-block-4').hide();
        // recreate unhooked filders..
        $('#block-views-media-items-block-1 .view-filters').empty().html('<div class="form-item-edit-field-media-type-tid-2"><a href="#videos" class="active">Videos</a></div><div class="form-item-edit-field-media-type-tid-3"><a href="#images">Images</a></div>');
        
        $('.form-item-edit-field-media-type-tid-2 a').unbind('click').bind('click.dfctoggle', function() {
          $('.block--views-media-items-block, .block--views-media-items-block-3, .block--views-media-items-block-4').hide();
          $(this).addClass('active').parent().next().children().removeClass('active');
          $('.block--views-media-items-block-3').show();
          return false;
        }).parent().next().children().unbind('click.dfctoggle').bind('click.dfctoggle', function() {
          $('.block--views-media-items-block, .block--views-media-items-block-3, .block--views-media-items-block-4').hide();
          $(this).addClass('active').parent().prev().children().removeClass('active');
          $('.block--views-media-items-block-4').show();
          return false;
        });
      }
      
      // hax for media category photo icon
      if ( $('.field--media-category').size() > 0 ) {
        $('.field--media-category').each(function() {
          var thistxt = $(this).text();
          if ( thistxt.indexOf('Photo') > 0 ) {
            $(this).addClass('photo');
          }
        });
      }
      // safari check to fix some owl carousels
      if (navigator.userAgent.indexOf('Safari') != -1 && navigator.userAgent.indexOf('Chrome') == -1) {
        setTimeout(function() {
          
          if ( $('#block-views-homepage-slider-bxsliderblock .owl-carousel').size() > 0 ) {
            // Home Slides carousel
            $('#block-views-homepage-slider-bxsliderblock .owl-carousel').data('owlCarousel').reinit();
          }
          
          if ( $('#block-views-related-videos-block .owl-carousel').size() > 0 ) {
            // in this case, just hide partners for now
            $('#block-views-partners-block').remove();
            // Related Content carousel
            $('#block-views-related-videos-block .owl-carousel').data('owlCarousel').reinit();
          }
          
          if ( $('#block-views-media-items-block-1 .owl-carousel').size() > 0 ) {
            // Media landing top carousel
            $('#block-views-media-items-block-1 .owl-carousel').data('owlCarousel').reinit();
          }

          if ( $('#block-views-prizes-block .owl-carousel').size() > 0 ) {
            // Prizes carousel
            $('#block-views-prizes-block .owl-carousel').data('owlCarousel').reinit();
          }
          
          if ( $('.view-partners .owl-carousel').size() > 0 ) {
            // Partners carousel
            $('.view-partners .owl-carousel').data('owlCarousel').reinit();
          }
        }, 1000);
      }
    }
  };

})(jQuery);
