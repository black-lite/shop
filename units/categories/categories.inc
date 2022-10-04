<?php

namespace Admin\Units;

require __DIR__ . '/adm/html/adm/categories.tpl';

use Closure;
use Core\Model;
use Template\Admin;
use Core\Controller;

class Categories extends Model
{
	public ?self $instance = null;
	public static function init() : static { return new static; }

	public function __construct()
	{
		parent::__construct();
		$this->instance = $this;
	}
}
Categories::init();