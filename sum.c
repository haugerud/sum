#include <stdio.h>

// $ cc sum.c  
// $ time a.out
int main()
{
    int TIMES = 4100;

    int maxC = 500000;
    int i,j;
    long long int sum = 0;
    int tall;

    for(j=0;j < TIMES;j++)
       {
       sum = 0;
       for(i=0;i < maxC;i++)
	  {
	  tall = (i + 1)*(i + 1) - i*i;
	  sum = sum + tall;
	  }
       }
    printf("Ferdig %llu\n",sum);
}
