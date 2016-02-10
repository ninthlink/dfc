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
          $('#block-views-user-ranking-block-1').each(function() {
            if ( $(this).find('.xcollapse').size() == 0 ) {
              $(this).find('.view-content').append('<a href="#x" class="xcollapse">x</a>')
                .children('.xcollapse').click(function() {
                  $(this).parent().toggle();
                  return false;
                });
            }
          });
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
    }
  };

})(jQuery);
