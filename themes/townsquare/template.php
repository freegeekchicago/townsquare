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

  // @TODO user login "block"
}


