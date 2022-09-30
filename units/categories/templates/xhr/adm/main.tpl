<?php

namespace Template\Admin\XHR;

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
			<link rel="stylesheet" href="../../../../../templates/admin/src/style/admin/common.css">
			<title>Админка</title>
		</head>
		<body>
		<div class="main_wrapper">
			<div class="header">
				<div class="actions">
					<span class="actions__sign_in item">Войти</span>
				</div>
			</div>
			<div class="content_wrapper">
				<div class="side_bar">
					<div>
						<a href="/admin">Главная</a>
						<a href="?s=category&l=null">Категории</a>
					</div>
				</div>
				<div class="content">
					<div class="category_wrapper">
						<a onclick="ajaxInterface.get('?s=addCategory&l=null'); return false;">Добавить</a>
						<ul>
						<?php foreach ($items as $item) {
							echo '<li>', $item,'</li>';
						}?>
						</ul>
					</div>
				</div>
			</div>
		</div>
		</body>
		</html>
		<?php
	}
}
