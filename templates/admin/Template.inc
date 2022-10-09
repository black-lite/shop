<?php

namespace Core\Admin;

use Core\Section;
use Core\Templates;
use Template\Admin\Index;

require __DIR__ . '/index.tpl';
require __DIR__ . '/../../core/Templates.inc';
require __DIR__ . '/../../core/section.inc';

class Template extends \Core\Templates
{
	public Section $header;
	public Section $content;
	public Section $menu;
	public Section $overlay;

	public function __construct()
	{
		parent::__construct();

		$this->header = new Section();
		$this->content = new Section();
		$this->menu = new Section();
		$this->overlay = new Section();
	}

	public function render()
	{
		Index::objectTpl()->render();
	}
}

Template::init();