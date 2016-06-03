/* TowLevelPointer.c */
#include <stdio.h>
#include<stdlib.h>
int main(void)
{
  int **pp,*p, x=5;       
  p = &x;             
  pp = &p;            
  printf("x = %d\n",x);     
  printf("x = %d\n",*p);
  printf("x = %d\n",**pp);
  
  //Q19: 如何取x的位址 
  //Q20: 如何取p的位址
  //Q21: 如何取pp的位址 
   
  system("pause");     
}
