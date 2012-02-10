<div<?php print $attributes; ?>>
  <div<?php print $content_attributes; ?>>
    <?php if ($logo_img): ?>
    <div class="logo-img">
      <a href="<?php print $site_url; ?>">
      <?php print $logo_img; ?>
      </a>
    </div>
    <?php endif; ?>
    <?php print $content; ?>
  </div>
</div>
