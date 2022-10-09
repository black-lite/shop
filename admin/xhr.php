<?php

use Core\Controller;
use Core\Admin\Template;

const RUN_TYPE = 'xhr';

require __DIR__ . '/../core/functions.php';
require __DIR__ . '/../core/view.inc';
require __DIR__ . '/../core/model.inc';
require __DIR__ . '/../core/controller.inc';
require __DIR__ . '/../core/database/db_mysql.inc';

require __DIR__ . '/../core/Templates.inc';

require __DIR__ . '/../units/units.adm.xhr.inc';

$tpl = new Template;
Controller::controllerDo();
$tpl->render();