<?php
/**
 * @file
 * dfc_views_nodequeues.features.inc
 */

/**
 * Implements hook_views_api().
 */
function dfc_views_nodequeues_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_fe_nodequeue_export_fields().
 */
function dfc_views_nodequeues_fe_nodequeue_export_fields() {
  $nodequeues = array();

  // Exported nodequeues: homepage_offers_3
  $nodequeues['homepage_offers_3'] = array(
    'name' => 'homepage_offers_3',
    'title' => 'Homepage Offers 3',
    'subqueue_title' => '',
    'size' => 3,
    'link' => '',
    'link_remove' => '',
    'owner' => 'nodequeue',
    'show_in_ui' => 1,
    'show_in_tab' => 1,
    'show_in_links' => 0,
    'reference' => 0,
    'reverse' => 0,
    'insert_at_front' => 0,
    'i18n' => 0,
    'subqueues' => 1,
    'types' => array(
      0 => 'offers',
    ),
    'roles' => array(),
    'count' => 0,
  );

  // Exported nodequeues: homepage_offers_6
  $nodequeues['homepage_offers_6'] = array(
    'name' => 'homepage_offers_6',
    'title' => 'Homepage Offers 6',
    'subqueue_title' => '',
    'size' => 6,
    'link' => '',
    'link_remove' => '',
    'owner' => 'nodequeue',
    'show_in_ui' => 1,
    'show_in_tab' => 1,
    'show_in_links' => 0,
    'reference' => 0,
    'reverse' => 0,
    'insert_at_front' => 0,
    'i18n' => 0,
    'subqueues' => 1,
    'types' => array(
      0 => 'offers',
    ),
    'roles' => array(),
    'count' => 0,
  );

  return $nodequeues;
}
