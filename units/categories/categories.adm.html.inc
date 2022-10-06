<?php

namespace Admin;

use Closure;
use Core\Action;
use Core\Controller;

class Categories extends Units\Categories
{
	protected Action $action;
	public function __construct()
	{
		parent::__construct();
		$this->instance = $this;

		$this->action = new \Action('main', 'null', '', '');

		Controller::$instance->addSL('main', 'null', Closure::fromCallable([$this, 'Main']));
	}

	public function Main()
	{
		debug($this->action->link('abc', ['class' => 'link', 'style' => 'color: black; font-size: 20px'], []));
	}
}
Categories::init();