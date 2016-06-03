/*變數交換程式*/
#include <stdio.h>
#include <stdlib.h>
#define SWAP(x,y,t) (t = x, x = y, y = t) //定義巨集
int main(void)
{
    int x=3,y=4,temp;
    SWAP(x,y,temp);   //呼叫巨集
    printf("x = %d y = %d\n",x,y);
    system("pause");  
}
