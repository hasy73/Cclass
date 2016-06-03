/* readVector.c */
#include <stdio.h>
#include <stdlib.h>
struct vector {
  double x;
  double y;
  double z;
} ;
void enter(struct vector*);
struct vector add(struct vector, struct vector);
void minus(struct vector, struct vector, struct vector*);
int main(void)
{
  double d;  
  struct vector a,b;
  struct vector sum, minus;
  enter(&a);
  enter(&b);
  //輸出向量a 及 b  
  system("pause");
  return 0;
}
void enter(struct vector *v)
{
  printf("輸入一個向量(x,y,z): ");
  //以scanf 讀取向量的三個數值 
}


