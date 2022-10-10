<?php

namespace Core;

use JetBrains\PhpStorm\NoReturn;
use JsonSerializable;

class MessageUI implements JsonSerializable
{
	public string $header;
	public string $content;

	public function __construct()
	{

	}

	public function jsonSerialize() : array
	{
		$content = [];

		if ($this->header != '') $content['header'] = $this->header;
		if ($this->content != '') $content['content'] = $this->content;

		return $content;
	}

	#[NoReturn] public function send()
	{
		header('Content-Type: application/json', json_encode($this));
		die;
	}
}

