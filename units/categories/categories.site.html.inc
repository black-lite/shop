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

		Controller::$instance->addSL('main', 'null', Closure::fromCallable([$this, 'onMain']));
	}

	public function onMain()
	{
		$message = new MessageUI();
		$message->header = Template::$instance->header->push(\Template\Site\HTML\Categories::objectTpl()->renderToVar(['1','2'.'3']));

		$message->send();
	}
}
Categories::init();