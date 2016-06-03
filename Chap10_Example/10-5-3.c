/*範圍判斷巨集程式 */
#include <stdio.h>
#include <stdlib.h>
#define RANGE(a,b,x) (x>a && x<b) ? 1 : 0 //運用三元運算子
int main(void)
{
    if(RANGE(0,10,5))    //判斷5是否在0~10之間
      puts("5 在 0~10 之間");
    system("pause");    
    return 0;
}

