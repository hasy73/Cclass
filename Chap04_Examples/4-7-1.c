/*����ഫ�{�� */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    char ch;
    double input;
    printf("�z�n�ഫ 1)���� -> �^�` 2)���� -> �^��");
    scanf("%c",&ch);         /* ��J��� */
    scanf("%lf",&input);       /* ��J���ഫ���� */
    if(ch == '1')
      printf("%lf ���� = %lf �^�`\n",input,input*3.28);
    else if(ch == '2')
      printf("%lf ���� = %lf �^��\n",input,input*2.2);
    else 
      printf("�S���o�ӿﶵ\n");
    system("pause");     //�ϵ{���Ȱ��b����e�����ڭ̬ݨ쵲�G
    return 0;
} 

