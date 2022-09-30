<?php

namespace Core\Site;

use Core\Section;
use Core\Templates;
use Template\Site\Index;

require __DIR__ . '/../../core/Templates.inc';
require __DIR__ . '/../../core/section.inc';
require __DIR__ . '/index.tpl';

class Template extends Templates
{
	public Section $header;
	public Section $content;
	public Section $footer;
	public Section $overlay;

	public function __construct()
	{
		parent::__construct();

		$this->header = new Section();
		$this->content = new Section();
		$this->footer = new Section();
		$this->overlay = new Section();
	}

	public function render()
	{
		Index::objectTpl()->render();
	}
}

Template::init();
