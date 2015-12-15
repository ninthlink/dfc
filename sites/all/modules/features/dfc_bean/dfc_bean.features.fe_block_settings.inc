<?php
/**
 * @file
 * dfc_bean.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function dfc_bean_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['bean-header-info'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'header-info',
    'module' => 'bean',
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
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
