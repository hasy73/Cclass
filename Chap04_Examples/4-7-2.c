/* �u�`�P�_�{�� */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int month;
    printf("�п�J����G");
    scanf("%d",&month);
    if(month >= 1 && month <=3)           //�P�_�O�_��1���3��
      printf("%d ��O�K��\n",month);
    else if(month <=6)                     //�P�_�O�_��4���6��
      printf("%d ��O�L��\n",month);
    else if(month <=9)                     //�P�_�O�_��7���9��
      printf("%d ��O���\n",month);
    else if(month <=12)                    //�P�_�O�_��10���12��
      printf("%d ��O�V��\n",month);
    else
      printf("���X�k�����\n");
    system("pause");     //�ϵ{���Ȱ��b����e�����ڭ̬ݨ쵲�G
    return 0;
}
