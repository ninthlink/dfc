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

function dfc_preprocess_commerce_checkout_review(&$variables) {
	
  $panes = array();
  foreach ($variables['form']['#data'] as $pane_id => $data) {
    $panes[$pane_id] = array(
      'title' => $data['title'],
      'data' => $data['data'],
    );
  }
  $variables['panes'] = $panes;
}