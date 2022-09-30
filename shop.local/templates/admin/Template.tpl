<?php

namespace Core\Admin;

use Core\Section;
use Core\Templates;
use Template\Admin\Index;

require __DIR__.'/index.tpl';
require __DIR__.'/../../core/Templates.inc';
require __DIR__.'/../../core/section.inc';

class Template
{
	public static ?self $instance = null;
	public static function init() : static { return new static; }

	public Section $header;
	public Section $content;
	public Section $overlay;

	public function __construct()
	{
//		parent::__construct();
		static::$instance = $this;

		$this->header = new Section();
		$this->content = new Section();
		$this->overlay = new Section();
	}

	public function render()
	{
		Index::objectTpl()->render();
	}
}

Template::init();