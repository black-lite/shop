<?php

namespace Core;

class Section
{
	protected array $items = [];

	public function push(callable $callback) { $this->items[] = $callback; }

	public function render() { foreach ($this->items as $callback) call_user_func($callback); }

	public function isFilled() : bool { return count($this->items); }
}