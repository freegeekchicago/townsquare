<div<?php print $attributes; ?>>
  <div<?php print $content_attributes; ?>>
    <?php if ($title): ?>
    <?php if ($title_hidden): ?><div class="element-invisible"><?php endif; ?>
    <?php print render($title_prefix); ?>
    <h1 class="title" id="page-title"><?php print $title; ?></h1>
    <?php print render($title_suffix); ?>
    <?php if ($title_hidden): ?></div><?php endif; ?>
    <?php endif; ?>
    <?php print $content; ?>
  </div>
</div>
