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
  //��X�V�qa �� b  
  system("pause");
  return 0;
}
void enter(struct vector *v)
{
  printf("��J�@�ӦV�q(x,y,z): ");
  //�Hscanf Ū���V�q���T�Ӽƭ� 
}


