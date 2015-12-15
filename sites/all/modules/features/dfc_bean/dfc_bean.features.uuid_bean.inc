<?php
/**
 * @file
 * dfc_bean.features.uuid_bean.inc
 */

/**
 * Implements hook_uuid_features_default_beans().
 */
function dfc_bean_uuid_features_default_beans() {
  $beans = array();

  $beans[] = array(
    'label' => 'Header Info',
    'description' => NULL,
    'title' => '',
    'type' => 'static_bean',
    'data' => array(
      'view_mode' => 'default',
    ),
    'delta' => 'header-info',
    'view_mode' => 'default',
    'created' => 1450150434,
    'log' => '',
    'uid' => 4,
    'default_revision' => 1,
    'revisions' => array(),
    'vuuid' => '6e781f86-cf14-4af4-a541-4a7951021be0',
    'uuid' => '0da51c59-56be-42bc-92c0-65e2faf4cf0c',
    'field_background_image' => array(),
    'field_text' => array(
      'und' => array(
        0 => array(
          'value' => '<div class="header-links"><a href="/user">Member Login</a> | <a href="#">Points Leaderboard</a></div>
<div class="header-join"><a href="#">Join DFC Now</a></div>',
          'format' => 'full_html',
          'safe_value' => '<div class="header-links"><a href="/user">Member Login</a> | <a href="#">Points Leaderboard</a></div>
<div class="header-join"><a href="#">Join DFC Now</a></div>
',
        ),
      ),
    ),
  );
  return $beans;
}
