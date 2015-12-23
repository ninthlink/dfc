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

  // Exported image style: 1070x610.
  $styles['1070x610'] = array(
    'label' => '1070x610',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1070,
          'height' => 610,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: 200x200.
  $styles['200x200'] = array(
    'label' => '200x200',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 200,
          'height' => 200,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: 348x196.
  $styles['348x196'] = array(
    'label' => '348x196',
    'effects' => array(
      4 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 348,
          'height' => 196,
        ),
        'weight' => 1,
      ),
    ),
  );

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

  // Exported image style: 440x282.
  $styles['440x282'] = array(
    'label' => '440x282',
    'effects' => array(
      3 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 440,
          'height' => 282,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: 712x438.
  $styles['712x438'] = array(
    'label' => '712x438',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 712,
          'height' => 438,
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
