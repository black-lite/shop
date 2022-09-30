<?php

namespace Core;

use Core\Database\CDB;

require __DIR__ . '/params/const.inc';
//require __DIR__ . '/database/db_mysql.inc';

class Model implements Consts
{
	protected CDB $db;

	public function __construct()
	{
		$this->db = new CDB(self::HOST, self::USERNAME, self::PASSWORD, self::DB_NAME);
	}
}