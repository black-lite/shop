<?php

namespace Core;

use JetBrains\PhpStorm\NoReturn;
use JsonSerializable;

class MessageUI
{
	public string $header;
	public string $content;

	public function __construct()
	{

	}

	#[NoReturn] public function send()
	{
		header('Content-Type: application/json', json_encode($this));
		die;
	}
}

