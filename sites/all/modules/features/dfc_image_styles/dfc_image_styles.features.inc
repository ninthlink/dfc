<?php
/**
 * @file
 * dfc_image_styles.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function dfc_image_styles_image_default_styles() {
  $styles = array();

  // Exported image style: 394x392.
  $styles['394x392'] = array(
    'label' => '394x392',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 394,
          'height' => 392,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: 784x520.
  $styles['784x520'] = array(
    'label' => '784x520',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 784,
          'height' => 520,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
