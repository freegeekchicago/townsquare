#!/bin/bash
drush vset cron_last 2
drush vset cron_last 1343797200
drush sqlc < ./test_cron.sql
drush cron
