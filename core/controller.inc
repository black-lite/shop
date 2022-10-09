<?php

namespace Core;

class Controller
{
	public static ?self $instance = null;

	public static ?self $init = null;
	public static ?self $prepare = null;
	public static ?self $work = null;
	public static ?self $display = null;

	public static function init() : self { return new self(); }

	protected array $items = [];

	static public string $scene = 'main';
	static public string $layer = 'null';

	public function __construct()
	{
		static::$instance = $this;
	}

	public function addSL(string $scene, string $layer, callable ...$callbacks)
	{
		if(!isset($this->items[$scene])) $this->items[$scene] = [];
		if(!isset($this->items[$scene][$layer])) $this->items[$scene][$layer] = [];

		foreach ($callbacks as $callback) $this->items[$scene][$layer][] = $callback;

	}

	public function doSL(string $scene, string $layer)
	{
		if (isset($this->items[$scene]) && isset($this->items[$scene][$layer]))
		foreach ($this->items[$scene][$layer] as $callback) call_user_func($callback);
	}

	public static function controllerDo()
	{
		static::$scene = $_GET['s'] ?? $_POST['s'] ?? 'main';
		static::$layer = $_GET['l'] ?? $_POST['l'] ?? 'null';

		Controller::$init->doSL(static::$scene, static::$layer);
		Controller::$prepare->doSL(static::$scene, static::$layer);
		Controller::$work->doSL(static::$scene, static::$layer);
		Controller::$display->doSL(static::$scene, static::$layer);
	}

	public function getItems(): array
	{
		return $this->items;
	}

}

Controller::$init = new Controller();
Controller::$prepare = new Controller();
Controller::$work = new Controller();
Controller::$display = new Controller();