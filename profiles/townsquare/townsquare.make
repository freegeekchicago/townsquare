; $Id$
;
; Townsquare makefile
; -------------------
; This is the makefile used to build townsquare using drush_make
; and install all needed modules.

; Core version 7.x
core = 7.x

; Drush API version 2
api = 2

; Install Drupal
projects[] = drupal

; Download the townsquare project from the git repository
projects[townsquare][type] = module
projects[townsquare][download][type] = git
projects[townsquare][download][url] = "git://github.com/freegeekchicago/townsquare.git"

; Install tao base theme
projects[tao][type] = theme
projects[tao][download][type] = git
projects[tao][download][url] = "git://github.com/developmentseed/tao.git"

projects[] = addressfield
projects[] = auto_nodetitle
projects[] = context
projects[] = ctools
projects[] = date
projects[] = entity
projects[] = features
projects[] = less
projects[] = markdown
projects[] = markdownify
projects[] = oembed
projects[] = pathologic
projects[] = references
projects[] = strongarm
projects[] = views
projects[] = wysiwyg

projects[] = jquery_ui
libraries[jquery_ui][download][type] = "svn"
libraries[jquery_ui][download][url] = "http://jquery-ui.googlecode.com/svn/trunk/"
libraries[jquery_ui][directory_name] = "jquery.ui"
libraries[jquery_ui][destination] = "modules/jquery_ui"

projects[] = htmlpurifier
libraries[htmlpurifier][download][type] = "git"
libraries[htmlpurifier][download][url] = "git://repo.or.cz/htmlpurifier.git"

projects[] = syntaxhighlighter
libraries[syntaxhighlighter][download][type] = "get"
libraries[syntaxhighlighter][download][url] = "http://alexgorbatchev.com/SyntaxHighlighter/download/download.php?sh_current" 

projects[] = ckeditor
libraries[ckeditor][download][type] = "svn"
libraries[ckeditor][download][url] = "http://svn.ckeditor.com/CKEditor/trunk/"
libraries[ckeditor][directory_name] = "CKEditor"

