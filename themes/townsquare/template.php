<?php

/**
 * Implementation of preprocess_page().
 */
function townsquare_preprocess_page(&$vars) {
  // Home link
  $vars['home_link'] = l($vars['site_name'] .' home', '<front>');

  if (module_exists('search')) { 
    $vars['search_box'] = drupal_render(drupal_get_form('search_block_form'));
  }

  // Set 'type' page variable on nodes for now
  if (arg(0) == 'node' && !empty($vars['node'])) {
    $type = node_type_get_type($vars['node']);
    $vars['page']['type'] = array(
      '#prefix' => '<div class="type">',
      '#suffix' => '</div>',
      '#markup' => $type->name,
    );
  }
}


