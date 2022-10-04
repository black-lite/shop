<?php

namespace Core;

class Action
{
	protected string $unit_name;

	protected \Action $list;
	protected \Action $onCreate;
	protected \Action $doCreate;
	protected \Action $onModify;
	protected \Action $doModify;
	protected \Action $doDelete;

	public function __construct(string $unit_name)
	{
		$this->unit_name = $unit_name;

		$this->actions();
	}

	protected function actions()
	{
		$this->list =		new \Action($this->unit_name, 'null',		'',			"s=__s&l=__l");
		$this->onCreate =	new \Action($this->unit_name, 'onCreate',	'',			"s=__s&l=__l");
		$this->doCreate =	new \Action($this->unit_name, 'doCreate',	'',			"s=__s&l=__l");
		$this->onModify =	new \Action($this->unit_name, 'onModify',	'id=__id',	"s=__s&l=__l&id=__id", ['id'], ['id' => 0]);
		$this->doModify =	new \Action($this->unit_name, 'doModify',	'',			"s=__s&l=__l&id=__id", ['id'], ['id' => 0]);
		$this->doDelete =	new \Action($this->unit_name, 'doDelete',	'',			"s=__s&l=__l&id=__id", ['id'], ['id' => 0]);
	}


}
