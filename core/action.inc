<?php

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
		$params = $this->params;

		$script = $this->script($values);

		$url[] = "s={$this->scene}";
		$url[] = "l={$this->layer}";
		$emptyUrl = implode('&', $url);

		if (!empty($values))
		{
			foreach ($values as $key => $val)
			{
				if (in_array($key, $this->searchParams))
				{
					$params = str_replace("__{$key}", $val, $params);
				}
				elseif (array_key_exists($key, $this->defaultParams))
				{
					$params = str_replace("__{$key}", $this->defaultParams[$key], $params);
				}
			}
			echo '<a href="' . implode('&', $url) . '&' . $params .'"'. 'onclick="' . $script .'"', '>' ,$text ,'</a>';
		}
		else echo '<a href="' . implode('&', $url) . '"' . 'onclick="' . $script .'"', '>' ,$text ,'</a>';


	}

	public function url(array $values) : string
	{

	}

	public function script(array $values) : string
	{
		$script = $this->script;

		$script = str_replace('__s', $this->scene, $script);
		$script = str_replace('__l', $this->layer, $script);

		if (!empty($values))
		{
			foreach ($values as $key => $val)
			{
				if (in_array($key, $this->searchParams))
				{
					$script = str_replace("__{$key}", $val, $script);
				}
				elseif (array_key_exists($key, $this->defaultParams))
				{
					$script = str_replace("__{$key}", $this->defaultParams[$key], $script);
				}
			}
		}
		return $script;
		// onclick="s=main&l=null"
	}
}
