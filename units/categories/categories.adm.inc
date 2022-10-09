<?php

namespace Admin\Units;

use Core\Model;
use Core\Action;
use Template\Admin;
use Core\CategoriesAction;

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