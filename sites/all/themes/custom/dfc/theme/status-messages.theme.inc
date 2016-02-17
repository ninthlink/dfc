<?php

/**
 * @file
 * Contains the theme function override for 'status_messages'.
 */

/**
 * Returns HTML for status and/or error messages, grouped by type.
 *
 * @ingroup themeable
 */
function dfc_status_messages($variables) {
  $display = $variables['display'];
  $output = '';
  
  $status_heading = array(
    'status' => t('Status message'),
    'error' => t('Error message'),
    'warning' => t('Warning message'),
  );
  
  $firstmsg = true;
  
  foreach (drupal_get_messages($display) as $type => $messages) {
    $output .= '<div class="messages messages--' . $type . '">';
    if (!empty($status_heading[$type])) {
      $output .= '<h2 class="element-invisible">' . $status_heading[$type] . "</h2>";
    }
    if (count($messages) > 1) {
      if ( $firstmsg ) {
        $output .= '<div id="better-messages-wrapper" style="display:none;overflow:visible;position:absolute;z-index:9999;">';
        $output .= '<div id="better-messages-default"><div id="messages-inner">';
        $firstmsg = false;
      }
      $output .= '<ul>';
      foreach ($messages as $message) {
        $output .= '  <li>' . $message . '</li>';
      }
      $output .= '</ul>';
    }
    else {
      $output .= $messages[0];
    }
    $output .= '</div>';
  }
  if ( $firstmsg == false ) {
    // then it was output, so add x and closing divs too
    $output .= '<a class="message-close" href="#">X</a></div></div></div>';
  }
  return $output;
}
