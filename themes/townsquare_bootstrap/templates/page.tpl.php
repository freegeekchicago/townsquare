<?php if ($page['header']): ?>
  <div id='header' class="container">
    <?php print render($page['header']); ?>
  </div>
<?php endif; ?>

<div id='navigation' class='navbar navbar-fixed-top'><div class='navbar-inner'><div class='container'>
  <?php print l($site_name, '<front>', array('attributes' => array('class' => array('brand')))); ?>
  <?php if (isset($main_menu)) : ?>
    <div class="menu">
      <div class="btn btn-navbar" data-toggle="collapse" data-target="#primary-menu">
        <i class="icon-home"></i>
      </div>
      <div class="nav-collapse" id="primary-menu"><?php print theme('links', array('links' => $main_menu, 'attributes' => array('class' => 'nav main-menu'))) ?></div>
    </div>
  <?php endif; ?>
  <?php if (isset($secondary_menu)) : ?>
    <div class="menu">
      <div class="btn btn-navbar" data-toggle="collapse" data-target="#secondary-menu">
        <?php print $user_name; ?>
        <b class="icon-user"></b>
      </div>
      <ul class="nav pull-right" id="secondary-menu">
        <li class="dropdown nav-collapse" id="secondary-menu-children">
          <a class="dropdown-toggle" data-toggle="dropdown">
            <span class="account-label"><?php print $user_name; ?><i class="icon-caret-down"></i></span>
            <?php if (isset($user_picture)): ?>
            <div class="user-picture"><?php print $user_picture; ?></div>
            <?php endif; ?>
          </a>
          <?php print theme('links', array('links' => $secondary_menu, 'attributes' => array('class' => 'dropdown-menu'))) ?>
        </li>
      </ul>
    </div>
  <?php endif; ?>
  <?php if (isset($admin_menu)) : ?>
    <div class="menu">
      <div class="btn btn-navbar" data-toggle="collapse" data-target="#admin-menu-children">
        <i class="icon-cog"></i>
      </div>
      <ul class="nav pull-right" id="admin-menu">
        <li class="dropdown nav-collapse" id="admin-menu-children">
          <a class="dropdown-toggle" data-toggle="dropdown">
            <i class="icon-cog"></i><?php print t('Administer'); ?><i class="icon-caret-down"></i>
          </a>
          <?php print render($admin_menu); ?>
        </li>
      </ul>
    </div>
  <?php endif; ?>
  <?php if (isset($login)): ?>
    <div class="menu">
      <ul class="nav pull-right" id="login-block">
      <li class="dropdown">
        <?php print t('<a class="dropdown-toggle" data-toggle="dropdown"><i class="icon-flag"></i> Want to participate? Login or sign up <i class="icon-caret-down"></i></a>'); ?>
        <div class="dropdown-menu" id="login-block-form">
          <?php print render($login); ?>
        </div>
      </li>
      </ul>
    </div>
  <?php endif; ?>

</div></div></div>

<?php if ($page['highlighted']): ?>
  <div id='highlighted' class='container'><div class='row'>
    <?php print render($page['highlighted']); ?>
  </div></div>
<?php endif; ?>

<?php if ($page['help'] || ($show_messages && $messages)): ?>
  <div id='console' class='container'><div class='row'><div class="span12">
    <?php print render($page['help']); ?>
    <?php if ($show_messages && $messages): print $messages; endif; ?>
  </div></div></div>
<?php endif; ?>

<div id='page' class='container'><div class='row'>

  <?php if ($page['sidebar_first']): ?>
    <div id='left' class='span2'><?php print render($page['sidebar_first']) ?></div>
  <?php endif; ?>

  <div id='main-content' class='span12'>
    <?php print $breadcrumb; ?>
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
