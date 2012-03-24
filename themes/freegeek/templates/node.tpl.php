<article<?php print $attributes; ?>>
  
  <?php if (!$page && $title): ?>
  <header>
    <?php print render($title_prefix); ?>
    <h1<?php print $title_attributes; ?>><a href="<?php print $node_url ?>" title="<?php print $title ?>"><?php print $title ?></a></h1>
    <?php print render($title_suffix); ?>
  </header>
  <?php elseif ($title): ?>
  <header>
    <?php print render($title_prefix); ?>
    <h1<?php print $title_attributes; ?>><?php print $title ?></h1>
    <?php print render($title_suffix); ?>
  </header>
  <?php endif; ?>
   
  <div<?php print $content_attributes; ?>>
    <?php
      // We hide the comments and links now so that we can render them later.
      hide($content['comments']);
      hide($content['links']);
      print render($content);
    ?>
  </div>
  
  <?php if ($display_submitted): ?>
  <footer class="submitted">Last updated <?php print $date; ?> by <?php print $name; ?></footer>
  <?php endif; ?>  
  
  <div class="clearfix">
    <?php if (!empty($content['links'])): ?>
      <nav class="links node-links clearfix"><?php print render($content['links']); ?></nav>
    <?php endif; ?>

    <?php print render($content['comments']); ?>
  </div>
</article>
