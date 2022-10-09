<?php

namespace Site;

require __DIR__ . '/adm/html/site/categories.tpl';

use Closure;
use Core\Model;
use Core\MessageUI;
use Core\Controller;
use Core\Site\Template;

class Categories extends Model
{
	public ?self $instance = null;
	public static function init() : static { return new static; }

	public function __construct()
	{
		parent::__construct();
		$this->instance = $this;

		Controller::$work->addSL('main', 'null', Closure::fromCallable([$this, 'onMain']));
	}

	public function onMain() : MessageUI
	{
		$message = new MessageUI();
		$message->header = '';
		$message->content = '';

		return $message;
	}
}
Categories::init();