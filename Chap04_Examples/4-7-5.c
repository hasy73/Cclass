/*�r���P�_�{�� */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    char ch;
    scanf("%c",&ch);
    if(ch >= 'a' && ch <= 'z')
      printf("��J�r�����p�g�r��\n");
    if(ch >= 'A' && ch <= 'Z')
      printf("��J�r�����j�g�r��\n");
    if(ch >= '0' && ch <='9')
      printf("��J�r�������ԧB�Ʀr\n");
    system("pause");     //�ϵ{���Ȱ��b����e�����ڭ̬ݨ쵲�G
    return 0;
} 


