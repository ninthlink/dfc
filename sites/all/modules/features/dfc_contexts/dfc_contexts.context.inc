<?php
/**
 * @file
 * dfc_contexts.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function dfc_contexts_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'blog_landing';
  $context->description = 'Blog List Landing';
  $context->tag = 'page';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'blog' => 'blog',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-blog-block' => array(
          'module' => 'views',
          'delta' => 'blog-block',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Blog List Landing');
  t('page');
  $export['blog_landing'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'clubhouse';
  $context->description = '';
  $context->tag = 'page';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'clubhouse' => 'clubhouse',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'bean-clubhouse-feature' => array(
          'module' => 'bean',
          'delta' => 'clubhouse-feature',
          'region' => 'content_top',
          'weight' => '-10',
        ),
        'bean-clubhouse-intro-text' => array(
          'module' => 'bean',
          'delta' => 'clubhouse-intro-text',
          'region' => 'content_top',
          'weight' => '-9',
        ),
        'bean-clubhouse-boat-tour' => array(
          'module' => 'bean',
          'delta' => 'clubhouse-boat-tour',
          'region' => 'content_top',
          'weight' => '-8',
        ),
        'bean-clubhouse-slideshow' => array(
          'module' => 'bean',
          'delta' => 'clubhouse-slideshow',
          'region' => 'content_top',
          'weight' => '-7',
        ),
        'bean-clubhouse-features-and-highlight' => array(
          'module' => 'bean',
          'delta' => 'clubhouse-features-and-highlight',
          'region' => 'content_top',
          'weight' => '-6',
        ),
        'bean-clubhouse-book' => array(
          'module' => 'bean',
          'delta' => 'clubhouse-book',
          'region' => 'content_top',
          'weight' => '-5',
        ),
        'bean-clubhouse-location' => array(
          'module' => 'bean',
          'delta' => 'clubhouse-location',
          'region' => 'content_top',
          'weight' => '-4',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('page');
  $export['clubhouse'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'fab_52_resort';
  $context->description = 'Resorts';
  $context->tag = 'page';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'fab-52-resorts' => 'fab-52-resorts',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'bean-fab-52-resorts-top-block' => array(
          'module' => 'bean',
          'delta' => 'fab-52-resorts-top-block',
          'region' => 'content_top',
          'weight' => '-10',
        ),
        'bean-fab-52-intro' => array(
          'module' => 'bean',
          'delta' => 'fab-52-intro',
          'region' => 'content_top',
          'weight' => '-9',
        ),
        'views-resorts-block_1' => array(
          'module' => 'views',
          'delta' => 'resorts-block_1',
          'region' => 'content_bottom',
          'weight' => '-10',
        ),
        'views-resorts-block' => array(
          'module' => 'views',
          'delta' => 'resorts-block',
          'region' => 'content_bottom',
          'weight' => '-9',
        ),
        'views-offers-block_1' => array(
          'module' => 'views',
          'delta' => 'offers-block_1',
          'region' => 'footer_top',
          'weight' => '-10',
        ),
        'views-partners-block' => array(
          'module' => 'views',
          'delta' => 'partners-block',
          'region' => 'footer_top',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Resorts');
  t('page');
  $export['fab_52_resort'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'front';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-media_items-block_2' => array(
          'module' => 'views',
          'delta' => 'media_items-block_2',
          'region' => 'content_top',
          'weight' => '-10',
        ),
        'bean-home---how-it-works' => array(
          'module' => 'bean',
          'delta' => 'home---how-it-works',
          'region' => 'content_top',
          'weight' => '-9',
        ),
        'views-offers-block' => array(
          'module' => 'views',
          'delta' => 'offers-block',
          'region' => 'content_top',
          'weight' => '-8',
        ),
        'views-giveaway_winners-block' => array(
          'module' => 'views',
          'delta' => 'giveaway_winners-block',
          'region' => 'content_bottom',
          'weight' => '-10',
        ),
        'views-offers-block_1' => array(
          'module' => 'views',
          'delta' => 'offers-block_1',
          'region' => 'content_bottom',
          'weight' => '-9',
        ),
        'views-partners-block' => array(
          'module' => 'views',
          'delta' => 'partners-block',
          'region' => 'footer_top',
          'weight' => '-10',
        ),
        'bean-home---cta' => array(
          'module' => 'bean',
          'delta' => 'home---cta',
          'region' => 'footer_top',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['front'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'global';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'bean-header-info' => array(
          'module' => 'bean',
          'delta' => 'header-info',
          'region' => 'header',
          'weight' => '-10',
        ),
        'dfc_flop_menu-userfloplink' => array(
          'module' => 'dfc_flop_menu',
          'delta' => 'userfloplink',
          'region' => 'header',
          'weight' => '-9',
        ),
        'dfc_flop_menu-userflop' => array(
          'module' => 'dfc_flop_menu',
          'delta' => 'userflop',
          'region' => 'header',
          'weight' => '-8',
        ),
        'system-main-menu' => array(
          'module' => 'system',
          'delta' => 'main-menu',
          'region' => 'navigation',
          'weight' => '-10',
        ),
        'menu-menu-footer-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-footer-menu',
          'region' => 'footer',
          'weight' => '-10',
        ),
        'bean-footer-copyright' => array(
          'module' => 'bean',
          'delta' => 'footer-copyright',
          'region' => 'footer',
          'weight' => '-9',
        ),
      ),
    ),
    'responsive_menus_general' => array(
      'responsive_menus_style' => 'responsive_menus_simple',
      'responsive_menus_style_settings' => array(
        'responsive_menus_simple_absolute' => array(
          1 => '1',
        ),
        'responsive_menus_disable_mouse_events' => array(
          1 => 0,
        ),
        'responsive_menus_remove_attributes' => array(
          1 => '1',
        ),
        'responsive_menus_css_selectors' => '#block-system-main-menu',
        'responsive_menus_simple_text' => 'Menu',
        'responsive_menus_media_size' => '2000',
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['global'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'leaderboard_landing';
  $context->description = '';
  $context->tag = 'page';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'leaderboard' => 'leaderboard',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-user_ranking-block_1' => array(
          'module' => 'views',
          'delta' => 'user_ranking-block_1',
          'region' => 'content_bottom',
          'weight' => '-10',
        ),
        'views-leaderboards-block_1' => array(
          'module' => 'views',
          'delta' => 'leaderboards-block_1',
          'region' => 'content_bottom',
          'weight' => '-9',
        ),
        'dfc_convert_points-giveaway_countdown' => array(
          'module' => 'dfc_convert_points',
          'delta' => 'giveaway_countdown',
          'region' => 'footer_top',
          'weight' => '-10',
        ),
        'bean-home---cta' => array(
          'module' => 'bean',
          'delta' => 'home---cta',
          'region' => 'footer_top',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('page');
  $export['leaderboard_landing'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'media';
  $context->description = '';
  $context->tag = 'page';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'media' => 'media',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-media_items-block_1' => array(
          'module' => 'views',
          'delta' => 'media_items-block_1',
          'region' => 'content_top',
          'weight' => '-10',
        ),
        'views-media_items-block' => array(
          'module' => 'views',
          'delta' => 'media_items-block',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('page');
  $export['media'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'media_item';
  $context->description = 'Media Content Type';
  $context->tag = 'content type';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'media_item' => 'media_item',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-related_videos-block' => array(
          'module' => 'views',
          'delta' => 'related_videos-block',
          'region' => 'content_bottom',
          'weight' => '-10',
        ),
        'views-partners-block' => array(
          'module' => 'views',
          'delta' => 'partners-block',
          'region' => 'footer_top',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Media Content Type');
  t('content type');
  $export['media_item'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'membership';
  $context->description = '';
  $context->tag = 'page';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'membership' => 'membership',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'bean-membership-header' => array(
          'module' => 'bean',
          'delta' => 'membership-header',
          'region' => 'content_top',
          'weight' => '-10',
        ),
        'views-memberships-block' => array(
          'module' => 'views',
          'delta' => 'memberships-block',
          'region' => 'content_bottom',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('page');
  $export['membership'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'news_events_landing';
  $context->description = 'News and Events Landing';
  $context->tag = 'page';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'news-events' => 'news-events',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-news_events-block' => array(
          'module' => 'views',
          'delta' => 'news_events-block',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('News and Events Landing');
  t('page');
  $export['news_events_landing'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'prizeboard';
  $context->description = '';
  $context->tag = 'page';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'dfc-prizeboard' => 'dfc-prizeboard',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-giveaway_winners-block_1' => array(
          'module' => 'views',
          'delta' => 'giveaway_winners-block_1',
          'region' => 'content_bottom',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('page');
  $export['prizeboard'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'user_page';
  $context->description = 'User profile page, not edit form';
  $context->tag = '';
  $context->conditions = array(
    'user_page' => array(
      'values' => array(
        'view' => 'view',
      ),
      'options' => array(
        'mode' => 'all',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-my_invitiations-block' => array(
          'module' => 'views',
          'delta' => 'my_invitiations-block',
          'region' => 'content_bottom',
          'weight' => '-10',
        ),
        'invite-invite_add_invite_by_email' => array(
          'module' => 'invite',
          'delta' => 'invite_add_invite_by_email',
          'region' => 'content_bottom',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('User profile page, not edit form');
  $export['user_page'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'user_pages';
  $context->description = '';
  $context->tag = 'section';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'user/*' => 'user/*',
        'users/*' => 'users/*',
      ),
    ),
    'user' => array(
      'values' => array(
        'authenticated user' => 'authenticated user',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'bean-title-my-profile' => array(
          'module' => 'bean',
          'delta' => 'title-my-profile',
          'region' => 'featured_top',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('section');
  $export['user_pages'] = $context;

  return $export;
}
