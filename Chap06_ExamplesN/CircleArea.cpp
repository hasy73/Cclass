/*  CircleArea.c */
#include <stdio.h>
#include <stdlib.h>
float CircleArea(float);
int main(void)
{
    float radius;
    printf("請輸入圓的半徑:");
    scanf("%f",&radius);
    printf("半徑 %f 的圓, 其面積為 %f\n",
           radius, CircleArea(radius));
    system("pause");     
}
float CircleArea(float r)
{
    return 3.14*r*r;
}
