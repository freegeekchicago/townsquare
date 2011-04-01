<?php
/**
 * @file
 * townsquare_wiki.features.menu_links.inc
 */

/**
 * Implementation of hook_menu_default_menu_links().
 */
function townsquare_wiki_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-townsquare-toolbar:node/add/page
  $menu_links['menu-townsquare-toolbar:node/add/page'] = array(
    'menu_name' => 'menu-townsquare-toolbar',
    'link_path' => 'node/add/page',
    'router_path' => 'node/add/page',
    'link_title' => 'Create page',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Create page');


  return $menu_links;
}
