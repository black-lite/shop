<?php

namespace Template\Admin\HTML;

use Core\View;

class Categories extends View
{
	public function renderToVar(array $items): bool|string
	{
		$this->start();
		$this->render();
		return $this->ready();
	}

	public function render(array $items = [])
	{
		?><div class="category_wrapper">
			<a onclick="ajaxInterface.get('?s=addCategory&l=null'); return false;">Добавить</a>
			<ul>
			<?php foreach ($items as $item) { echo '<li>', $item,'</li>'; }?>
			</ul>
		</div>
		<?php
	}
}
