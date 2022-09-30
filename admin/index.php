<?php

use Core\Controller;
use Core\Admin\Template;

require __DIR__ . '/../core/functions.php';
require __DIR__ . '/../core/model.inc';
require __DIR__ . '/../core/controller.inc';
require __DIR__ . '/../core/database/db_mysql.inc';

require __DIR__ . '/../templates/admin/Template.tpl';

$tpl = new Template;
Controller::controllerDo();
$tpl->render();

