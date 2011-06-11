<?php
/**
 * @file
 * townsquare_wiki.strongarm.inc
 */

/**
 * Implementation of hook_strongarm().
 */
function townsquare_wiki_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_wiki';
  $strongarm->value = 0;
  $export['comment_anonymous_wiki'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_wiki';
  $strongarm->value = 1;
  $export['comment_default_mode_wiki'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_wiki';
  $strongarm->value = '50';
  $export['comment_default_per_page_wiki'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_wiki';
  $strongarm->value = 1;
  $export['comment_form_location_wiki'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_wiki';
  $strongarm->value = '1';
  $export['comment_preview_wiki'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_wiki';
  $strongarm->value = 1;
  $export['comment_subject_field_wiki'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_wiki';
  $strongarm->value = '0';
  $export['comment_wiki'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_wiki';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_wiki'] = $strongarm;

  return $export;
}
