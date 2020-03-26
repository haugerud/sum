#! /bin/bash

# time sum.bash
(( maxC = 500000 ))
(( i = 0 ))
(( sum = 0 ))
while (( i < maxC ))
do
	(( tall = (i + 1) * (i + 1) - i*i ))
	(( sum = sum + tall  ))
	(( i += 1 ))
done
echo "Ferdig, sum: $sum"



