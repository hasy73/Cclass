/* NotIntDivision.c */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int a,b;
    float c;
    a=7;
    b=2;
    c=(float)a/b; //資料型態轉換
    printf("%f\n\n",c);

    system("pause");
    return 0;
} 
