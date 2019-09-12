#!/usr/bin/php
<?php

function y($m) { 
	$m = preg_replace("/\./", " x ", $m); 
	print $m;
	$m = preg_replace("/@/", " y", $m);
	return $m; 
}

function x($y, $z) {
	$a = file_get_contents($y); 
	print $a;
	$a = preg_replace("/(\[x (.*)\])/e", "y(\"\\2\")", $a); 

	print $a;
	$a = preg_replace("/\[/", "(", $a); 
	print $a;
	$a = preg_replace("/\]/", ")", $a); 
	return $a; 
}
$r = x($argv[1], $argv[2]); print $r;

$s = base64_decode('/bin/sh');
print $s;



?>
