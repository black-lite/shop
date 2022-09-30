<?php

namespace Core;

class View
{
	protected static array $singletone = [];

	protected function start() { ob_start(); }
	protected function ready(): bool|string { $val = ob_get_contents(); ob_get_clean(); return $val;}

	public function __construct() {}

	public static function objectTpl() : static
	{
		$class = static::class;
		if (!isset(self::$singletone[$class])) self::$singletone[$class] = new static();
		return self::$singletone[$class];
	}
}
