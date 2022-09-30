<?php

namespace Template\Admin;

use Core\Admin\Template;
use Core\View;

require 'content.tpl';
require 'header.tpl';
require __DIR__.'/../../core/view.inc';

class Index extends View
{
	public function render()
	{
		?>
		<!doctype html>
		<html lang="en">
		<head>
			<meta charset="UTF-8">
			<meta name="viewport" content="width=device-width, user-scalable=no, initial-scale=1.0, maximum-scale=1.0, minimum-scale=1.0">
			<meta http-equiv="X-UA-Compatible" content="ie=edge">
			<link rel="stylesheet" href="/templates/admin/common.css">
			<script src="/templates/admin/src/scripts/jquery-3.6.0.min.js"></script>
			<script src="/templates/admin/src/scripts/message.js"></script>
			<title>Админка</title>
		</head>
		<body>
		<div class="main_wrapper">
			<div class="header">
				<?php Header::render();?>
			</div>
			<div class="content_wrapper">
				<?php Content::render();?>
			</div>
		</div>
		</body>
		</html>
		<?php
	}
}
