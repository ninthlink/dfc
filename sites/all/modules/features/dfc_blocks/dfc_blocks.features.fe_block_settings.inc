<?php
/**
 * @file
 * dfc_blocks.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function dfc_blocks_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-footer_copyright'] = array(
    'cache' => -1,
    'css_class' => 'footer-copyright',
    'custom' => 0,
    'machine_name' => 'footer_copyright',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'dfc' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'dfc',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['block-header_info'] = array(
    'cache' => -1,
    'css_class' => 'header-info',
    'custom' => 0,
    'machine_name' => 'header_info',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'dfc' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'dfc',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['menu-menu-footer-menu'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-footer-menu',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'dfc' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'dfc',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['system-main-menu'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'main-menu',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'dfc' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'dfc',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  return $export;
}
