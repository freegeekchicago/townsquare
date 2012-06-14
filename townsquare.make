api = 2
core = 7.x
projects[drupal][type] = core
projects[drupal][version] = "7.14"

projects[addressfield][version] = "1.0-beta3"
projects[addressfield][subdir] = "contrib"

projects[combobox][type] = "module"
projects[combobox][subdir] = "contrib"
projects[combobox][download][type] = "git"
projects[combobox][download][url] = "https://github.com/eads/combobox"
projects[combobox][download][branch] = "master"

projects[ctools][version] = "1.0"
projects[ctools][subdir] = "contrib"

projects[date][version] = "2.2"
projects[date][subdir] = "contrib"

projects[devel][version] = "1.3"
projects[devel][subdir] = "contrib"

projects[diff][version] = "2.0"
projects[diff][subdir] = "contrib"

projects[entity][version] = "1.0-rc3"
projects[entity][subdir] = "contrib"

projects[entityreference][version] = "1.0-rc3"
projects[entityreference][subdir] = "contrib"

projects[eva][version] = "1.1"
projects[eva][subdir] = "contrib"

projects[features][version] = "1.0-rc3"
projects[features][subdir] = "contrib"

projects[fontyourface][version] = "2.3"
projects[fontyourface][subdir] = "contrib"

projects[grammar_parser_lib][version] = "1.x-dev"
projects[grammar_parser_lib][subdir] = "contrib"

projects[htmlpurifier][version] = "2.x-dev"
projects[htmlpurifier][subdir] = "contrib"

projects[libraries][version] = "2.0-alpha2"
projects[libraries][subdir] = "contrib"

projects[logintoboggan][version] = "1.3"
projects[logintoboggan][subdir] = "contrib"

projects[markdown][version] = "1.0"
projects[markdown][subdir] = "contrib"

projects[markdownify][type] = "module"
projects[markdownify][subdir] = "contrib"
projects[markdownify][download][type] = "git"
projects[markdownify][download][url] = "https://github.com/eads/markdownify"
projects[markdownify][download][branch] = "7.x-1.0-dev"

projects[pathologic][version] = "1.4"
projects[pathologic][subdir] = "contrib"

projects[strongarm][version] = "2.0"
projects[strongarm][subdir] = "contrib"

projects[views][version] = "3.3"
projects[views][subdir] = "contrib"

projects[views_php][version] = "1.x-dev"
projects[views_php][subdir] = "contrib"

projects[wysiwyg][version] = "2.x-dev"
projects[wysiwyg][subdir] = "contrib"

; Libraries
libraries[tinymce][download][type] = "get"
libraries[tinymce][download][url] = "https://github.com/downloads/tinymce/tinymce/tinymce_3_3_9_3.zip"
libraries[tinymce][directory_name] = "tinymce"

libraries[scrollto][download][type] = "get"
libraries[scrollto][download][url] = "http://flesler-plugins.googlecode.com/files/jquery.scrollTo-1.4.2.zip"
libraries[scrollto][directory_name] = "scrollto"

libraries[htmlpurifier][download][type] = "get"
libraries[htmlpurifier][download][url] = "http://htmlpurifier.org/releases/htmlpurifier-4.4.0.tar.gz"
libraries[htmlpurifier][directory_name] = "htmlpurifier"

libraries[font_awesome][download][type] = "git"
libraries[font_awesome][download][url] = "https://github.com/FortAwesome/Font-Awesome.git"
libraries[font_awesome][download][branch] = "master"
libraries[font_awesome][directory_name] = "font-awesome"

; Twitter bootstrap - try putting this in own file
projects[jquery_update][version] = "2.x-dev"
projects[jquery_update][subdir] = "contrib"

libraries[jquery_17_min][download][type] = "get"
libraries[jquery_17_min][download][url] = "http://code.jquery.com/jquery-1.7.1.min.js"
libraries[jquery_17_min][destination] = "modules/contrib/jquery_update/replace/1.7/jquery.min.js"

libraries[jquery_17_full][download][type] = "get"
libraries[jquery_17_full][download][url] = "http://code.jquery.com/jquery-1.7.1.js"
libraries[jquery_17_full][destination] = "modules/contrib/jquery_update/replace/1.7/jquery.js"

libraries[twitter_bootstrap][download][type] = "get"
libraries[twitter_bootstrap][download][url] = "http://twitter.github.com/bootstrap/assets/bootstrap.zip"
libraries[twitter_bootstrap][directory_name] = "bootstrap"
