<?php if (!$user->uid): ?>
  <?php 
    $form = drupal_get_form('user_login_block');
    $form['links'] = array(
      '#markup' => l(t('Register'), 'user/register'),
      '#weight' => 500,
      '#prefix' => '<div class="links">',
      '#suffix' => '</div>',
    );
    print render($form);
  ?>
<?php else: ?>
  <div class="login-wrapper">
    <div id="login-meta">
      <div class="login-username">
        <?php print t(
          'Logged in as !user', 
          array('!user' => theme('username', array('account' => $user)))
        );
        ?>
        <?php print '('. l('Logout', 'user/logout') .')'; ?>
      </div>
      <ul class="links">
        <li class="settings"><?php print l(t('Account settings'), 'user/'. $user->uid .'/edit'); ?></li>
        <li class="profile"><?php print l(t('Volunteer profile'), 'user/'. $user->uid); ?></li>
      </ul>
    </div>
    <?php print theme('user_picture', array('account' => $user)); ?>
  </div>
<?php endif; ?>
