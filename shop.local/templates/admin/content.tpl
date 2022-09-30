<?php

namespace Template\Admin;

use Core\Action;

class Content
{
	static public function render(Action $action)
	{?>
		<div class="side_bar">
			<div>
				<a href="/admin">Главная</a>
				<?php $action->link()?><a onclick="ajaxInterface.get('?s=category&l=null'); return false;">Категории</a>
			</div>
		</div>
		<div class="content"></div>
	<?php }
}