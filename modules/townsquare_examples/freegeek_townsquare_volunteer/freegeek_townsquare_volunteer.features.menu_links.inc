<?php
/**
 * @file
 * freegeek_townsquare_volunteer.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function freegeek_townsquare_volunteer_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:signup
  $menu_links['main-menu:signup'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'signup',
    'router_path' => 'signup',
    'link_title' => '<i class="icon-plus-sign"></i>Signup volunteers',
    'options' => array(
      'attributes' => array(
        'title' => 'Add a new volunteer.',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('<i class="icon-plus-sign"></i>Signup volunteers');


  return $menu_links;
}
