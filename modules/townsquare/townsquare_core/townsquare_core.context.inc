<?php
/**
 * @file
 * townsquare_core.context.inc
 */

/**
 * Implements hook_context_default_contexts().
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
        'townsquare_core-login' => array(
          'module' => 'townsquare_core',
          'delta' => 'login',
          'region' => 'user_bar',
          'weight' => '-10',
        ),
        'menu-menu-townsquare-toolbar' => array(
          'module' => 'menu',
          'delta' => 'menu-townsquare-toolbar',
          'region' => 'navigation_primary',
          'weight' => '-10',
        ),
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'navigation_secondary',
          'weight' => '-10',
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
