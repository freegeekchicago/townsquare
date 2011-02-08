<?php if (!$user->uid): ?>
  <?php 
    $form = drupal_get_form('user_login_block');
    $form['links']['#markup'] = l(t('Register for a new account'), 'user/register');
    print render($form);
  ?>
<?php else: ?>
  <div id="login-meta">
    <div class="login-username">
      <?php print t(
        'Logged in as !user', 
        array('!user' => theme('username', array('account' => $user)))
      );
      ?>
    </div>
    <ul class="links">
      <li class="settings"><?php print l(t('Account settings'), 'user/'. $user->uid .'/edit'); ?></li>
      <li class="profile"><?php print l(t('Volunteer profile'), 'user/'. $user->uid); ?></li>
    </ul>
  </div>
  <?php print theme('user_picture', array('account' => $user)); ?>
<?php endif; ?>
