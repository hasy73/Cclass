/*�d��P�_�����{�� */
#include <stdio.h>
#include <stdlib.h>
#define RANGE(a,b,x) (x>a && x<b) ? 1 : 0 //�B�ΤT���B��l
int main(void)
{
    if(RANGE(0,10,5))    //�P�_5�O�_�b0~10����
      puts("5 �b 0~10 ����");
    system("pause");    
    return 0;
}

