<?php
/**
 * @file
 * townsquare_core.features.node_export_features.inc
 */

/**
 * Implements hook_node_export_features_default().
 */
function townsquare_core_node_export_features_default() {
  $node_export = array(
  'code_string' => 'array(
  array(
    \'vid\' => \'6\',
    \'uid\' => \'1\',
    \'title\' => \'Markdown restricted test\',
    \'log\' => \'\',
    \'status\' => \'1\',
    \'comment\' => \'0\',
    \'promote\' => \'0\',
    \'sticky\' => \'0\',
    \'vuuid\' => \'d364696c-a271-bec4-a9a3-ae9e6db89f2e\',
    \'nid\' => \'6\',
    \'type\' => \'wiki\',
    \'language\' => \'und\',
    \'created\' => \'1328855774\',
    \'changed\' => \'1328855774\',
    \'tnid\' => \'0\',
    \'translate\' => \'0\',
    \'uuid\' => \'4bfe588c-96a2-a694-99fa-b28313890e6c\',
    \'revision_timestamp\' => \'1328855774\',
    \'revision_uid\' => \'1\',
    \'body\' => array(
      \'und\' => array(
        \'0\' => array(
          \'value\' => \'Lorem **ipsum** dolor sit amet, *consectetur adipiscing elit.* Aliquam iaculis, velit gravida convallis tincidunt, felis enim venenatis lorem, nec lobortis nisl urna et mi. Pellentesque ac dictum ante. Fusce dignissim tempor elementum. Ut dignissim convallis eros, viverra luctus lacus consequat ac. Sed feugiat velit sed magna aliquam accumsan. Nam vitae porta tortor. Nam auctor dui a neque iaculis in aliquam erat viverra. Duis orci nunc, lacinia in malesuada et, euismod id turpis. Cras mattis vulputate erat, eget tempor magna egestas eu. Vestibulum sit amet massa est.

*   Vivamus pretium placerat lorem, in tempor massa convallis sit amet. 
*   Aliquam sed quam eget ligula luctus aliquam sed vitae nulla. Aliquam dui dolor, ullamcorper eget rutrum ut, hendrerit ac lorem. 
*   Donec magna est, sollicitudin vel ultrices vel, mattis ut odio. Integer vel felis laoreet purus sollicitudin varius sed id ipsum. Suspendisse potenti. Praesent ut justo vitae metus luctus vehicula a et purus. Suspendisse potenti. Sed viverra, quam non hendrerit laoreet, massa odio blandit arcu, ac molestie metus diam eu tortor. Donec erat arcu, ultrices sit amet placerat non, feugiat in arcu. 
*   Mauris eros quam, varius eget volutpat vel, tristique sed est. In faucibus feugiat urna sit amet elementum. Integer consequat rhoncus libero, in molestie augue posuere et. Phasellus ac eleifend magna. 
*   Proin vulputate dui ac justo pharetra consequat. In vel iaculis ligula.

Vivamus pretium placerat lorem, in tempor massa convallis sit amet. Aliquam sed quam eget ligula luctus aliquam sed vitae nulla. Aliquam dui dolor, ullamcorper eget rutrum ut, hendrerit ac lorem. Donec magna est, sollicitudin vel ultrices vel, mattis ut odio. Integer vel felis laoreet purus sollicitudin varius sed id ipsum. Suspendisse potenti. Praesent ut justo vitae metus luctus vehicula a et purus. Suspendisse potenti. Sed viverra, quam non hendrerit laoreet, massa odio blandit arcu, ac molestie metus diam eu tortor. Donec erat arcu, ultrices sit amet placerat non, feugiat in arcu. Mauris eros quam, varius eget volutpat vel, tristique sed est. In faucibus feugiat urna sit amet elementum. Integer consequat rhoncus libero, in molestie augue posuere et. Phasellus ac eleifend magna. Proin vulputate dui ac justo pharetra consequat. In vel iaculis ligula.

1.  Vivamus pretium placerat lorem, in tempor massa convallis sit amet. 
2.  Aliquam sed quam eget ligula luctus aliquam sed vitae nulla. Aliquam dui dolor, ullamcorper eget rutrum ut, hendrerit ac lorem. 
3.  Donec magna est, sollicitudin vel ultrices vel, mattis ut odio. Integer vel felis laoreet purus sollicitudin varius sed id ipsum. Suspendisse potenti. Praesent ut justo vitae metus luctus vehicula a et purus. Suspendisse potenti. Sed viverra, quam non hendrerit laoreet, massa odio blandit arcu, ac molestie metus diam eu tortor. Donec erat arcu, ultrices sit amet placerat non, feugiat in arcu. 
4.  Mauris eros quam, varius eget volutpat vel, tristique sed est. In faucibus feugiat urna sit amet elementum. Integer consequat rhoncus libero, in molestie augue posuere et. Phasellus ac eleifend magna. 
5.  Proin vulputate dui ac justo pharetra consequat. In vel iaculis ligula.

Vivamus pretium placerat lorem, in tempor massa convallis sit amet. Aliquam sed quam eget ligula luctus aliquam sed vitae nulla. Aliquam dui dolor, ullamcorper eget rutrum ut, hendrerit ac lorem. Donec magna est, sollicitudin vel ultrices vel, mattis ut odio. Integer vel felis laoreet purus sollicitudin varius sed id ipsum. Suspendisse potenti. Praesent ut justo vitae metus luctus vehicula a et purus. Suspendisse potenti. Sed viverra, quam non hendrerit laoreet, massa odio blandit arcu, ac molestie metus diam eu tortor. Donec erat arcu, ultrices sit amet placerat non, feugiat in arcu. Mauris eros quam, varius eget volutpat vel, tristique sed est. In faucibus feugiat urna sit amet elementum. Integer consequat rhoncus libero, in molestie augue posuere et. Phasellus ac eleifend magna. Proin vulputate dui ac justo pharetra consequat. In vel iaculis ligula.\',
          \'summary\' => \'\',
          \'format\' => \'markdown\',
          \'safe_value\' => \'<p>Lorem <strong>ipsum</strong> dolor sit amet, <em>consectetur adipiscing elit.</em> Aliquam iaculis, velit gravida convallis tincidunt, felis enim venenatis lorem, nec lobortis nisl urna et mi. Pellentesque ac dictum ante. Fusce dignissim tempor elementum. Ut dignissim convallis eros, viverra luctus lacus consequat ac. Sed feugiat velit sed magna aliquam accumsan. Nam vitae porta tortor. Nam auctor dui a neque iaculis in aliquam erat viverra. Duis orci nunc, lacinia in malesuada et, euismod id turpis. Cras mattis vulputate erat, eget tempor magna egestas eu. Vestibulum sit amet massa est.</p>

<ul>
<li>Vivamus pretium placerat lorem, in tempor massa convallis sit amet. </li>
<li>Aliquam sed quam eget ligula luctus aliquam sed vitae nulla. Aliquam dui dolor, ullamcorper eget rutrum ut, hendrerit ac lorem. </li>
<li>Donec magna est, sollicitudin vel ultrices vel, mattis ut odio. Integer vel felis laoreet purus sollicitudin varius sed id ipsum. Suspendisse potenti. Praesent ut justo vitae metus luctus vehicula a et purus. Suspendisse potenti. Sed viverra, quam non hendrerit laoreet, massa odio blandit arcu, ac molestie metus diam eu tortor. Donec erat arcu, ultrices sit amet placerat non, feugiat in arcu. </li>
<li>Mauris eros quam, varius eget volutpat vel, tristique sed est. In faucibus feugiat urna sit amet elementum. Integer consequat rhoncus libero, in molestie augue posuere et. Phasellus ac eleifend magna. </li>
<li>Proin vulputate dui ac justo pharetra consequat. In vel iaculis ligula.</li>
</ul>

<p>Vivamus pretium placerat lorem, in tempor massa convallis sit amet. Aliquam sed quam eget ligula luctus aliquam sed vitae nulla. Aliquam dui dolor, ullamcorper eget rutrum ut, hendrerit ac lorem. Donec magna est, sollicitudin vel ultrices vel, mattis ut odio. Integer vel felis laoreet purus sollicitudin varius sed id ipsum. Suspendisse potenti. Praesent ut justo vitae metus luctus vehicula a et purus. Suspendisse potenti. Sed viverra, quam non hendrerit laoreet, massa odio blandit arcu, ac molestie metus diam eu tortor. Donec erat arcu, ultrices sit amet placerat non, feugiat in arcu. Mauris eros quam, varius eget volutpat vel, tristique sed est. In faucibus feugiat urna sit amet elementum. Integer consequat rhoncus libero, in molestie augue posuere et. Phasellus ac eleifend magna. Proin vulputate dui ac justo pharetra consequat. In vel iaculis ligula.</p>

<ol>
<li>Vivamus pretium placerat lorem, in tempor massa convallis sit amet. </li>
<li>Aliquam sed quam eget ligula luctus aliquam sed vitae nulla. Aliquam dui dolor, ullamcorper eget rutrum ut, hendrerit ac lorem. </li>
<li>Donec magna est, sollicitudin vel ultrices vel, mattis ut odio. Integer vel felis laoreet purus sollicitudin varius sed id ipsum. Suspendisse potenti. Praesent ut justo vitae metus luctus vehicula a et purus. Suspendisse potenti. Sed viverra, quam non hendrerit laoreet, massa odio blandit arcu, ac molestie metus diam eu tortor. Donec erat arcu, ultrices sit amet placerat non, feugiat in arcu. </li>
<li>Mauris eros quam, varius eget volutpat vel, tristique sed est. In faucibus feugiat urna sit amet elementum. Integer consequat rhoncus libero, in molestie augue posuere et. Phasellus ac eleifend magna. </li>
<li>Proin vulputate dui ac justo pharetra consequat. In vel iaculis ligula.</li>
</ol>

<p>Vivamus pretium placerat lorem, in tempor massa convallis sit amet. Aliquam sed quam eget ligula luctus aliquam sed vitae nulla. Aliquam dui dolor, ullamcorper eget rutrum ut, hendrerit ac lorem. Donec magna est, sollicitudin vel ultrices vel, mattis ut odio. Integer vel felis laoreet purus sollicitudin varius sed id ipsum. Suspendisse potenti. Praesent ut justo vitae metus luctus vehicula a et purus. Suspendisse potenti. Sed viverra, quam non hendrerit laoreet, massa odio blandit arcu, ac molestie metus diam eu tortor. Donec erat arcu, ultrices sit amet placerat non, feugiat in arcu. Mauris eros quam, varius eget volutpat vel, tristique sed est. In faucibus feugiat urna sit amet elementum. Integer consequat rhoncus libero, in molestie augue posuere et. Phasellus ac eleifend magna. Proin vulputate dui ac justo pharetra consequat. In vel iaculis ligula.</p>
\',
          \'safe_summary\' => \'\',
        ),
      ),
    ),
    \'name\' => \'David Eads\',
    \'picture\' => \'0\',
    \'data\' => \'a:1:{s:8:"gravatar";i:1;}\',
    \'path\' => FALSE,
    \'menu\' => array(
      \'link_title\' => \'\',
      \'mlid\' => 0,
      \'plid\' => 0,
      \'menu_name\' => \'main-menu\',
      \'weight\' => 0,
      \'options\' => array(),
      \'module\' => \'menu\',
      \'expanded\' => 0,
      \'hidden\' => 0,
      \'has_children\' => 0,
      \'customized\' => 0,
      \'parent_depth_limit\' => 8,
      \'description\' => \'\',
      \'enabled\' => 1,
    ),
    \'node_export_drupal_version\' => \'7\',
    \'#_export_node_encode_object\' => \'1\',
  ),
    array(
    \'vid\' => \'11\',
    \'uid\' => \'1\',
    \'title\' => \'Home\',
    \'log\' => \'\',
    \'status\' => \'1\',
    \'comment\' => \'0\',
    \'promote\' => \'0\',
    \'sticky\' => \'0\',
    \'vuuid\' => \'2fef7e4f-3eae-13c4-f595-f5e97b1b6d77\',
    \'nid\' => \'11\',
    \'type\' => \'wiki\',
    \'language\' => \'und\',
    \'created\' => \'1328858263\',
    \'changed\' => \'1328891646\',
    \'tnid\' => \'0\',
    \'translate\' => \'0\',
    \'uuid\' => \'78d0fa1f-d5c7-7de4-fdc5-b0f235ac7551\',
    \'revision_timestamp\' => \'1328891646\',
    \'revision_uid\' => \'1\',
    \'body\' => array(
      \'und\' => array(
        \'0\' => array(
          \'value\' => \'<p class="big">
  Townsquare is a Drupal distribution that helps community-based organizations manage volunteers, track program participation, and share institutional knowledge.
</p>

* * *

<div class="clearfix">
  <div class="grid-7 alpha">
    <h3>
      Download and install
    </h3>
    
    <p>
      <strong><a href="https://github.com/freegeekchicago/townsquare/zipball/7.x-1.0-alpha6">Download Townsquare 7.x-1.0-alpha-6</a>&nbsp;</strong>(Feb 10, 2012)
    </p>
    
    <p>
      Townsquare is packaged as a Drupal distribution. You can install Townsquare using git and Drush make:
    </p>
    
    <pre>git clone https://github.com/freegeekchicago/townsquare
drush make build-townsquare.make townsquare-build</pre>
    
    <p>
      After copying the <code>townsquare-build</code> directory to your webroot, install Drupal and select the Townsquare profile.
    </p>
  </div>
  
  <div class="grid-4 push-1 omega">
    <h3>
      Contributing
    </h3>
    
    <p>
      Townsquare is under active development and ready for organizational testing. We need your help!
    </p>
    
    <ul>
      <li>
        <b><a href="/user/register" style="font-weight: normal;">Set up an account on the demo site and test Townsquare\\\'s functionality</a>&nbsp;</b>
      </li>
      <li>
        <a href="https://github.com/freegeekchicago/townsquare/issues">Create issues on Github</a>
      </li>
      <li>
        <a href="http://goo.gl/s8e0o">Watch a short presentation on contributing to Townsquare</a>
      </li>
    </ul>
  </div>
</div>

* * *

<div class="clearfix">
  <div class="grid-4 alpha">
    <a href="http://img.skitch.com/20120210-krgqbd9pmxkdxrnj275pxp28n4.png"> <img class="border" alt="volunteer-search" src="http://img.skitch.com/20120210-krgqbd9pmxkdxrnj275pxp28n4.png" width="300" height="192" /> <span class="caption">Manage volunteer hours: Quickly create or transcribe attendance records.</span> </a>
  </div>
  
  <div class="grid-4">
    <a href="http://img.skitch.com/20120210-pruh33rwmtaeynuw13r6qwjeby.png"> <img class="border" alt="Volunteer search" src="http://img.skitch.com/20120210-pruh33rwmtaeynuw13r6qwjeby.png" width="300" height="192" /> <span class="caption">Search for volunteers quickly from PCs, smartphones, and tablets.</span> </a>
  </div>
  
  <div class="grid-4 omega">
    <a href="http://img.skitch.com/20120210-t5eppqa44ywc951hymb5njx8sh.png"> <img class="border" alt="WYSIWYG editor" src="http://img.skitch.com/20120210-t5eppqa44ywc951hymb5njx8sh.png" width="300" height="192" /> <span class="caption">An awesome WYSIWYG editor with Markdown source code.</span> </a>
  </div>
</div>

* * *

<div class="clearfix">
  <div class="grid-7 alpha">
    <h2>
      About Townsquare
    </h2>
    
    <p>
      Townsquare is designed to address the needs of volunteer-driven, community-based organizations. Townsquare provides:
    </p>
    
    <ul>
      <li>
        <strong>Volunteer tracking:</strong> Collect and track event participation (<em>in production</em>)
      </li>
      <li>
        <strong>Volunteer signup</strong> (<em>in active developmen</em>t)
      </li>
      <li>
        <strong>Feedback and notifications</strong> based on program progress (<em>in active development</em>)
      </li>
      <li>
        <strong>Collaborative documentation</strong> on our wiki (<em>in planning</em>)
      </li>
      <li>
        <strong>Conversations</strong>&nbsp;(<em>envisioned</em>)
      </li>
    </ul>
    
    <p>&nbsp;</p>
  </div>
  
  <div class="grid-4 push-1 omega">
    <h2>
      License
    </h2>
    
    <p>
      Townsquare is released under the <a href="http://www.gnu.org/licenses/gpl.html">GNU General Public License v3.0.</a>
    </p>
    
    <p>
      Townsquare is a project of <a href="http://freegeekchicago.org">FreeGeek Chicago</a>. Townsquare is proudly built with <a href="http://drupal.org">Drupal 7</a>.
    </p>
  </div>
</div>\',
          \'summary\' => \'\',
          \'format\' => \'markdown_advanced\',
          \'safe_value\' => \'<p class="big">
  Townsquare is a Drupal distribution that helps community-based organizations manage volunteers, track program participation, and share institutional knowledge.
</p>

<hr /><div class="clearfix">
  <div class="grid-7 alpha">
    <h3>
      Download and install
    </h3>
    
    <p>
      <strong><a href="https://github.com/freegeekchicago/townsquare/zipball/7.x-1.0-alpha6">Download Townsquare 7.x-1.0-alpha-6</a> </strong>(Feb 10, 2012)
    </p>
    
    <p>
      Townsquare is packaged as a Drupal distribution. You can install Townsquare using git and Drush make:
    </p>
    
    <pre>git clone https://github.com/freegeekchicago/townsquare
drush make build-townsquare.make townsquare-build</pre>
    
    <p>
      After copying the <code>townsquare-build</code> directory to your webroot, install Drupal and select the Townsquare profile.
    </p>
  </div>
  
  <div class="grid-4 push-1 omega">
    <h3>
      Contributing
    </h3>
    
    <p>
      Townsquare is under active development and ready for organizational testing. We need your help!
    </p>
    
    <ul><li>
        <a href="/user/register">Set up an account on the demo site and test Townsquare\\\'s functionality</a> 
      </li>
      <li>
        <a href="https://github.com/freegeekchicago/townsquare/issues">Create issues on Github</a>
      </li>
      <li>
        <a href="http://goo.gl/s8e0o">Watch a short presentation on contributing to Townsquare</a>
      </li>
    </ul></div>
</div>

<hr /><div class="clearfix">
  <div class="grid-4 alpha">
    <a href="http://img.skitch.com/20120210-krgqbd9pmxkdxrnj275pxp28n4.png"> <img class="border" alt="volunteer-search" src="http://img.skitch.com/20120210-krgqbd9pmxkdxrnj275pxp28n4.png" width="300" height="192" /><span class="caption">Manage volunteer hours: Quickly create or transcribe attendance records.</span> </a>
  </div>
  
  <div class="grid-4">
    <a href="http://img.skitch.com/20120210-pruh33rwmtaeynuw13r6qwjeby.png"> <img class="border" alt="Volunteer search" src="http://img.skitch.com/20120210-pruh33rwmtaeynuw13r6qwjeby.png" width="300" height="192" /><span class="caption">Search for volunteers quickly from PCs, smartphones, and tablets.</span> </a>
  </div>
  
  <div class="grid-4 omega">
    <a href="http://img.skitch.com/20120210-t5eppqa44ywc951hymb5njx8sh.png"> <img class="border" alt="WYSIWYG editor" src="http://img.skitch.com/20120210-t5eppqa44ywc951hymb5njx8sh.png" width="300" height="192" /><span class="caption">An awesome WYSIWYG editor with Markdown source code.</span> </a>
  </div>
</div>

<hr /><div class="clearfix">
  <div class="grid-7 alpha">
    <h2>
      About Townsquare
    </h2>
    
    <p>
      Townsquare is designed to address the needs of volunteer-driven, community-based organizations. Townsquare provides:
    </p>
    
    <ul><li>
        <strong>Volunteer tracking:</strong> Collect and track event participation (<em>in production</em>)
      </li>
      <li>
        <strong>Volunteer signup</strong> (<em>in active developmen</em>t)
      </li>
      <li>
        <strong>Feedback and notifications</strong> based on program progress (<em>in active development</em>)
      </li>
      <li>
        <strong>Collaborative documentation</strong> on our wiki (<em>in planning</em>)
      </li>
      <li>
        <strong>Conversations</strong> (<em>envisioned</em>)
      </li>
    </ul><p> </p>
  </div>
  
  <div class="grid-4 push-1 omega">
    <h2>
      License
    </h2>
    
    <p>
      Townsquare is released under the <a href="http://www.gnu.org/licenses/gpl.html">GNU General Public License v3.0.</a>
    </p>
    
    <p>
      Townsquare is a project of <a href="http://freegeekchicago.org">FreeGeek Chicago</a>. Townsquare is proudly built with <a href="http://drupal.org">Drupal 7</a>.
    </p>
  </div>
</div>
\',
          \'safe_summary\' => \'\',
        ),
      ),
    ),
    \'name\' => \'David Eads\',
    \'picture\' => \'0\',
    \'data\' => \'a:1:{s:8:"gravatar";i:1;}\',
    \'path\' => FALSE,
    \'menu\' => array(
      \'link_title\' => \'\',
      \'mlid\' => 0,
      \'plid\' => 0,
      \'menu_name\' => \'main-menu\',
      \'weight\' => 0,
      \'options\' => array(),
      \'module\' => \'menu\',
      \'expanded\' => 0,
      \'hidden\' => 0,
      \'has_children\' => 0,
      \'customized\' => 0,
      \'parent_depth_limit\' => 8,
      \'description\' => \'\',
      \'enabled\' => 1,
    ),
    \'node_export_drupal_version\' => \'7\',
    \'#_export_node_encode_object\' => \'1\',
  ),
)',
);
  return $node_export;
}
