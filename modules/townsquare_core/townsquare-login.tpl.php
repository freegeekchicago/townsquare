<?php if (!$user->uid): ?>
  <?php 
    $form = drupal_get_form('user_login_block');
    $form['links']['#markup'] = l(t('Register for a new account'), 'user/register');
    print render($form);
  ?>
<?php else: ?>
  <div class="login-username">
  <?php print t(
    'Logged in as !user', 
    array('!user' => theme('username', array('account' => $user)))
  );
  ?>
  </div>
  <?php print theme('user_picture', array('account' => $user)); ?>
<?php endif; ?>
