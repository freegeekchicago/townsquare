*This document is a work in progress.*

You must be familiar with installing Drupal and have git, Drush, and Drush make installed.

<pre>git clone https://github.com/freegeekchicago/townsquare.git townsquare
drush make --prepare-install townsquare/build-townsquare.make /var/www/townsquare
</pre>

Install Drupal (add links to appropriate resources, screenshot of profile selection)

## Install FreeGeek roles and development modules

The FreeGeek-specific roles module provides a stock set of organizational roles (volunteer, volunteer manager, staff), is optional but highly recommended for your first go-around. If you want it, run:

<pre>drush en freegeek_townsquare_roles
</pre>

You'll always want devel, and you should enable LESS CSS development mode (but turn it off in production!):

<pre>drush en devel devel_generate
drush vset -y less_devel 1</pre>

## Create users

If you enabled the FreeGeek roles module, create some special users for testing and 150 fake volunteers.

<pre>drush user-create "staff" --password="staff"
drush user-add-role "staff" "staff"
drush user-create "volunteer_manager" --password="volunteer_manager"
drush user-add-role "volunteer manager" "volunteer_manager"
drush user-create "volunteer" --password="volunteer"
drush user-add-role "volunteer" "volunteer"
drush generate-users 150 --roles=5</pre>

Otherwise, just create 150 fake users.

<pre>drush generate-users 150</pre>

## Running a demo site

* Install demo module
* Delete or omit staff account
* Disable user admin privilege on volunteer manager account

