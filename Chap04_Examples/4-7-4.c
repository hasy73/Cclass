/*�h�q���ʳf���q�{�� */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int money;
    scanf("%d",&money);        /* ��J�R�F�h�ֿ�*/
    if(money > 10000)
      money = money*55/100;
    else if(money > 5000)
      money = money*6/10;
    else if(money > 2000)
      money = money*7/10;
    printf("��ݥI %d \n",money);
    system("pause");     //�ϵ{���Ȱ��b����e�����ڭ̬ݨ쵲�G
    return 0;
} 


