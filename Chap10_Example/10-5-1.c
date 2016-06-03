/*計算圓面積程式*/
#include <stdio.h>
#include <stdlib.h>
#define A(r) (double)(r)*(r)*3.1415 //定義巨集
int main(void)
{
  int r;  
  scanf("%d",&r);  
  printf("%lf\n",A(r));  //根據讀入的半徑值來呼叫巨集
  system("pause");
  return 0;
} 

