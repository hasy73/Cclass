/* �NLine 9 ~ Line 18���P�_���Hswitch-case��g */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int month;
    printf("�п�J����G");
    scanf("%d",&month);
    switch(month) 
    {
      case 1 :
      case 2 :
      case 3 : 
            printf("%d ��O�K��\n",month);
            break;
      case 4 :
      case 5 :
      case 6 : 
            printf("%d ��O�L��\n",month);
            break;
      case 7 :
      case 8 :
      case 9 :           
            printf("%d ��O���\n",month);
            break;
      case 10 :
      case 11 :
      case 12 :           
            printf("%d ��O�V��\n",month);
            break;
      default:
            printf("���X�k�����\n");    
    }     
    /*if(month >= 1 && month <=3)           
      printf("%d ��O�K��\n",month);
    else if(month <=6)                     
      printf("%d ��O�L��\n",month);
    else if(month <=9)                     
      printf("%d ��O���\n",month);
    else if(month <=12)                    
      printf("%d ��O�V��\n",month);
    else
      printf("���X�k�����\n");*/ 
      
    system("pause");     //�ϵ{���Ȱ��b����e�����ڭ̬ݨ쵲�G
    return 0;
}
