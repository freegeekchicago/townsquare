<div<?php print $attributes; ?>>
  <div<?php print $content_attributes; ?>>
    <?php if ($primary_tasks): ?>
      <div id="primary_tasks"><?php print drupal_render($primary_tasks); ?></div>
    <?php endif; ?>    
    <?php print $content; ?>
  </div>
</div>
