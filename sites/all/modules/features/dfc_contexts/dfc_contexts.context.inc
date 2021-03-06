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
        'views--exp-resorts-block' => array(
          'module' => 'views',
          'delta' => '-exp-resorts-block',
          'region' => 'content_top',
          'weight' => '-8',
        ),
        'views-resorts-block_1' => array(
          'module' => 'views',
          'delta' => 'resorts-block_1',
          'region' => 'content_bottom',
          'weight' => '-10',
        ),
        'views-banner_ads-block' => array(
          'module' => 'views',
          'delta' => 'banner_ads-block',
          'region' => 'content_bottom',
          'weight' => '-9',
        ),
        'views-resorts-block' => array(
          'module' => 'views',
          'delta' => 'resorts-block',
          'region' => 'content_bottom',
          'weight' => '-8',
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
        'views-homepage_slider-bxsliderblock' => array(
          'module' => 'views',
          'delta' => 'homepage_slider-bxsliderblock',
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
        'views-prizes-block' => array(
          'module' => 'views',
          'delta' => 'prizes-block',
          'region' => 'content_top',
          'weight' => '-7',
        ),
        'views-giveaway_winners-block' => array(
          'module' => 'views',
          'delta' => 'giveaway_winners-block',
          'region' => 'content_bottom',
          'weight' => '-9',
        ),
        'views-offers-block_1' => array(
          'module' => 'views',
          'delta' => 'offers-block_1',
          'region' => 'content_bottom',
          'weight' => '-8',
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
        'views-user_ranking-block_3' => array(
          'module' => 'views',
          'delta' => 'user_ranking-block_3',
          'region' => 'content_bottom',
          'weight' => '-9',
        ),
        'views-banner_ads-block' => array(
          'module' => 'views',
          'delta' => 'banner_ads-block',
          'region' => 'content_bottom',
          'weight' => '-8',
        ),
        'views-leaderboards-block_2' => array(
          'module' => 'views',
          'delta' => 'leaderboards-block_2',
          'region' => 'content_bottom',
          'weight' => '-7',
        ),
        'views-leaderboards-block_1' => array(
          'module' => 'views',
          'delta' => 'leaderboards-block_1',
          'region' => 'content_bottom',
          'weight' => '-6',
        ),
        'dfc_convert_points-giveaway_countdown' => array(
          'module' => 'dfc_convert_points',
          'delta' => 'giveaway_countdown',
          'region' => 'footer_top',
          'weight' => '-48',
        ),
        'views-prizes-block' => array(
          'module' => 'views',
          'delta' => 'prizes-block',
          'region' => 'footer_top',
          'weight' => '-47',
        ),
        'bean-home---cta' => array(
          'module' => 'bean',
          'delta' => 'home---cta',
          'region' => 'footer_top',
          'weight' => '-46',
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
  $context->description = 'Media landing page';
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
        'views-media_items-block_3' => array(
          'module' => 'views',
          'delta' => 'media_items-block_3',
          'region' => 'content',
          'weight' => '-9',
        ),
        'views-media_items-block_4' => array(
          'module' => 'views',
          'delta' => 'media_items-block_4',
          'region' => 'content',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Media landing page');
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
        'views-banner_ads-block_1' => array(
          'module' => 'views',
          'delta' => 'banner_ads-block_1',
          'region' => 'content',
          'weight' => '10',
        ),
        'views-related_videos-block' => array(
          'module' => 'views',
          'delta' => 'related_videos-block',
          'region' => 'content_bottom',
          'weight' => '-10',
        ),
        'views-banner_ads-block' => array(
          'module' => 'views',
          'delta' => 'banner_ads-block',
          'region' => 'content_bottom',
          'weight' => '0',
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
        'views-prizes-block' => array(
          'module' => 'views',
          'delta' => 'prizes-block',
          'region' => 'footer_top',
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
        'dfc_convert_points-double_giveaway_countdown' => array(
          'module' => 'dfc_convert_points',
          'delta' => 'double_giveaway_countdown',
          'region' => 'content_bottom',
          'weight' => '-9',
        ),
        'bean-prizeboard' => array(
          'module' => 'bean',
          'delta' => 'prizeboard',
          'region' => 'content_bottom',
          'weight' => '-8',
        ),
        'dfc_convert_points-next_timed_giveaway_countdown' => array(
          'module' => 'dfc_convert_points',
          'delta' => 'next_timed_giveaway_countdown',
          'region' => 'footer_top',
          'weight' => '-10',
        ),
        'views-banner_ads-block' => array(
          'module' => 'views',
          'delta' => 'banner_ads-block',
          'region' => 'footer_top',
          'weight' => '-9',
        ),
        'views-timed_giveaways-block' => array(
          'module' => 'views',
          'delta' => 'timed_giveaways-block',
          'region' => 'footer_top',
          'weight' => '-8',
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
        'views-user_ranking-block_2' => array(
          'module' => 'views',
          'delta' => 'user_ranking-block_2',
          'region' => 'content',
          'weight' => '48',
        ),
        'dfc_user_blocks-account_form' => array(
          'module' => 'dfc_user_blocks',
          'delta' => 'account_form',
          'region' => 'content',
          'weight' => '49',
        ),
        'dfc_user_blocks-your_membership' => array(
          'module' => 'dfc_user_blocks',
          'delta' => 'your_membership',
          'region' => 'content_bottom',
          'weight' => '-47',
        ),
        'dfc_user_blocks-membership_benefits' => array(
          'module' => 'dfc_user_blocks',
          'delta' => 'membership_benefits',
          'region' => 'content_bottom',
          'weight' => '-46',
        ),
        'views-my_invitiations-block' => array(
          'module' => 'views',
          'delta' => 'my_invitiations-block',
          'region' => 'content_bottom',
          'weight' => '-45',
        ),
        'invite-invite_add_invite_by_email' => array(
          'module' => 'invite',
          'delta' => 'invite_add_invite_by_email',
          'region' => 'content_bottom',
          'weight' => '-44',
        ),
        'formblock-user_media' => array(
          'module' => 'formblock',
          'delta' => 'user_media',
          'region' => 'content_bottom',
          'weight' => '-43',
        ),
        'views-user_media-block_1' => array(
          'module' => 'views',
          'delta' => 'user_media-block_1',
          'region' => 'content_bottom',
          'weight' => '-42',
        ),
        'views-user_media-block_2' => array(
          'module' => 'views',
          'delta' => 'user_media-block_2',
          'region' => 'content_bottom',
          'weight' => '-41',
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
  t('User profile page, not edit form');
  $export['user_page'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'user_page_edit';
  $context->description = 'User profile page, edit form';
  $context->tag = '';
  $context->conditions = array(
    'user_page' => array(
      'values' => array(
        'form' => 'form',
      ),
      'options' => array(
        'mode' => 'all',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-user_ranking-block_1' => array(
          'module' => 'views',
          'delta' => 'user_ranking-block_1',
          'region' => 'content',
          'weight' => '-10',
        ),
        'dfc_user_blocks-your_membership' => array(
          'module' => 'dfc_user_blocks',
          'delta' => 'your_membership',
          'region' => 'content_bottom',
          'weight' => '-10',
        ),
        'dfc_user_blocks-membership_benefits' => array(
          'module' => 'dfc_user_blocks',
          'delta' => 'membership_benefits',
          'region' => 'content_bottom',
          'weight' => '-9',
        ),
        'views-my_invitiations-block' => array(
          'module' => 'views',
          'delta' => 'my_invitiations-block',
          'region' => 'content_bottom',
          'weight' => '-8',
        ),
        'invite-invite_add_invite_by_email' => array(
          'module' => 'invite',
          'delta' => 'invite_add_invite_by_email',
          'region' => 'content_bottom',
          'weight' => '-7',
        ),
        'formblock-user_media' => array(
          'module' => 'formblock',
          'delta' => 'user_media',
          'region' => 'content_bottom',
          'weight' => '-6',
        ),
        'views-user_media-block_1' => array(
          'module' => 'views',
          'delta' => 'user_media-block_1',
          'region' => 'content_bottom',
          'weight' => '-5',
        ),
        'views-user_media-block_2' => array(
          'module' => 'views',
          'delta' => 'user_media-block_2',
          'region' => 'content_bottom',
          'weight' => '-4',
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
  t('User profile page, edit form');
  $export['user_page_edit'] = $context;

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

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'wild_oceans';
  $context->description = 'Wild Oceans landing page';
  $context->tag = 'page';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'wild-oceans' => 'wild-oceans',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'bean-wild-oceans-top' => array(
          'module' => 'bean',
          'delta' => 'wild-oceans-top',
          'region' => 'content_bottom',
          'weight' => '-10',
        ),
        'views-wild_oceans-block' => array(
          'module' => 'views',
          'delta' => 'wild_oceans-block',
          'region' => 'content_bottom',
          'weight' => '-9',
        ),
        'bean-wild-oceans-cta' => array(
          'module' => 'bean',
          'delta' => 'wild-oceans-cta',
          'region' => 'footer_top',
          'weight' => '-10',
        ),
      ),
    ),
    'region' => array(
      'dfc' => array(
        'disable' => array(
          'content' => 'content',
          'branding' => 0,
          'header' => 0,
          'navigation' => 0,
          'featured_top' => 0,
          'content_top' => 0,
          'highlighted' => 0,
          'help' => 0,
          'sidebar_first' => 0,
          'sidebar_second' => 0,
          'content_bottom' => 0,
          'footer_top' => 0,
          'footer' => 0,
          'dashboard_main' => 0,
          'dashboard_sidebar' => 0,
          'dashboard_inactive' => 0,
        ),
      ),
      'dfc_admin' => array(
        'disable' => array(
          'content' => 0,
          'help' => 0,
          'messages' => 0,
          'page_top' => 0,
          'page_bottom' => 0,
          'sidebar_first' => 0,
          'dashboard_main' => 0,
          'dashboard_sidebar' => 0,
          'dashboard_inactive' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Wild Oceans landing page');
  t('page');
  $export['wild_oceans'] = $context;

  return $export;
}
