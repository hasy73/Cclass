/* swap.c */
#include <stdio.h>
#include<stdlib.h>
void swap(int,int);
int main(void)
{
  int x,y;       
  x=2; y=3;
  printf("Before swap, x = %d, y = %d\n",x,y);
  swap(x,y);
  printf("After swap, x = %d, y = %d\n",x,y);
  system("pause");     
}
void swap(int x1,int y1)
{
  int temp;        
  temp=x1;
  x1=y1;
  y1=temp;
}
