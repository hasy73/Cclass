#include <stdio.h>
#include<stdlib.h>
#define INTEREST_RATE 0.1
int main(void)
{
  int amount1=100000;
  int amount2=200000;
  
  printf("目前利率為%f\n", INTEREST_RATE);
  printf("本金 %d, 每期利息為 %f \n",amount1, amount1*INTEREST_RATE);
  printf("本金 %d, 每期利息為 %f \n",amount2, amount2*INTEREST_RATE);
  system("pause");
} 

