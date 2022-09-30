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

	public function __construct(string $scene, string $layer, string $params, string $script, array $searchParams = [], array $defaultParams = [])
	{
		$this->scene = $scene;
		$this->layer = $layer;
		$this->params = $params;
		$this->script = $script;
		$this->searchParams = $searchParams;
		$this->defaultParams = $defaultParams;
	}

	function link(string $text, array $values, array $attrs = [])
	{
		/** s=__s&l=__l&id=__id */
		$param = $this->params;

		$script = $this->script($values);


		//<a href="', implode('&', $arr), '"', echo ``,'>',$text,'</a>
		echo '<a href="" '. 'onclick="' . $script .'"', '>' ,$text ,'</a>';
	}

	public function script(array $values) : string
	{
		$script = $this->script;

		$script = str_replace('__s', $this->scene, $script);
		$script = str_replace('__l', $this->layer, $script);

		foreach ($values as $param => $value) $script = str_replace("__{$param}", $value, $script);

		return $script;
		// onclick="navUI()"
	}
}
