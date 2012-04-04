<?php if ($page['header']): ?>
  <div id='header' class="container">
    <?php print render($page['header']); ?>
  </div>
<?php endif; ?>

<div id='navigation' class='navbar navbar-fixed-top'><div class='navbar-inner'><div class='container'>
  <?php print l($site_name, '<front>', array('attributes' => array('class' => array('brand')))); ?>
  <?php if (isset($main_menu)) : ?>
    <?php print theme('links', array('links' => $main_menu, 'attributes' => array('class' => 'nav main-menu'))) ?>
  <?php endif; ?>
  <?php if (isset($admin_menu)) : ?>
    <ul class="nav">
      <li class="dropdown">
        <a class="dropdown-toggle" data-toggle="dropdown"><?php print t('Administer'); ?> <b class="caret"></b> </a>
        <?php print render($admin_menu); ?>
      </li>
    </ul>
  <?php endif; ?>
  <?php if (isset($secondary_menu)) : ?>
    <?php print theme('links', array('links' => $secondary_menu, 'attributes' => array('class' => 'nav secondary-menu'))) ?>
  <?php endif; ?>
</div></div></div>

<?php if ($page['highlighted']): ?>
  <div id='highlighted' class='container'><div class='row'>
    <?php print render($page['highlighted']); ?>
  </div></div>
<?php endif; ?>

<?php if ($page['help'] || ($show_messages && $messages)): ?>
  <div id='console' class='container'><div class='row'>
    <?php print render($page['help']); ?>
    <?php if ($show_messages && $messages): print $messages; endif; ?>
  </div></div>
<?php endif; ?>

<div id='page' class='container'><div class='row'>

  <?php if ($page['sidebar_first']): ?>
    <div id='left' class='span2'><?php print render($page['sidebar_first']) ?></div>
  <?php endif; ?>

  <div id='main-content' class='span12'>
    <?php if ($title): ?><h1 class='page-title'><?php print $title ?></h1><?php endif; ?>
    <?php if ($primary_local_tasks): ?><ul class='nav nav-tabs'><?php print render($primary_local_tasks) ?></ul><?php endif; ?>
    <?php if ($secondary_local_tasks): ?><ul class='nav nav-pills'><?php print render($secondary_local_tasks) ?></ul><?php endif; ?>
    <?php if ($action_links): ?><ul class='links'><?php print render($action_links); ?></ul><?php endif; ?>
    <div id='content'><?php print render($page['content']) ?></div>
  </div>

  <?php if ($page['sidebar_second']): ?>
    <div id='right' class='span2"><?php print render($page['sidebar_second']) ?></div>
  <?php endif; ?>

</div></div>

<div id="footer" class='container'><div class='row'>
  <?php print render($page['footer']) ?>
</div></div>
