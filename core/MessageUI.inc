<?php

namespace Core;

use JsonSerializable;

class MessageUI implements JsonSerializable
{
	public string $header;
	public string $content;

	public function __construct()
	{

	}

	public function jsonSerialize()
	{
		// TODO: Implement jsonSerialize() method.
	}

	public function send()
	{
		header('Content-Type: application/json', json_encode($this));
		die;
	}
}

