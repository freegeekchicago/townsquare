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
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_event_type' => 'field_event_type',
    'field_event_date' => 'field_event_date',
    'php_1' => 'php_1',
    'field_event_description' => 'field_event_description',
  );
  $handler->display->display_options['style_options']['default'] = 'field_event_date';
  $handler->display->display_options['style_options']['info'] = array(
    'field_event_type' => array(
      'sortable' => 0,
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
    'php_1' => array(
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
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
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
    'format_type' => 'medium',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_event_date']['field_api_classes'] = 0;
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
  /* Sort criterion: Content: Event date (field_event_date) */
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
  $view->human_name = 'Townsquare volunteer sessions (admin)';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Volunteer sessions';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
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
    'field_session_duration' => 'field_session_duration',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_session_duration' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Relationship: Content: Volunteer (field_session_user) */
  $handler->display->display_options['relationships']['field_session_user_uid']['id'] = 'field_session_user_uid';
  $handler->display->display_options['relationships']['field_session_user_uid']['table'] = 'field_data_field_session_user';
  $handler->display->display_options['relationships']['field_session_user_uid']['field'] = 'field_session_user_uid';
  $handler->display->display_options['relationships']['field_session_user_uid']['required'] = 1;
  $handler->display->display_options['relationships']['field_session_user_uid']['delta'] = '-1';
  /* Relationship: Content: Event (field_session_event) */
  $handler->display->display_options['relationships']['field_session_event_nid']['id'] = 'field_session_event_nid';
  $handler->display->display_options['relationships']['field_session_event_nid']['table'] = 'field_data_field_session_event';
  $handler->display->display_options['relationships']['field_session_event_nid']['field'] = 'field_session_event_nid';
  $handler->display->display_options['relationships']['field_session_event_nid']['required'] = 0;
  $handler->display->display_options['relationships']['field_session_event_nid']['delta'] = '-1';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_session_event_nid';
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
  /* Field: Content: Event date */
  $handler->display->display_options['fields']['field_event_date_1']['id'] = 'field_event_date_1';
  $handler->display->display_options['fields']['field_event_date_1']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date_1']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date_1']['relationship'] = 'field_session_event_nid';
  $handler->display->display_options['fields']['field_event_date_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_event_date_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_event_date_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_event_date_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_event_date_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_event_date_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_event_date_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_event_date_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_event_date_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_event_date_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_event_date_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_event_date_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_event_date_1']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_event_date_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_event_date_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_event_date_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_event_date_1']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_event_date_1']['settings'] = array(
    'format_type' => 'medium',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_event_date_1']['field_api_classes'] = 0;
  /* Field: Content: Session hours */
  $handler->display->display_options['fields']['field_session_hours']['id'] = 'field_session_hours';
  $handler->display->display_options['fields']['field_session_hours']['table'] = 'field_data_field_session_hours';
  $handler->display->display_options['fields']['field_session_hours']['field'] = 'field_session_hours';
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
  $handler->display->display_options['fields']['field_session_hours']['empty'] = 'n/a';
  $handler->display->display_options['fields']['field_session_hours']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_session_hours']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_session_hours']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_session_hours']['settings'] = array(
    'format_type' => 'short',
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
  $handler->display->display_options['fields']['field_session_duration']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_session_duration']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_session_duration']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_session_duration']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_session_duration']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_session_duration']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '1',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_session_duration']['field_api_classes'] = 0;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_2']['id'] = 'nid_2';
  $handler->display->display_options['fields']['nid_2']['table'] = 'node';
  $handler->display->display_options['fields']['nid_2']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_2']['label'] = '';
  $handler->display->display_options['fields']['nid_2']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['nid_2']['alter']['text'] = 'Edit event';
  $handler->display->display_options['fields']['nid_2']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['nid_2']['alter']['path'] = 'event/[nid]/edit#volunteer-session-form-[nid_2]';
  $handler->display->display_options['fields']['nid_2']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nid_2']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nid_2']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nid_2']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nid_2']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nid_2']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid_2']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid_2']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid_2']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid_2']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid_2']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nid_2']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid_2']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid_2']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['nid_2']['link_to_node'] = 0;
  /* Sort criterion: Content: Event date (field_event_date) */
  $handler->display->display_options['sorts']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['sorts']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['sorts']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['sorts']['field_event_date_value']['relationship'] = 'field_session_event_nid';
  $handler->display->display_options['sorts']['field_event_date_value']['order'] = 'DESC';
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'field_session_user_uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['uid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['uid']['not'] = 0;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'volunteer_session' => 'volunteer_session',
  );
  $handler->display->display_options['filters']['type']['group'] = 0;

  /* Display: Entity content */
  $handler = $view->new_display('entity_view', 'Entity content', 'entity_view_1');
  $handler->display->display_options['entity_type'] = 'user';
  $handler->display->display_options['bundles'] = array(
    0 => 'user',
  );
  $handler->display->display_options['show_title'] = 1;

  /* Display: Attachment */
  $handler = $view->new_display('attachment', 'Attachment', 'attachment_1');
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
    'scale' => '1',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_session_duration']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['displays'] = array(
    'default' => 'default',
    'entity_view_1' => 'entity_view_1',
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
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'administer users';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['disable_sql_rewrite'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = 0;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = 1;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '10, 50, 100, 250';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 1;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'name' => 'name',
    'field_session_duration' => 'field_session_duration',
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = 'name';
  $handler->display->display_options['style_options']['info'] = array(
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
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Header: Global: PHP */
  $handler->display->display_options['header']['php']['id'] = 'php';
  $handler->display->display_options['header']['php']['table'] = 'views';
  $handler->display->display_options['header']['php']['field'] = 'php';
  $handler->display->display_options['header']['php']['empty'] = FALSE;
  $handler->display->display_options['header']['php']['php_output'] = '<div class="create-link">
<?php print l(t(\'Create new volunteer\'), \'admin/people/create\', array(\'attributes\' => array(\'class\' => \'button\'))); ?>
</div>';
  /* Relationship: User: Content authored */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'users';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['required'] = 0;
  /* Relationship: Content: Event (field_session_event) */
  $handler->display->display_options['relationships']['field_session_event_nid']['id'] = 'field_session_event_nid';
  $handler->display->display_options['relationships']['field_session_event_nid']['table'] = 'field_data_field_session_event';
  $handler->display->display_options['relationships']['field_session_event_nid']['field'] = 'field_session_event_nid';
  $handler->display->display_options['relationships']['field_session_event_nid']['relationship'] = 'uid';
  $handler->display->display_options['relationships']['field_session_event_nid']['required'] = 1;
  $handler->display->display_options['relationships']['field_session_event_nid']['delta'] = '-1';
  /* Field: MAX(Content: Nid) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_session_event_nid';
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
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'Volunteer';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['name']['alter']['nl2br'] = 0;
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
  $handler->display->display_options['fields']['field_session_duration']['relationship'] = 'uid';
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
    'scale' => '0',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_session_duration']['field_api_classes'] = 0;
  /* Field: MAX(Content: Title) */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_session_event_nid';
  $handler->display->display_options['fields']['title']['group_type'] = 'max';
  $handler->display->display_options['fields']['title']['label'] = 'Last event';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'event/[nid]/edit';
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
  $handler->display->display_options['filters']['name']['operator'] = 'word';
  $handler->display->display_options['filters']['name']['group'] = 0;
  $handler->display->display_options['filters']['name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['name']['expose']['operator_id'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['label'] = 'Name';
  $handler->display->display_options['filters']['name']['expose']['operator'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
  $handler->display->display_options['filters']['name']['expose']['required'] = 0;
  $handler->display->display_options['filters']['name']['expose']['multiple'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'volunteers';
  $export['townsquare_volunteers'] = $view;

  return $export;
}
