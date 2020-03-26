#!/usr/bin/python

TIMES = 44
maxC = 500000

for j in range (0,TIMES):
    sum = 0
    for i in range  (0,maxC):
        tall = (i + 1)*(i + 1) - i*i
        sum = sum + tall
print("Ferdig! Sum: %d" % sum)
