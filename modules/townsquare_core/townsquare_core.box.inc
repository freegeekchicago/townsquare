<?php

/**
 * Implementation of hook_default_box().
 */
function townsquare_core_default_box() {
  $export = array();

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'action_menu';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Action menu';
  $box->options = array(
    'body' => array(
      'value' => '<?php print render(menu_local_actions()); ?>',
      'format' => 'php_code',
    ),
  );
  $export['action_menu'] = $box;

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'node_submitted';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Node submitted';
  $box->options = array(
    'body' => array(
      'value' => '<div class="block-wrapper">
<?php  
$node = node_load(arg(1));
print t(\'Last updated !date by !username\', array(                                                                                           
    \'!date\' => l(format_date($node->changed), "node/$node->nid/revisions/$node->vid/view"),                       
    \'!username\' => theme(\'username\', array(\'account\' => $node)),                        
)); 
?>
</div>',
      'format' => 'php_code',
    ),
  );
  $export['node_submitted'] = $box;

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'primary_local_tasks';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Primary local tasks';
  $box->options = array(
    'body' => array(
      'value' => '<?php print render(menu_primary_local_tasks()); ?>',
      'format' => 'php_code',
    ),
  );
  $export['primary_local_tasks'] = $box;

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'secondary_local_tasks';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Secondary local tasks';
  $box->options = array(
    'body' => array(
      'value' => '<?php print render(menu_secondary_local_tasks()); ?>',
      'format' => 'php_code',
    ),
  );
  $export['secondary_local_tasks'] = $box;

  return $export;
}
