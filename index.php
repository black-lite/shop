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

$date = new \Core\Action('main', 'null', 'id=__id&date=__date', 's=__s&l=__l&id=__id&date=__date', ['id', 'date'], ['id' => 0, 'date' => date('Y-m-d')]);
$color = new \Core\Action('main', 'null', 'id=__id&color=__color', 's=__s&l=__l&id=__id&color=__color', ['id', 'color'], ['id' => 0, 'color' => 'white']);
$user = new \Core\Action('main', 'null', 'id=__id&user=__user', 's=__s&l=__l&id=__id&user=__user', ['id', 'user'], ['id' => 0, 'user' => -1]);
//$act->link('test', []);
$date->link('test_1', ['id' => 5, 'date' => '2022-07-5']);
$color->link('test_2', ['id' => 33, 'color' => 'black']);
$user->link('test_3', ['id' => 78, 'user' => 13]);

