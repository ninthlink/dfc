<?php
/**
 * @file
 * pro_staffs.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function pro_staffs_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['bean-pro-staff-top-block'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'pro-staff-top-block',
    'module' => 'bean',
    'node_types' => array(),
    'pages' => 'pro-staff',
    'roles' => array(),
    'themes' => array(
      'dfc' => array(
        'region' => 'content_top',
        'status' => 1,
        'theme' => 'dfc',
        'weight' => 1,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['bean-staff-pro-intro'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'staff-pro-intro',
    'module' => 'bean',
    'node_types' => array(),
    'pages' => 'pro-staff',
    'roles' => array(),
    'themes' => array(
      'dfc' => array(
        'region' => 'content_top',
        'status' => 1,
        'theme' => 'dfc',
        'weight' => 2,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-staffs-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'staffs-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'pro-staff',
    'roles' => array(),
    'themes' => array(
      'dfc' => array(
        'region' => 'content_bottom',
        'status' => 1,
        'theme' => 'dfc',
        'weight' => 2,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-staffs-block_1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'staffs-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'pro-staff',
    'roles' => array(),
    'themes' => array(
      'dfc' => array(
        'region' => 'content_bottom',
        'status' => 1,
        'theme' => 'dfc',
        'weight' => 1,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  return $export;
}
