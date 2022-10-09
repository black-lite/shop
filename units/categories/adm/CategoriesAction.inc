<?php

namespace Core;

use Core\Admin\Template;
use Core\Units\TPL;

class CategoriesAction extends Action
{

	public function __construct(int $run_type, string $unit_name, Template $template)
	{
		parent::__construct($run_type, $unit_name, $template);
	}

}
