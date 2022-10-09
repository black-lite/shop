<?php

namespace Admin;

use Closure;
use \Action;
use Core\Controller;

require __DIR__.'/categories.adm.inc';

class Categories extends Units\Categories
{
	protected Action $action;
	public function __construct()
	{
		parent::__construct();
		$this->instance = $this;

		$this->action = new Action('main', 'null', '', '');

		Controller::$work->addSL('main', 'null', Closure::fromCallable([$this, 'Main']));
	}

	public function Main()
	{
//		$this->action->link('abc', ['class' => 'link', 'style' => 'color: black; font-size: 20px'], []);
	}
}
Categories::init();