/* ���즨�Z���`���P�������Ƶ{�� */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int chinese,english,math,science,social;
    printf("�п�J���즨�Z�G");
    scanf("%d %d %d %d %d",&chinese,&english,&math,&science,&social);      
    printf("�`�����G%d\n",chinese+english+math+science+social);
    printf("�������G%f\n",(float)(chinese+english+math+science+social)/5);
    system("pause");     //�ϵ{���Ȱ��b����e�����ڭ̬ݨ쵲�G
    return 0;
} 
