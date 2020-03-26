#include <stdio.h>

// $ cc -O sumO.c  # Nesten 7 ganger raskere enn om -O (optimalisering) ikke er med
// $ time a.out
int main()
{
    int TIMES = 28000;

    int maxC = 500000;
    int i,j;
    long long sum = 0;
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
