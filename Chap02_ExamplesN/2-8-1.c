/* �o�O�ϥ�scanf��J���{���d�� */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int i;
    char ch;
    float j;
    printf("�̧ǿ�J ��� �r�� �a���p�ƪ��ƭ�(�ȻP�ȶ��Ϊťթ�Enter��j�}): ");
    scanf("%d %c %f",&i,&ch,&j);                      /*�ϥ�scanf�禡�s�J�ܼƤ��� */
    printf("�ҿ�J����ƬO %d\n",i);
    printf("�ҿ�J���r���O %c\n",ch);
    printf("�ҿ�J���p�ƬO %f\n",j);
    system("pause");
} 

