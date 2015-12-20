<?php
/**
 * @file
 * dfc_contexts.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function dfc_contexts_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'clubhouse';
  $context->description = '';
  $context->tag = 'page';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'clubhouse' => 'clubhouse',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'bean-clubhouse-feature' => array(
          'module' => 'bean',
          'delta' => 'clubhouse-feature',
          'region' => 'content_top',
          'weight' => '-10',
        ),
        'bean-clubhouse-intro-text' => array(
          'module' => 'bean',
          'delta' => 'clubhouse-intro-text',
          'region' => 'content_top',
          'weight' => '-9',
        ),
        'bean-clubhouse-boat-tour' => array(
          'module' => 'bean',
          'delta' => 'clubhouse-boat-tour',
          'region' => 'content_top',
          'weight' => '-8',
        ),
        'bean-clubhouse-slideshow' => array(
          'module' => 'bean',
          'delta' => 'clubhouse-slideshow',
          'region' => 'content_top',
          'weight' => '-7',
        ),
        'bean-clubhouse-features-and-highlight' => array(
          'module' => 'bean',
          'delta' => 'clubhouse-features-and-highlight',
          'region' => 'content_top',
          'weight' => '-6',
        ),
        'bean-clubhouse-book' => array(
          'module' => 'bean',
          'delta' => 'clubhouse-book',
          'region' => 'content_top',
          'weight' => '-5',
        ),
        'bean-clubhouse-location' => array(
          'module' => 'bean',
          'delta' => 'clubhouse-location',
          'region' => 'content_top',
          'weight' => '-4',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('page');
  $export['clubhouse'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'front';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'bean-home---how-it-works' => array(
          'module' => 'bean',
          'delta' => 'home---how-it-works',
          'region' => 'content_top',
          'weight' => '-10',
        ),
        'views-offers-block' => array(
          'module' => 'views',
          'delta' => 'offers-block',
          'region' => 'content_top',
          'weight' => '-9',
        ),
        'views-offers-block_1' => array(
          'module' => 'views',
          'delta' => 'offers-block_1',
          'region' => 'content_bottom',
          'weight' => '-10',
        ),
        'views-partners-block' => array(
          'module' => 'views',
          'delta' => 'partners-block',
          'region' => 'footer_top',
          'weight' => '-10',
        ),
        'bean-home---cta' => array(
          'module' => 'bean',
          'delta' => 'home---cta',
          'region' => 'footer_top',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['front'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'global';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'bean-header-info' => array(
          'module' => 'bean',
          'delta' => 'header-info',
          'region' => 'header',
          'weight' => '-10',
        ),
        'system-main-menu' => array(
          'module' => 'system',
          'delta' => 'main-menu',
          'region' => 'navigation',
          'weight' => '-10',
        ),
        'menu-menu-footer-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-footer-menu',
          'region' => 'footer',
          'weight' => '-10',
        ),
        'bean-footer-copyright' => array(
          'module' => 'bean',
          'delta' => 'footer-copyright',
          'region' => 'footer',
          'weight' => '-9',
        ),
      ),
    ),
    'responsive_menus_general' => array(
      'responsive_menus_style' => 'responsive_menus_simple',
      'responsive_menus_style_settings' => array(
        'responsive_menus_simple_absolute' => array(
          1 => '1',
        ),
        'responsive_menus_disable_mouse_events' => array(
          1 => 0,
        ),
        'responsive_menus_remove_attributes' => array(
          1 => '1',
        ),
        'responsive_menus_css_selectors' => '#block-system-main-menu',
        'responsive_menus_simple_text' => 'Menu',
        'responsive_menus_media_size' => '2000',
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['global'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'media';
  $context->description = '';
  $context->tag = 'page';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'media' => 'media',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-media_items-block_1' => array(
          'module' => 'views',
          'delta' => 'media_items-block_1',
          'region' => 'content_top',
          'weight' => '-10',
        ),
        'views-media_items-block' => array(
          'module' => 'views',
          'delta' => 'media_items-block',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('page');
  $export['media'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'media_item';
  $context->description = 'Media Content Type';
  $context->tag = 'content type';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'media_item' => 'media_item',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-partners-block' => array(
          'module' => 'views',
          'delta' => 'partners-block',
          'region' => 'footer_top',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Media Content Type');
  t('content type');
  $export['media_item'] = $context;

  return $export;
}
