<?php
/**
 * @file
 * dfc_user.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function dfc_user_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}

/**
 * Implements hook_views_api().
 */
function dfc_user_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function dfc_user_node_info() {
  $items = array(
    'user_media' => array(
      'name' => t('User Media Item'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
