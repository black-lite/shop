<?php

namespace Site\Units;

use Core\Model;

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