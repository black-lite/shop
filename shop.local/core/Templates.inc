<?php

namespace Core;


abstract class Templates
{
	public static ?self $instance = null;
	public static function init() : static { return new static; }

	public function __construct()
	{
		static::$instance = $this;
	}

	abstract public function render();
}