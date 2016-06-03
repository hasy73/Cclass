#include <stdio.h>
#include<stdlib.h>
//練習: 請改寫本題
// 1. 將圓週率定義成常數, 常數名稱為PI
// 2. 程式中需要用到圓週率的地方一率以PI表示 
        #define PI 3.14
int main(void)
{
  float r1 = 10;
  float r2 = 1;
  
  printf("半徑: %f\t圓週長: %f\t圓面積: %f\n", r1, 2*PI*r1, PI*r1*r1);
  printf("半徑: %f\t圓週長: %f\t圓面積: %f\n", r2, 2*PI*r2, PI*r2*r2);
  system("pause");
} 

