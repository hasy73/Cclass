/* extern�d��-6-4-1-file1.c */
#include <stdio.h>
#include <stdlib.h>
#include "6-4-1-file2.c"  //�ϥ����޸��Nfile2.c�ɧt�A�i�� 
int f(int);           //�ŧi�ۭq�禡f
int a;                 //�ŧi�����ܼ�a
int main(void)
{
    a = f(5);             //�I�s�禡f�ñN�^�ǭ��x�s�i�ܼ�a
    printf("a = %d\n",a);
    system("pause");     //�ϵ{���Ȱ��b����e�����ڭ̬ݨ쵲�G
}
