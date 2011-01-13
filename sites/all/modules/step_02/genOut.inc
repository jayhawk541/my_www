<?php
// $Id$

function genOut($delta) {
	$ip = $_SERVER['REMOTE_ADDR'];
	$res = "<table><tr><td>IP:</td><td>{$ip}</td></tr><tr><td>By:</td><td>" 
		. str_replace(', ', '</td></tr><tr><td>Land:</td><td>', file_get_contents("http://geoip.dk/?adr={$ip}")) 
		. '</td></tr></table>';
	return $res;
}
