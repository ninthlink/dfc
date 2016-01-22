<?php
/**
 * @file
 * pro_staffs.features.uuid_bean.inc
 */

/**
 * Implements hook_uuid_features_default_beans().
 */
function pro_staffs_uuid_features_default_beans() {
  $beans = array();

  $beans[] = array(
    'label' => 'Staff Pro Intro',
    'description' => NULL,
    'title' => '',
    'type' => 'static_bean',
    'data' => array(
      'view_mode' => 'default',
    ),
    'delta' => 'staff-pro-intro',
    'view_mode' => 'default',
    'created' => 1453383705,
    'log' => '',
    'uid' => 3,
    'default_revision' => 1,
    'revisions' => array(),
    'vuuid' => 'd76b1364-7d84-4254-9044-a720118020bf',
    'uuid' => '59afa158-6db0-4441-838c-15f99eabe860',
    'field_background_image' => array(),
    'field_text' => array(
      'und' => array(
        0 => array(
          'value' => '<div class="intro_text">
The <strong>Dollar Fishing Club</strong> has proudly partnered with the finest fishing captains, guides and charter operations in the Western Hemisphere. This All Star Pro Staff will assure you the finest “on the water” experience they can deliver on your charters with them. In addition to having a great day of fishing, you can enjoy it even more knowing as a DFC member, you’re receiving a 10% discount off their advertised rates. Enjoy every minute!!
</div>
<div class="intro_cta">
<h2>Intrested in Joining<br/> The DFC Pro Staff?</h2>
<a href="#" class="button">Request Application</a>
</div>
<div class="clear"></div>',
          'format' => 'full_html',
          'safe_value' => '<div class="intro_text">
The <strong>Dollar Fishing Club</strong> has proudly partnered with the finest fishing captains, guides and charter operations in the Western Hemisphere. This All Star Pro Staff will assure you the finest “on the water” experience they can deliver on your charters with them. In addition to having a great day of fishing, you can enjoy it even more knowing as a DFC member, you’re receiving a 10% discount off their advertised rates. Enjoy every minute!!
</div>
<div class="intro_cta">
<h2>Intrested in Joining<br /> The DFC Pro Staff?</h2>
<p><a href="#" class="button">Request Application</a>
</p></div>
<div class="clear"></div>
',
        ),
      ),
    ),
  );
  $beans[] = array(
    'label' => 'Pro Staff Top Block',
    'description' => NULL,
    'title' => '',
    'type' => 'static_bean',
    'data' => array(
      'view_mode' => 'default',
    ),
    'delta' => 'pro-staff-top-block',
    'view_mode' => 'default',
    'created' => 1453383611,
    'log' => '',
    'uid' => 3,
    'default_revision' => 1,
    'revisions' => array(),
    'vuuid' => '5485a8a2-b212-4d55-a903-27c3c5e1776c',
    'uuid' => 'e0ab40e5-77db-48a5-83dd-7f6e7e3ff9e9',
    'field_background_image' => array(
      'und' => array(
        0 => array(
          'fid' => 'b0b2355e-f47e-474e-8b5d-34df4cae9af5',
          'uid' => '2b534930-6bc3-4567-9cbd-7dc82607fab1',
          'filename' => 'bill_boyce.jpg',
          'uri' => 'public://bill_boyce.jpg',
          'filemime' => 'image/jpeg',
          'filesize' => 150323,
          'status' => 1,
          'timestamp' => 1453089944,
          'type' => 'image',
          'uuid' => 'b0b2355e-f47e-474e-8b5d-34df4cae9af5',
          'field_file_image_alt_text' => array(),
          'field_file_image_title_text' => array(),
          'rdf_mapping' => array(),
          'metadata' => array(
            'height' => 538,
            'width' => 1178,
          ),
          'alt' => NULL,
          'title' => NULL,
          'height' => NULL,
          'width' => NULL,
        ),
      ),
    ),
    'field_text' => array(
      'und' => array(
        0 => array(
          'value' => '<div class="fab-pre-title">Member Exclusive</div>
<h1>PRO STAFF</h1>
<div class="fab-subtitle">Get 10% OFF CHARTERS FROM<br/>DFC PRO ANGELERS</div>',
          'format' => 'full_html',
          'safe_value' => '<div class="fab-pre-title">Member Exclusive</div>
<h1>PRO STAFF</h1>
<div class="fab-subtitle">Get 10% OFF CHARTERS FROM<br />DFC PRO ANGELERS</div>
',
        ),
      ),
    ),
  );
  return $beans;
}
