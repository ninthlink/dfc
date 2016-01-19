<?php

if (arg(0) == 'user' && !arg(2)) {
  drupal_add_js(drupal_get_path('theme', 'dfc') . '/js/user.js');
}