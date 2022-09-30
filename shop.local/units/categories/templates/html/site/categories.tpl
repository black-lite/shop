<?php

namespace Template\Site\HTML;

use Core\Templates;

class Categories extends Templates
{
	public function render(array $items = [])
	{
		?>
		<!doctype html>
		<html lang="en">
		<head>
			<meta charset="UTF-8">
			<meta name="viewport" content="width=device-width, user-scalable=no, initial-scale=1.0, maximum-scale=1.0, minimum-scale=1.0">
			<meta http-equiv="X-UA-Compatible" content="ie=edge">
			<link rel="stylesheet" href="/templates/admin/common.css">
			<title>Shop</title>
		</head>
		<body>
		<div class="main_wrapper">
			<div class="header">

			</div>
			<div class="content">
				<div class="content_wrapper">
					<div class="category">
						<div class="category_item"><a>Комплектующие для компьютеров</a></div>
						<div class="category_item"><a>Комплектующие для компьютеров</a></div>
						<div class="category_item"><a>Комплектующие для компьютеров</a></div>
						<div class="category_item"><a>Комплектующие для компьютеров</a></div>
					</div>
					<div class="other_content">
						<div class="offer"></div>
						<div class="popular_cat"></div>
					</div>
				</div>
			</div>
			<div class="footer">футер</div>
		</div>
		</body>
		</html>
		<?php
	}
}
