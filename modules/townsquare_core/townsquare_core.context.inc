<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function townsquare_core_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'site';
  $context->description = 'Townsquare site';
  $context->tag = 'townsquare';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'toolbar',
          'weight' => 0,
        ),
        'menu-menu-townsquare-toolbar' => array(
          'module' => 'menu',
          'delta' => 'menu-townsquare-toolbar',
          'region' => 'toolbar',
          'weight' => 1,
        ),
        'townsquare_core-login' => array(
          'module' => 'townsquare_core',
          'delta' => 'login',
          'region' => 'toolbar',
          'weight' => 2,
        ),
        'menu-menu-townsquare-secondary-tools' => array(
          'module' => 'menu',
          'delta' => 'menu-townsquare-secondary-tools',
          'region' => 'secondary_toolbar',
          'weight' => 0,
        ),
        'townsquare_core-primary_tasks' => array(
          'module' => 'townsquare_core',
          'delta' => 'primary_tasks',
          'region' => 'page_actions',
          'weight' => 0,
        ),
        'townsquare_core-secondary_tasks' => array(
          'module' => 'townsquare_core',
          'delta' => 'secondary_tasks',
          'region' => 'page_actions',
          'weight' => 1,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Townsquare site');
  t('townsquare');
  $export['site'] = $context;

  return $export;
}
