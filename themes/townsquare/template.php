<?php

/**
 * @file
 * This file is empty by default because the base theme chain (Alpha & Omega) provides
 * all the basic functionality. However, in case you wish to customize the output that Drupal
 * generates through Alpha & Omega this file is a good place to do so.
 * 
 * Alpha comes with a neat solution for keeping this file as clean as possible while the code
 * for your subtheme grows. Please read the README.txt in the /preprocess and /process subfolders
 * for more information on this topic.
 */

function townsquare_css_alter(&$css) {
  foreach ($css as $file => $settings) {
    // Remove jQuery UI's theming, which messes up forms
    if ($file == 'modules/system/system.menus.css' || 
        $file == 'sites/all/modules/date/date_api/date.css' || 
        strpos($file, 'misc/ui/jquery.ui') === 0) {
      unset($css[$file]);
    }
  }
}

/**
 * Implements theme_menu_link().
 */
function townsquare_menu_link(array $variables) {
  $element = $variables['element'];
  $element['#attributes']['id'] = $element['#original_link']['menu_name'] .'-'. drupal_clean_css_identifier($element['#original_link']['link_path']);
  
  $sub_menu = '';

  if ($element['#below']) {
    $sub_menu = drupal_render($element['#below']);
  }
  $output = l($element['#title'], $element['#href'], $element['#localized_options']);
  return '<li' . drupal_attributes($element['#attributes']) . '>' . $output . $sub_menu . "</li>\n";
}

/**
 * Implements hook_process_region().
 */
function townsquare_process_region(&$vars) {
  if (in_array($vars['elements']['#region'], array('content', 'page_title', 'primary_tasks', 'branding'))) {
    $theme = alpha_get_theme();
    switch ($vars['elements']['#region']) {
      case 'primary_tasks':
        $vars['primary_tasks'] = array(
          '#theme' => 'menu_local_tasks',
          '#primary' => menu_primary_local_tasks()
        );
        break;

      case 'content':
        $vars['title_prefix'] = $theme->page['title_prefix'];
        $vars['title'] = $theme->page['title'];
        $vars['title_suffix'] = $theme->page['title_suffix'];
        $vars['title_hidden'] = $theme->page['title_hidden'];
        $vars['secondary_tasks'] = array(
          '#theme' => 'menu_local_tasks',
          '#secondary' => menu_secondary_local_tasks()
        );
        $vars['action_links'] = $theme->page['action_links'];      
        $vars['feed_icons'] = $theme->page['feed_icons'];
        break; 
      
      case 'branding':
        $vars['site_name'] = $theme->page['site_name'];
        $vars['site_slogan'] = $theme->page['site_slogan'];
        $vars['site_url'] = url('<front>');
        $vars['site_name_hidden'] = $theme->page['site_name_hidden'];
        $vars['site_slogan_hidden'] = $theme->page['site_slogan_hidden'];
        $vars['logo'] = $theme->page['logo'];
        $vars['logo_img'] = $vars['logo'] ? '<img src="' . $vars['logo'] . '" alt="' . $vars['site_name'] . '" id="logo" />' : '';
        break;      
    }
  }
}

/**
 * Implements hook_process_zone().
 */
function townsquare_process_zone(&$vars) {
  $theme = alpha_get_theme();
  
  if ($vars['elements']['#zone'] == 'content') {
    $vars['messages'] = $theme->page['messages'];
  }
}
