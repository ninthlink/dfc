<?php
/**
 * @file
 * dfc_bean.bean.inc
 */

/**
 * Implements hook_bean_admin_ui_types().
 */
function dfc_bean_bean_admin_ui_types() {
  $export = array();

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'slideshow_bean';
  $bean_type->label = 'Slideshow Bean';
  $bean_type->options = '';
  $bean_type->description = 'Add a block with a slideshow of images';
  $export['slideshow_bean'] = $bean_type;

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'static_bean';
  $bean_type->label = 'Static Bean';
  $bean_type->options = '';
  $bean_type->description = '';
  $export['static_bean'] = $bean_type;

  return $export;
}
