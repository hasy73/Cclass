/*�̤j�ƥ����{�� */
#include <stdio.h>
#include <stdlib.h>
#define MAX(a,b,c) (a>b)? (a>c) ?a:c :(b>c)?b:c
int main(void)
{
    printf("9,12,31 �����̤j�Ȭ� %d\n",MAX(9,12,31));
    system("pause");   
    return 0;
}
