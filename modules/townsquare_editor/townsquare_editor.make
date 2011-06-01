; Townsquare editor makefile

; Modules
projects[features][subdir] = contrib
projects[features][version] = 1.0-beta8

projects[markdownify][subdir] = "contrib"
projects[markdownify][download][type] = "git"
projects[markdownify][download][url] = "git://github.com/ecenter/markdownify"
projects[markdownify][branch] = "7.x-1.x-dev"
projects[markdownify][type] = "module"

projects[wysiwyg][subdir] = contrib
projects[wysiwyg][version] = 2.x-dev
projects[wysiwyg][patch][] = http://drupal.org/files/issues/wysiwyg-entity-exportables-624018-176.patch

; Libraries
libraries[tinymce][download][type] = "get"
libraries[tinymce][download][url] = "http://github.com/downloads/tinymce/tinymce/tinymce_3_3_9_3.zip"
libraries[tinymce][directory_name] = "tinymce"
