<?php
/**
 * @file
 * dfc_blocks.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function dfc_blocks_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Footer Copyright';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'footer_copyright';
  $fe_block_boxes->body = '<div class="copyright-info">© 2016 Dollar Fishing Club. All Rights Reserved.</div>
<ul class="social-links">
<li class="social-twitter"><a href="http://www.twitter.com"><span class="social-text">Twitter</span></a></li>
<li class="social-facebook"><a href="http://www.facebook.com"><span class="social-text">Facebook</span></a></li>
<li class="social-googleplus"><a href="http://plus.google.com"><span class="social-text">Google Plus</span></a></li>
<li class="social-instagram"><a href="http://www.instagram.com"><span class="social-text">Instagram</span></a></li>
<ul>';

  $export['footer_copyright'] = $fe_block_boxes;

  return $export;
}
