<?php

namespace Core;

class Action
{
	protected string $scene;
	protected string $layer;
	protected string $params;
	protected string $script;
	protected array $searchParams;
	protected array $defaultParams;

	public function __construct(string $scene, string $layer, string $params, string $script, array $searchParams, array $defaultParams)
	{
		$this->scene = $scene;
		$this->layer = $layer;
		$this->params = $params;
		$this->script = $script;
		$this->searchParams = $searchParams;
		$this->defaultParams = $defaultParams;
	}

	function link(string $text, array $values, array $attrs): string
	{
		$_attrs = [];

		foreach ($attrs as $nameAttr => $valAttr)
		{
			$_attrs[] = "{$nameAttr}='$valAttr'";
		}

		$readyAttrs = implode(' ', $_attrs);
		return "<a {$readyAttrs}></a>";
	}

	public function script(array $values, array $attrs) : string
	{
		$attributes = '';

		// <a class="link" onclick="navUI()"></a>
	}
}
