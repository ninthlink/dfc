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

  // Exported nodequeues: featured_resort
  $nodequeues['featured_resort'] = array(
    'name' => 'featured_resort',
    'title' => 'Featured Resort',
    'subqueue_title' => '',
    'size' => 1,
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
      0 => 'resort',
    ),
    'roles' => array(),
    'count' => 0,
  );

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

  // Exported nodequeues: homepage_partners
  $nodequeues['homepage_partners'] = array(
    'name' => 'homepage_partners',
    'title' => 'Homepage Partners',
    'subqueue_title' => '',
    'size' => 0,
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
      0 => 'partner',
    ),
    'roles' => array(),
    'count' => 0,
  );

  // Exported nodequeues: media_homepage
  $nodequeues['media_homepage'] = array(
    'name' => 'media_homepage',
    'title' => 'Media - Homepage',
    'subqueue_title' => '',
    'size' => 0,
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
      0 => 'media_item',
    ),
    'roles' => array(),
    'count' => 0,
  );

  // Exported nodequeues: media_media_carousel
  $nodequeues['media_media_carousel'] = array(
    'name' => 'media_media_carousel',
    'title' => 'Media - Media Carousel',
    'subqueue_title' => '',
    'size' => 8,
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
      0 => 'media_item',
    ),
    'roles' => array(),
    'count' => 0,
  );

  // Exported nodequeues: prizes
  $nodequeues['prizes'] = array(
    'name' => 'prizes',
    'title' => 'Prizes',
    'subqueue_title' => '',
    'size' => 0,
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
      0 => 'giveaway_prize',
      1 => 'product_display',
      2 => 'timed_giveaway',
    ),
    'roles' => array(),
    'count' => 0,
  );

  // Exported nodequeues: wild_oceans
  $nodequeues['wild_oceans'] = array(
    'name' => 'wild_oceans',
    'title' => 'Wild Oceans',
    'subqueue_title' => '',
    'size' => 0,
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
      0 => 'wild_ocean_project',
    ),
    'roles' => array(),
    'count' => 0,
  );

  return $nodequeues;
}
