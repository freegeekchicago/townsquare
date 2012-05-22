<?php
/**
 * @file
 * townsquare_volunteer.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function townsquare_volunteer_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:event
  $menu_links['main-menu:signup'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'signup',
    'router_path' => 'signup',
    'link_title' => '<i class="icon-plus-sign"></i>Create accounts',
    'options' => array(
      'attributes' => array(
        'title' => 'Create accounts',
      ),
    ),
  );
  return $menu_links;
}
