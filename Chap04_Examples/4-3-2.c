/* 4-3-2.c */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    char rain;
    printf("���ѭ��B���v�j��50%��?");
    scanf("%c",&rain);    
    if(rain == 'y' || rain =='Y')           
      printf("�A�̦n�n�a��!\n");
    else    
      printf("�i�ण�|�U�B�A�����a�ʤF!\n");
    system("pause");     
    return 0;
}

