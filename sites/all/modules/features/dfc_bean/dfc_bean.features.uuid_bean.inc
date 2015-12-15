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
    'label' => 'Footer Copyright',
    'description' => NULL,
    'title' => '',
    'type' => 'static_bean',
    'data' => array(
      'view_mode' => 'default',
    ),
    'delta' => 'footer-copyright',
    'view_mode' => 'default',
    'created' => 1450153673,
    'log' => '',
    'uid' => 4,
    'default_revision' => 1,
    'revisions' => array(),
    'vuuid' => '2c83c955-fff2-4f65-b157-3f1647230710',
    'uuid' => '06e0b1cc-7fa3-4510-8616-d2ab543fa3fd',
    'field_background_image' => array(),
    'field_text' => array(
      'und' => array(
        0 => array(
          'value' => '<div class="copyright-info">© 2016 Dollar Fishing Club. All Rights Reserved.</div>
<ul class="social-links">
<li class="social-twitter"><a href="http://www.twitter.com"><span class="social-text">Twitter</span></a></li>
<li class="social-facebook"><a href="http://www.facebook.com"><span class="social-text">Facebook</span></a></li>
<li class="social-googleplus"><a href="http://plus.google.com"><span class="social-text">Google Plus</span></a></li>
<li class="social-instagram"><a href="http://www.instagram.com"><span class="social-text">Instagram</span></a></li>
<ul>',
          'format' => 'full_html',
          'safe_value' => '<div class="copyright-info">© 2016 Dollar Fishing Club. All Rights Reserved.</div>
<ul class="social-links"><li class="social-twitter"><a href="http://www.twitter.com"><span class="social-text">Twitter</span></a></li>
<li class="social-facebook"><a href="http://www.facebook.com"><span class="social-text">Facebook</span></a></li>
<li class="social-googleplus"><a href="http://plus.google.com"><span class="social-text">Google Plus</span></a></li>
<li class="social-instagram"><a href="http://www.instagram.com"><span class="social-text">Instagram</span></a></li>
<ul></ul></ul>',
        ),
      ),
    ),
    'title_field' => array(
      'und' => array(
        0 => array(
          'value' => '',
          'format' => NULL,
          'safe_value' => '',
        ),
      ),
    ),
  );
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
    'title_field' => array(
      'und' => array(
        0 => array(
          'value' => '',
          'format' => NULL,
          'safe_value' => '',
        ),
      ),
    ),
  );
  return $beans;
}
