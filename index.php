<?php

use Core\Controller;
use Core\Site\Template;

require __DIR__ . '/core/functions.php';
require __DIR__ . '/core/model.inc';
require __DIR__ . '/core/controller.inc';
require __DIR__ . '/core/database/db_mysql.inc';

require __DIR__ . '/templates/site/Template.tpl';

require __DIR__ . '/units/actions/Action.inc';

$tpl = new Template;
Controller::controllerDo();
$tpl->render();

$act = new \Core\Action('main', 'null', 'id=__id', 's=__s&l=__l&id=__id');
$act->link('test', ['id' => 5]);

