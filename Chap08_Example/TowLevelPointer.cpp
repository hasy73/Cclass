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
  
  //Q19: �p���x����} 
  //Q20: �p���p����}
  //Q21: �p���pp����} 
   
  system("pause");     
}
