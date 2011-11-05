<?php
/**
 * @file
 * townsquare_volunteer.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function townsquare_volunteer_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'townsquare_events';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Townsquare events';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Townsquare events';
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    5 => '5',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '25, 50, 100';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 1;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_event_type' => 'field_event_type',
    'field_event_date' => 'field_event_date',
    'nid_1' => 'nid_1',
    'php' => 'php',
    'field_session_duration' => 'field_session_duration',
    'field_event_description' => 'field_event_description',
    'nid' => 'nid',
  );
  $handler->display->display_options['style_options']['default'] = 'field_event_date';
  $handler->display->display_options['style_options']['info'] = array(
    'field_event_type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_event_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'php' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_session_duration' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_event_description' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 1;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Header: Global: PHP */
  $handler->display->display_options['header']['php']['id'] = 'php';
  $handler->display->display_options['header']['php']['table'] = 'views';
  $handler->display->display_options['header']['php']['field'] = 'php';
  $handler->display->display_options['header']['php']['empty'] = FALSE;
  $handler->display->display_options['header']['php']['php_output'] = '<div class="create-link">
  <?php print l(t(\'Create new event\'), \'event/create\', array(\'attributes\' => array(\'class\' => \'button\'))); ?>
  </div>
  ';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_session_event_node']['id'] = 'reverse_field_session_event_node';
  $handler->display->display_options['relationships']['reverse_field_session_event_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_session_event_node']['field'] = 'reverse_field_session_event_node';
  $handler->display->display_options['relationships']['reverse_field_session_event_node']['required'] = 0;
  /* Field: Content: Event type */
  $handler->display->display_options['fields']['field_event_type']['id'] = 'field_event_type';
  $handler->display->display_options['fields']['field_event_type']['table'] = 'field_data_field_event_type';
  $handler->display->display_options['fields']['field_event_type']['field'] = 'field_event_type';
  $handler->display->display_options['fields']['field_event_type']['label'] = 'Type';
  $handler->display->display_options['fields']['field_event_type']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_event_type']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_event_type']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_event_type']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_event_type']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_event_type']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_event_type']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_event_type']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_event_type']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_event_type']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_event_type']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_event_type']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_event_type']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_event_type']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_event_type']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_event_type']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_event_type']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_event_type']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_event_type']['field_api_classes'] = 0;
  /* Field: Content: Event date */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_event_date']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_event_date']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_event_date']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_event_date']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_event_date']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_event_date']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_event_date']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_event_date']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_event_date']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_event_date']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_event_date']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_event_date']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_event_date']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_event_date']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_event_date']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_event_date']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_event_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_event_date']['field_api_classes'] = 0;
  /* Field: COUNT(Content: Nid) */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['relationship'] = 'reverse_field_session_event_node';
  $handler->display->display_options['fields']['nid_1']['group_type'] = 'count';
  $handler->display->display_options['fields']['nid_1']['label'] = '';
  $handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['nid_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nid_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nid_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nid_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nid_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nid_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nid_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid_1']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['nid_1']['format_plural'] = 0;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '# Volunteers';
  $handler->display->display_options['fields']['php']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['php']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['php']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['php']['alter']['external'] = 0;
  $handler->display->display_options['fields']['php']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['php']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['php']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['php']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['php']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['php']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['php']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['php']['alter']['html'] = 0;
  $handler->display->display_options['fields']['php']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['php']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['php']['hide_empty'] = 0;
  $handler->display->display_options['fields']['php']['empty_zero'] = 0;
  $handler->display->display_options['fields']['php']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php print $row->nid_1 - 1; ?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '1';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: SUM(Content: Duration) */
  $handler->display->display_options['fields']['field_session_duration']['id'] = 'field_session_duration';
  $handler->display->display_options['fields']['field_session_duration']['table'] = 'field_data_field_session_duration';
  $handler->display->display_options['fields']['field_session_duration']['field'] = 'field_session_duration';
  $handler->display->display_options['fields']['field_session_duration']['relationship'] = 'reverse_field_session_event_node';
  $handler->display->display_options['fields']['field_session_duration']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_session_duration']['label'] = 'Total hours';
  $handler->display->display_options['fields']['field_session_duration']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_session_duration']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_session_duration']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_session_duration']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_session_duration']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_session_duration']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_session_duration']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_session_duration']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_session_duration']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_session_duration']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_session_duration']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_session_duration']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_session_duration']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_session_duration']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_session_duration']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_session_duration']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_session_duration']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_session_duration']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_session_duration']['field_api_classes'] = 0;
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_event_description']['id'] = 'field_event_description';
  $handler->display->display_options['fields']['field_event_description']['table'] = 'field_data_field_event_description';
  $handler->display->display_options['fields']['field_event_description']['field'] = 'field_event_description';
  $handler->display->display_options['fields']['field_event_description']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_event_description']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_event_description']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_event_description']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_event_description']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_event_description']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_event_description']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_event_description']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_event_description']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_event_description']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_event_description']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_event_description']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_event_description']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_event_description']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_event_description']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_event_description']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_event_description']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_event_description']['field_api_classes'] = 0;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['text'] = 'Edit event';
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['path'] = 'event/[nid]/edit';
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
  /* Sort criterion: Content: Event date -  start date (field_event_date) */
  $handler->display->display_options['sorts']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['sorts']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['sorts']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['sorts']['field_event_date_value']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['group'] = 0;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'events';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Events';
  $handler->display->display_options['menu']['weight'] = '10';
  $handler->display->display_options['menu']['name'] = 'menu-townsquare-toolbar';

  $export['townsquare_events'] = $view;

  $view = new view;
  $view->name = 'townsquare_volunteer_sessions';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Townsquare volunteer sessions';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Volunteer sessions';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    5 => '5',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'field_event_type' => 'field_event_type',
    'field_event_date' => 'field_event_date',
    'field_session_duration' => 'field_session_duration',
    'field_session_hours' => 'field_session_hours',
    'field_session_notes' => 'field_session_notes',
    'nid_2' => 'nid_2',
  );
  $handler->display->display_options['style_options']['default'] = 'field_event_date';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_event_type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_event_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_session_duration' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_session_hours' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_session_notes' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid_2' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 1;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_session_event_target_id']['id'] = 'field_session_event_target_id';
  $handler->display->display_options['relationships']['field_session_event_target_id']['table'] = 'field_data_field_session_event';
  $handler->display->display_options['relationships']['field_session_event_target_id']['field'] = 'field_session_event_target_id';
  $handler->display->display_options['relationships']['field_session_event_target_id']['required'] = 1;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
  /* Field: Content: Session hours */
  $handler->display->display_options['fields']['field_session_hours']['id'] = 'field_session_hours';
  $handler->display->display_options['fields']['field_session_hours']['table'] = 'field_data_field_session_hours';
  $handler->display->display_options['fields']['field_session_hours']['field'] = 'field_session_hours';
  $handler->display->display_options['fields']['field_session_hours']['label'] = 'Hours';
  $handler->display->display_options['fields']['field_session_hours']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_session_hours']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_session_hours']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_session_hours']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_session_hours']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_session_hours']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_session_hours']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_session_hours']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_session_hours']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_session_hours']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_session_hours']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_session_hours']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_session_hours']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_session_hours']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_session_hours']['empty'] = 'Not specified';
  $handler->display->display_options['fields']['field_session_hours']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_session_hours']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_session_hours']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_session_hours']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_session_hours']['field_api_classes'] = 0;
  /* Field: Content: Duration */
  $handler->display->display_options['fields']['field_session_duration']['id'] = 'field_session_duration';
  $handler->display->display_options['fields']['field_session_duration']['table'] = 'field_data_field_session_duration';
  $handler->display->display_options['fields']['field_session_duration']['field'] = 'field_session_duration';
  $handler->display->display_options['fields']['field_session_duration']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_session_duration']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_session_duration']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_session_duration']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_session_duration']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_session_duration']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_session_duration']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_session_duration']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_session_duration']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_session_duration']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_session_duration']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_session_duration']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_session_duration']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_session_duration']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_session_duration']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_session_duration']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_session_duration']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_session_duration']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_session_duration']['field_api_classes'] = 0;
  /* Sort criterion: Content: Session hours -  start date (field_session_hours) */
  $handler->display->display_options['sorts']['field_session_hours_value']['id'] = 'field_session_hours_value';
  $handler->display->display_options['sorts']['field_session_hours_value']['table'] = 'field_data_field_session_hours';
  $handler->display->display_options['sorts']['field_session_hours_value']['field'] = 'field_session_hours_value';
  $handler->display->display_options['sorts']['field_session_hours_value']['order'] = 'DESC';
  /* Sort criterion: Content: Session hours - end date (field_session_hours:value2) */
  $handler->display->display_options['sorts']['field_session_hours_value2']['id'] = 'field_session_hours_value2';
  $handler->display->display_options['sorts']['field_session_hours_value2']['table'] = 'field_data_field_session_hours';
  $handler->display->display_options['sorts']['field_session_hours_value2']['field'] = 'field_session_hours_value2';
  $handler->display->display_options['sorts']['field_session_hours_value2']['order'] = 'DESC';
  /* Contextual filter: Content: Volunteer (field_session_user:target_id) */
  $handler->display->display_options['arguments']['field_session_user_target_id']['id'] = 'field_session_user_target_id';
  $handler->display->display_options['arguments']['field_session_user_target_id']['table'] = 'field_data_field_session_user';
  $handler->display->display_options['arguments']['field_session_user_target_id']['field'] = 'field_session_user_target_id';
  $handler->display->display_options['arguments']['field_session_user_target_id']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['field_session_user_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_session_user_target_id']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_session_user_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_session_user_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_session_user_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_session_user_target_id']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_session_user_target_id']['not'] = 0;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'volunteer_session' => 'volunteer_session',
  );
  $handler->display->display_options['filters']['type']['group'] = 0;

  /* Display: Admin EVA */
  $handler = $view->new_display('entity_view', 'Admin EVA', 'entity_view_1');
  $handler->display->display_options['entity_type'] = 'user';
  $handler->display->display_options['bundles'] = array(
    0 => 'user',
  );
  $handler->display->display_options['show_title'] = 1;

  /* Display: Total hours attachment */
  $handler = $view->new_display('attachment', 'Total hours attachment', 'attachment_1');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Duration */
  $handler->display->display_options['fields']['field_session_duration']['id'] = 'field_session_duration';
  $handler->display->display_options['fields']['field_session_duration']['table'] = 'field_data_field_session_duration';
  $handler->display->display_options['fields']['field_session_duration']['field'] = 'field_session_duration';
  $handler->display->display_options['fields']['field_session_duration']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_session_duration']['label'] = 'Total hours';
  $handler->display->display_options['fields']['field_session_duration']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_session_duration']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_session_duration']['alter']['path'] = 'event/[field-event-date]';
  $handler->display->display_options['fields']['field_session_duration']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_session_duration']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_session_duration']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_session_duration']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_session_duration']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_session_duration']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_session_duration']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_session_duration']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_session_duration']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_session_duration']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_session_duration']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_session_duration']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_session_duration']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_session_duration']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_session_duration']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_session_duration']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_session_duration']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_session_duration']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_session_duration']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['displays'] = array(
    'default' => 'default',
    'entity_view_1' => 'entity_view_1',
    'entity_view_2' => 'entity_view_2',
  );

  /* Display: 1 month hours attachment */
  $handler = $view->new_display('attachment', '1 month hours attachment', 'attachment_2');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Duration */
  $handler->display->display_options['fields']['field_session_duration']['id'] = 'field_session_duration';
  $handler->display->display_options['fields']['field_session_duration']['table'] = 'field_data_field_session_duration';
  $handler->display->display_options['fields']['field_session_duration']['field'] = 'field_session_duration';
  $handler->display->display_options['fields']['field_session_duration']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_session_duration']['label'] = 'Last quarter';
  $handler->display->display_options['fields']['field_session_duration']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_session_duration']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_session_duration']['alter']['path'] = 'event/[field-event-date]';
  $handler->display->display_options['fields']['field_session_duration']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_session_duration']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_session_duration']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_session_duration']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_session_duration']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_session_duration']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_session_duration']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_session_duration']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_session_duration']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_session_duration']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_session_duration']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_session_duration']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_session_duration']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_session_duration']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_session_duration']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_session_duration']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_session_duration']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_session_duration']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_session_duration']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'volunteer_session' => 'volunteer_session',
  );
  $handler->display->display_options['filters']['type']['group'] = 0;
  /* Filter criterion: Content: Event date -  start date (field_event_date) */
  $handler->display->display_options['filters']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['filters']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['relationship'] = 'field_session_event_target_id';
  $handler->display->display_options['filters']['field_event_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_event_date_value']['default_date'] = '-1 month';
  $handler->display->display_options['displays'] = array(
    'default' => 'default',
    'entity_view_1' => 'entity_view_1',
    'entity_view_2' => 'entity_view_2',
  );

  /* Display: 3 month hours attachment */
  $handler = $view->new_display('attachment', '3 month hours attachment', 'attachment_3');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Duration */
  $handler->display->display_options['fields']['field_session_duration']['id'] = 'field_session_duration';
  $handler->display->display_options['fields']['field_session_duration']['table'] = 'field_data_field_session_duration';
  $handler->display->display_options['fields']['field_session_duration']['field'] = 'field_session_duration';
  $handler->display->display_options['fields']['field_session_duration']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_session_duration']['label'] = 'Last month';
  $handler->display->display_options['fields']['field_session_duration']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_session_duration']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_session_duration']['alter']['path'] = 'event/[field-event-date]';
  $handler->display->display_options['fields']['field_session_duration']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_session_duration']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_session_duration']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_session_duration']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_session_duration']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_session_duration']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_session_duration']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_session_duration']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_session_duration']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_session_duration']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_session_duration']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_session_duration']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_session_duration']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_session_duration']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_session_duration']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_session_duration']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_session_duration']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_session_duration']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_session_duration']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'volunteer_session' => 'volunteer_session',
  );
  $handler->display->display_options['filters']['type']['group'] = 0;
  /* Filter criterion: Content: Event date -  start date (field_event_date) */
  $handler->display->display_options['filters']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['filters']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['relationship'] = 'field_session_event_target_id';
  $handler->display->display_options['filters']['field_event_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_event_date_value']['default_date'] = '-3 months';
  $handler->display->display_options['displays'] = array(
    'default' => 'default',
    'entity_view_1' => 'entity_view_1',
    'entity_view_2' => 'entity_view_2',
  );

  /* Display: User EVA */
  $handler = $view->new_display('entity_view', 'User EVA', 'entity_view_2');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
  /* Field: Content: Session hours */
  $handler->display->display_options['fields']['field_session_hours']['id'] = 'field_session_hours';
  $handler->display->display_options['fields']['field_session_hours']['table'] = 'field_data_field_session_hours';
  $handler->display->display_options['fields']['field_session_hours']['field'] = 'field_session_hours';
  $handler->display->display_options['fields']['field_session_hours']['label'] = 'Hours';
  $handler->display->display_options['fields']['field_session_hours']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_session_hours']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_session_hours']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_session_hours']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_session_hours']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_session_hours']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_session_hours']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_session_hours']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_session_hours']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_session_hours']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_session_hours']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_session_hours']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_session_hours']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_session_hours']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_session_hours']['empty'] = 'Not specified';
  $handler->display->display_options['fields']['field_session_hours']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_session_hours']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_session_hours']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_session_hours']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_session_hours']['field_api_classes'] = 0;
  /* Field: Content: Duration */
  $handler->display->display_options['fields']['field_session_duration']['id'] = 'field_session_duration';
  $handler->display->display_options['fields']['field_session_duration']['table'] = 'field_data_field_session_duration';
  $handler->display->display_options['fields']['field_session_duration']['field'] = 'field_session_duration';
  $handler->display->display_options['fields']['field_session_duration']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_session_duration']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_session_duration']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_session_duration']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_session_duration']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_session_duration']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_session_duration']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_session_duration']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_session_duration']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_session_duration']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_session_duration']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_session_duration']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_session_duration']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_session_duration']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_session_duration']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_session_duration']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_session_duration']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_session_duration']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_session_duration']['field_api_classes'] = 0;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['relationship'] = 'field_session_event_target_id';
  $handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['nid_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nid_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nid_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nid_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nid_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nid_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid_1']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['nid_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nid_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid_1']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['nid_1']['link_to_node'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_session_event_target_id';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'event/[nid_1]/edit#volunteer-session-[nid]';
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  $handler->display->display_options['entity_type'] = 'user';
  $handler->display->display_options['bundles'] = array(
    0 => 'user',
  );
  $handler->display->display_options['show_title'] = 1;

  /* Display: 1 year hours attachment */
  $handler = $view->new_display('attachment', '1 year hours attachment', 'attachment_4');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Duration */
  $handler->display->display_options['fields']['field_session_duration']['id'] = 'field_session_duration';
  $handler->display->display_options['fields']['field_session_duration']['table'] = 'field_data_field_session_duration';
  $handler->display->display_options['fields']['field_session_duration']['field'] = 'field_session_duration';
  $handler->display->display_options['fields']['field_session_duration']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_session_duration']['label'] = 'Last year';
  $handler->display->display_options['fields']['field_session_duration']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_session_duration']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_session_duration']['alter']['path'] = 'event/[field-event-date]';
  $handler->display->display_options['fields']['field_session_duration']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_session_duration']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_session_duration']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_session_duration']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_session_duration']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_session_duration']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_session_duration']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_session_duration']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_session_duration']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_session_duration']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_session_duration']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_session_duration']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_session_duration']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_session_duration']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_session_duration']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_session_duration']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_session_duration']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_session_duration']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_session_duration']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'volunteer_session' => 'volunteer_session',
  );
  $handler->display->display_options['filters']['type']['group'] = 0;
  /* Filter criterion: Content: Event date -  start date (field_event_date) */
  $handler->display->display_options['filters']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['filters']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['relationship'] = 'field_session_event_target_id';
  $handler->display->display_options['filters']['field_event_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_event_date_value']['default_date'] = '-1 year';
  $handler->display->display_options['displays'] = array(
    'default' => 'default',
    'entity_view_1' => 'entity_view_1',
    'entity_view_2' => 'entity_view_2',
  );

  $export['townsquare_volunteer_sessions'] = $view;

  $view = new view;
  $view->name = 'townsquare_volunteers';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Townsquare Volunteers';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Volunteers';
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    5 => '5',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['disable_sql_rewrite'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Clear';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = 0;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = 1;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '100, 250, 500';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 1;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'picture' => 'picture',
    'name' => 'name',
    'field_session_duration' => 'field_session_duration',
    'nid' => 'nid',
    'nid_1' => 'nid_1',
    'php' => 'php',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = 'name';
  $handler->display->display_options['style_options']['info'] = array(
    'picture' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_session_duration' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'php' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 1;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Header: Global: PHP */
  $handler->display->display_options['header']['php']['id'] = 'php';
  $handler->display->display_options['header']['php']['table'] = 'views';
  $handler->display->display_options['header']['php']['field'] = 'php';
  $handler->display->display_options['header']['php']['empty'] = TRUE;
  $handler->display->display_options['header']['php']['php_output'] = '<?php print l(\'Add new volunteer\', \'admin/people/create\', array(\'attributes\' => array(\'class\' => array(\'button\')))); ?>
  ';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_session_user_node']['id'] = 'reverse_field_session_user_node';
  $handler->display->display_options['relationships']['reverse_field_session_user_node']['table'] = 'users';
  $handler->display->display_options['relationships']['reverse_field_session_user_node']['field'] = 'reverse_field_session_user_node';
  $handler->display->display_options['relationships']['reverse_field_session_user_node']['required'] = 1;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_session_event_target_id']['id'] = 'field_session_event_target_id';
  $handler->display->display_options['relationships']['field_session_event_target_id']['table'] = 'field_data_field_session_event';
  $handler->display->display_options['relationships']['field_session_event_target_id']['field'] = 'field_session_event_target_id';
  $handler->display->display_options['relationships']['field_session_event_target_id']['relationship'] = 'reverse_field_session_user_node';
  $handler->display->display_options['relationships']['field_session_event_target_id']['required'] = 0;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['external'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['picture']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['picture']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['html'] = 0;
  $handler->display->display_options['fields']['picture']['element_type'] = 'span';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['picture']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['picture']['hide_empty'] = 0;
  $handler->display->display_options['fields']['picture']['empty_zero'] = 0;
  $handler->display->display_options['fields']['picture']['hide_alter_empty'] = 0;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['name']['link_to_user'] = 1;
  $handler->display->display_options['fields']['name']['overwrite_anonymous'] = 0;
  $handler->display->display_options['fields']['name']['format_username'] = 1;
  /* Field: SUM(Content: Duration) */
  $handler->display->display_options['fields']['field_session_duration']['id'] = 'field_session_duration';
  $handler->display->display_options['fields']['field_session_duration']['table'] = 'field_data_field_session_duration';
  $handler->display->display_options['fields']['field_session_duration']['field'] = 'field_session_duration';
  $handler->display->display_options['fields']['field_session_duration']['relationship'] = 'reverse_field_session_user_node';
  $handler->display->display_options['fields']['field_session_duration']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_session_duration']['label'] = 'Total hours';
  $handler->display->display_options['fields']['field_session_duration']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_session_duration']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_session_duration']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_session_duration']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_session_duration']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_session_duration']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_session_duration']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_session_duration']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_session_duration']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_session_duration']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_session_duration']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_session_duration']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_session_duration']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_session_duration']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_session_duration']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_session_duration']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_session_duration']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_session_duration']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_session_duration']['field_api_classes'] = 0;
  /* Field: MAX(Content: Nid) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_session_event_target_id';
  $handler->display->display_options['fields']['nid']['group_type'] = 'max';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
  /* Field: MAX(Content: Nid) */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['relationship'] = 'reverse_field_session_user_node';
  $handler->display->display_options['fields']['nid_1']['group_type'] = 'max';
  $handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['nid_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nid_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nid_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nid_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nid_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nid_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid_1']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['nid_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nid_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid_1']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['nid_1']['link_to_node'] = 0;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'Last event';
  $handler->display->display_options['fields']['php']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['php']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['php']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['php']['alter']['external'] = 0;
  $handler->display->display_options['fields']['php']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['php']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['php']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['php']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['php']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['php']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['php']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['php']['alter']['html'] = 0;
  $handler->display->display_options['fields']['php']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['php']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['php']['hide_empty'] = 0;
  $handler->display->display_options['fields']['php']['empty_zero'] = 0;
  $handler->display->display_options['fields']['php']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
  $event = node_load(array($row->nid));
  print l($event->title, \'event/\'. $row->nid .\'/edit\', array(\'fragment\' => \'volunteer-session-form-\'. $row->nid_1));
  ?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: User: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'users';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Settings';
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['external'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['edit_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['edit_node']['empty_zero'] = 0;
  $handler->display->display_options['fields']['edit_node']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Settings';
  /* Sort criterion: User: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'users';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  /* Sort criterion: MAX(Content: Duration (field_session_duration)) */
  $handler->display->display_options['sorts']['field_session_duration_value']['id'] = 'field_session_duration_value';
  $handler->display->display_options['sorts']['field_session_duration_value']['table'] = 'field_data_field_session_duration';
  $handler->display->display_options['sorts']['field_session_duration_value']['field'] = 'field_session_duration_value';
  $handler->display->display_options['sorts']['field_session_duration_value']['relationship'] = 'reverse_field_session_user_node';
  $handler->display->display_options['sorts']['field_session_duration_value']['group_type'] = 'max';
  /* Filter criterion: User: Name */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'users';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['operator'] = 'not in';
  $handler->display->display_options['filters']['uid']['value'] = array(
    0 => 0,
  );
  $handler->display->display_options['filters']['uid']['group'] = 0;
  /* Filter criterion: User: Name (raw) */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'users';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['operator'] = 'contains';
  $handler->display->display_options['filters']['name']['group'] = 0;
  $handler->display->display_options['filters']['name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['name']['expose']['operator_id'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['label'] = 'Search volunteer names';
  $handler->display->display_options['filters']['name']['expose']['operator'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
  $handler->display->display_options['filters']['name']['expose']['required'] = 0;
  $handler->display->display_options['filters']['name']['expose']['multiple'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: User: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'users';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  $handler->display->display_options['path'] = 'volunteers/view';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'Volunteers';
  $handler->display->display_options['menu']['weight'] = '-5';
  $handler->display->display_options['menu']['name'] = 'menu-townsquare-toolbar';
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Volunteers';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $handler->display->display_options['tab_options']['name'] = 'menu-townsquare-secondary-tools';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Super volunteers';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Filter';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = 0;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = 1;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'picture' => 'picture',
    'name' => 'name',
    'field_session_duration' => 'field_session_duration',
    'nid' => 'nid',
    'nid_1' => 'nid_1',
    'php' => 'php',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = 'field_session_duration';
  $handler->display->display_options['style_options']['info'] = array(
    'picture' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_session_duration' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'php' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 1;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['external'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['picture']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['picture']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['html'] = 0;
  $handler->display->display_options['fields']['picture']['element_type'] = 'span';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['picture']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['picture']['hide_empty'] = 0;
  $handler->display->display_options['fields']['picture']['empty_zero'] = 0;
  $handler->display->display_options['fields']['picture']['hide_alter_empty'] = 0;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name']['alter']['max_length'] = '512';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['name']['link_to_user'] = 1;
  $handler->display->display_options['fields']['name']['overwrite_anonymous'] = 0;
  $handler->display->display_options['fields']['name']['format_username'] = 1;
  /* Field: SUM(Content: Duration) */
  $handler->display->display_options['fields']['field_session_duration']['id'] = 'field_session_duration';
  $handler->display->display_options['fields']['field_session_duration']['table'] = 'field_data_field_session_duration';
  $handler->display->display_options['fields']['field_session_duration']['field'] = 'field_session_duration';
  $handler->display->display_options['fields']['field_session_duration']['relationship'] = 'reverse_field_session_user_node';
  $handler->display->display_options['fields']['field_session_duration']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_session_duration']['label'] = 'Hours';
  $handler->display->display_options['fields']['field_session_duration']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_session_duration']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_session_duration']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_session_duration']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_session_duration']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_session_duration']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_session_duration']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_session_duration']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_session_duration']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_session_duration']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_session_duration']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_session_duration']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_session_duration']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_session_duration']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_session_duration']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_session_duration']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_session_duration']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_session_duration']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_session_duration']['field_api_classes'] = 0;
  /* Field: MAX(Content: Nid) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_session_event_target_id';
  $handler->display->display_options['fields']['nid']['group_type'] = 'max';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
  /* Field: MAX(Content: Nid) */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['relationship'] = 'reverse_field_session_user_node';
  $handler->display->display_options['fields']['nid_1']['group_type'] = 'max';
  $handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['nid_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nid_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nid_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nid_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nid_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nid_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid_1']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['nid_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nid_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid_1']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['nid_1']['link_to_node'] = 0;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'Last event';
  $handler->display->display_options['fields']['php']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['php']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['php']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['php']['alter']['external'] = 0;
  $handler->display->display_options['fields']['php']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['php']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['php']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['php']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['php']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['php']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['php']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['php']['alter']['html'] = 0;
  $handler->display->display_options['fields']['php']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['php']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['php']['hide_empty'] = 0;
  $handler->display->display_options['fields']['php']['empty_zero'] = 0;
  $handler->display->display_options['fields']['php']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
  $event = node_load(array($row->nid));
  print l($event->title, \'event/\'. $row->nid .\'/edit\', array(\'fragment\' => \'volunteer-session-form-\'. $row->nid_1));
  ?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: User: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'users';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Settings';
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['external'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['edit_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['edit_node']['empty_zero'] = 0;
  $handler->display->display_options['fields']['edit_node']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Settings';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Name */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'users';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['operator'] = 'not in';
  $handler->display->display_options['filters']['uid']['value'] = array(
    0 => 0,
  );
  $handler->display->display_options['filters']['uid']['group'] = 0;
  /* Filter criterion: Content: Event date -  start date (field_event_date) */
  $handler->display->display_options['filters']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['filters']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['relationship'] = 'field_session_event_target_id';
  $handler->display->display_options['filters']['field_event_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_event_date_value']['group'] = 0;
  $handler->display->display_options['filters']['field_event_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_event_date_value']['expose']['operator_id'] = 'field_event_date_value_op';
  $handler->display->display_options['filters']['field_event_date_value']['expose']['operator'] = 'field_event_date_value_op';
  $handler->display->display_options['filters']['field_event_date_value']['expose']['identifier'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['expose']['multiple'] = FALSE;
  $handler->display->display_options['filters']['field_event_date_value']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['field_event_date_value']['default_date'] = '-3 months';
  /* Filter criterion: SUM(Content: Duration (field_session_duration)) */
  $handler->display->display_options['filters']['field_session_duration_value']['id'] = 'field_session_duration_value';
  $handler->display->display_options['filters']['field_session_duration_value']['table'] = 'field_data_field_session_duration';
  $handler->display->display_options['filters']['field_session_duration_value']['field'] = 'field_session_duration_value';
  $handler->display->display_options['filters']['field_session_duration_value']['relationship'] = 'reverse_field_session_user_node';
  $handler->display->display_options['filters']['field_session_duration_value']['group_type'] = 'sum';
  $handler->display->display_options['filters']['field_session_duration_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_session_duration_value']['value']['value'] = '35';
  $handler->display->display_options['filters']['field_session_duration_value']['group'] = 0;
  $handler->display->display_options['filters']['field_session_duration_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_session_duration_value']['expose']['operator_id'] = 'field_session_duration_value_op';
  $handler->display->display_options['filters']['field_session_duration_value']['expose']['label'] = 'Duration';
  $handler->display->display_options['filters']['field_session_duration_value']['expose']['operator'] = 'field_session_duration_value_op';
  $handler->display->display_options['filters']['field_session_duration_value']['expose']['identifier'] = 'field_session_duration_value';
  $handler->display->display_options['filters']['field_session_duration_value']['expose']['multiple'] = FALSE;
  $handler->display->display_options['path'] = 'volunteers/super-volunteers';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Super volunteers';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-townsquare-secondary-tools';
  $handler->display->display_options['tab_options']['weight'] = '0';


  $export['townsquare_volunteers'] = $view;

  return $export;
}
