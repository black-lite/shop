<?php

namespace Core\Database;

use mysqli;
use mysqli_result;

class CDB
{
	protected string $host;
	protected string $username;
	protected string $password;
	protected string $db_name;
	protected mysqli|null|false $db;

	public function __construct(string $host, string $username, string $password, string $db_name)
	{
		@ $this->db = new mysqli($host, $username, $password, $db_name);
		$this->host = $host;
		$this->username = $username;
		$this->password = $password;
		$this->db_name = $db_name;
	}

	function error(): string
	{
		return $this->db->connect_error;
	}

	public function Query(string $sql) : bool|mysqli_result
	{
		return $this->db->query($sql);
	}

	/**
	 * @param array $data = [$field => $value]
	 */
	public function Insert(array $data, string $table) : bool|mysqli_result
	{
		return $this->db->query($this->SQLInsert($data, $table));
	}

	public function Select(string $fields = '*', string $table = '', string $where = '', string $order = '') : bool|mysqli_result
	{
		return $this->db->query($this->SQLSelect($fields, $table, $where, $order));
	}

	public function Delete(string $table, string $where) : bool|mysqli_result
	{
		return $this->db->query($this->SQLDelete($table, $where));
	}

	public function Update(string $table, array $data, string $where) : bool|mysqli_result
	{
		return $this->db->query($this->SQLUpdate($table, $data, $where));
	}

	public function Fetch(mysqli_result $result) : ?array
	{
		return $result->fetch_assoc();
	}

	public function FetchAll(mysqli_result $result, \Closure $function = null) : ?array
	{
		$items = [];

		while ($res = $this->Fetch($result)) {
			$items[] = $res;
		}

		return $items;
	}

	public function SQLInsert(array $data, string $table): string
	{
		$f = [];
		$v = [];

		foreach ($data as $key => $value) {
			$f[] = "`{$key}`";
			$v[] = "'{$value}'";
		}

		$fields = implode(',', $f);
		$values = implode(',', $v);

		return "INSERT INTO `{$table}` ({$fields}) VALUES ({$values})";
	}

	public function SQLSelect(string $fields = '*', string $table = '', string $where = '', string $order = ''): string
	{
		$WHERE = $where != '' ? " WHERE {$where}" : '';
		$ORDER = $order != '' ? " ORDER BY {$order}" : '';

		return "SELECT {$fields} FROM `{$table}`{$WHERE}{$ORDER}";
	}

	public function SQLDelete(string $table, string $where): string
	{
		return "DELETE FROM `{$table}` WHERE {$where}";
	}

	public function SQLUpdate(string $table, array $data, string $where): string
	{
		$sets = [];

		foreach ($data as $field => $value) {
			$sets[] = "`{$field}` = '$value'";
		}

		$values = implode(',', $sets);

		return "UPDATE `{$table}` SET {$values} WHERE $where;";
	}
}
