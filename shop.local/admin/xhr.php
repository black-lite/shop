<?php

use Core\Controller;

require __DIR__.'/../core/functions.php';
require __DIR__.'/../core/model.inc';
require __DIR__.'/../core/controller.inc';
require __DIR__.'/../core/database/db_mysql.inc';

require __DIR__ . '/../core/Templates.inc';

require __DIR__ . '/../units/categories/categories.adm.html.inc';

Controller::controllerDo();