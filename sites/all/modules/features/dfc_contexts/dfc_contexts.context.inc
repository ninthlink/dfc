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

  return $export;
}
