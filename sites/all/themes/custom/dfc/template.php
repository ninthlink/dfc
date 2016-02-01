<?php

if (arg(0) == 'user' && !arg(2)) {
  drupal_add_js(drupal_get_path('theme', 'dfc') . '/js/user.js');
}

function dfc_preprocess_node($vars) {
  $node = $vars['node'];
  if ($node->type == 'product_display') {
    drupal_add_js(drupal_get_path('theme', 'dfc') . '/js/product.js');
  }
}