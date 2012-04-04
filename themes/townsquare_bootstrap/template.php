<?php

/**
 * @file
 */

/*function townsquare_bootstrap_css_alter(&$css) {
  $keep_css = array(
    "bootstrap.css",
    "bootstrap-responsive.css",
    "bootstrap-drupal.css",
    "system.base.css",
    "ui.css",
  );
  $new_css = array();
  foreach ($css as $file => $data) {
    foreach ($keep_css as $test) { 
      if (substr_compare($file, $test, -strlen($test), strlen($test)) === 0) {
        $new_css[$file] = $data;
      }
    }
  }
  //$css = $new_css;
}*/

/**
 * Implements theme_menu_link().
 */
function townsquare_bootstrap_menu_link(array $variables) {
  $element = $variables['element'];
  $element['#attributes']['id'] = 'menu-link-'. drupal_clean_css_identifier($element['#original_link']['href']);
  
  $sub_menu = '';

  if ($element['#below']) {
    $sub_menu = drupal_render($element['#below']);
  }


  $output = l($element['#title'], $element['#href'], $element['#localized_options']);
  return '<li' . drupal_attributes($element['#attributes']) . '>' . $output . $sub_menu . "</li>\n";
}

function townsquare_bootstrap_preprocess_page(&$vars) {
  $vars['primary_local_tasks'] = menu_primary_local_tasks();
  $vars['secondary_local_tasks'] = menu_secondary_local_tasks();
  
  $admin_menu = menu_tree_all_data('management');
  $children = array_pop($admin_menu);
  $vars['admin_menu'] = menu_tree_output($children['below']);

  $path = libraries_get_path('bootstrap');
  drupal_add_css($path .'/css/bootstrap.css');
  drupal_add_css($path .'/css/bootstrap-responsive.css');
  drupal_add_js($path .'/js/bootstrap.js');
}

function townsquare_bootstrap_button(&$variables) {
  $element = $variables['element'];
  $element['#attributes']['type'] = 'submit';
  element_set_attributes($element, array('id', 'name', 'value'));

  $element['#attributes']['class'][] = 'form-' . $element['#button_type'];
  $element['#attributes']['class'][] = 'btn';
  if (!empty($element['#attributes']['disabled'])) {
    $element['#attributes']['class'][] = 'form-button-disabled';
  }

  return '<input' . drupal_attributes($element['#attributes']) . ' />';
}

function townsquare_bootstrap_menu_tree__management($variables) {
  return '<ul class="dropdown-menu">' . $variables['tree'] . '</ul>';
}
