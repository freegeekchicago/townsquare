<div id='townsquare-toolbar'><div class='limiter clearfix'>
  <?php if ($site_name): ?><h1 class='site-name'><?php print $site_name ?></h1><?php endif; ?>
  <?php print render($page['toolbar']); ?>
</div></div>

<?php if ($page['help'] || ($show_messages && $messages)): ?>
  <div id='console'><div class='limiter clearfix'>
    <?php print render($page['help']); ?>
    <?php if ($show_messages && $messages): print $messages; endif; ?>
  </div></div>
<?php endif; ?>

<?php if ($page['highlighted']): ?>
  <div id='highlighted'><div class='limiter clearfix'>
    <?php print render($page['highlighted']); ?>
  </div></div>
<?php endif; ?>

<div id='page'><div class='limiter clearfix'>

  <div id='page-actions'><div class='limiter clearfix'>
    <?php print render($page['type']) ?>
    <?php print render($page['page_actions']) ?>
  </div></div>

  <div id='main-content'>
    <?php if ($title): ?><h1 class='page-title'><?php print $title ?></h1><?php endif; ?>
    <div id='content' class='clearfix'><?php print render($page['content']) ?></div>
  </div>

</div></div>

<div id="footer"><div class='limiter clearfix'>
  <?php print $feed_icons ?>
  <?php print render($page['footer']) ?>
</div></div>
