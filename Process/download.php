<?php
$data = file_get_contents($argv['1']);
if ($data) {
	return $data;
} else {
	return -1;
}
