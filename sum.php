#! /usr/bin/php 

<?php

   $TIMES = 400;
   $maxC = 500000;
   $sum = 0;
   for ($j = 0;$j < $TIMES;$j++)
   {
   $sum = 0;
   for ($i = 0;$i < $maxC;$i++)
      {
      $tall = ($i + 1)*($i + 1) - $i*$i;
      $sum = $sum + $tall;
      }
   }

print "Ferdig. Sum $sum\n";

?>
