/*  CircleArea.c */
#include <stdio.h>
#include <stdlib.h>
float CircleArea(float);
int main(void)
{
    float radius;
    printf("�п�J�ꪺ�b�|:");
    scanf("%f",&radius);
    printf("�b�| %f ����, �䭱�n�� %f\n",
           radius, CircleArea(radius));
    system("pause");     
}
float CircleArea(float r)
{
    return 3.14*r*r;
}
