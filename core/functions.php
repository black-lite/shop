<?php

function debug(mixed $var)
{
	echo '<pre>',
	var_export($var);
	echo '<pre>';
}
