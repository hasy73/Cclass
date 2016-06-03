/* 6-3-1.c */
#include <stdio.h>
#include <stdlib.h>
int f(int);               
int z;                  
int main(void)
{
    int x = 10,y;
    y = f(x);
    printf("x = %d, y = %d, z=%d\n",x,y,z);
    system("pause");     
    return 0;
}
int f(int x)
{
    z=10000;
    return x*x;
}
