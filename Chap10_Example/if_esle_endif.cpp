/* if_esle_endif.c */
#include <stdio.h>
#include <stdlib.h>
#define round
#define volume
#define R(r) (double)2*(r)*3.1415
#define A(r) (double)(r)*(r)*3.1415
#define V(r) (double)4/3*(r)*(r)*(r)*3.1415
int main(void)
{
  int r;   
  scanf("%d",&r);  
#ifdef round  
  printf("Round: %lf\n",R(r));
#else
  printf("未定義 round 這個常數名稱或巨集");  
#endif
  system("pause");
  return 0;
}
