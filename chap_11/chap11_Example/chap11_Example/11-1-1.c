/* ���P�{�� */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
typedef struct card {
  int flower;     /* 0123���O������B�j���B���ߡB�®� */
  int num;        /* 0~12 ��� 2,3,4�K12,13,A �������Ʀr */
} CARD;
int main(void)
{
    char *fl[ ] = {"����","�j��","����","�®�"};
    int choice; 
    CARD player,banker;
    srand(time(NULL));
    printf("�аݱz�Q�� ��)�j �٬O�� ���^�p �H");
    scanf("%d",&choice);
    do {
      printf("�o�P���K\n");
      player.flower = rand( ) % 4;
      player.num = rand( )% 13;
      banker.flower = rand( )% 4;
      banker.num = rand( ) % 13;
      if(player.num == 12)
        printf("�z���쪺�P�O %s A\n",fl[player.flower]);
      else
        printf("�z���쪺�P�O %s %d\n", fl[player.flower],player.num+2);
      if(banker.num == 12)
        printf("�q�������P�O%s A\n",fl[banker.flower]);
      else
        printf("�q�������P�O %s %d\n", fl[banker.flower],banker.num+2);
      if(choice == 1) {
        if((player.num*10+player.flower) > (banker.num*10+banker.flower))
          printf("�zĹ�F�I\n");
        else
          printf("�z��F�I\n");
      } else {
        if((player.num*10+player.flower) > (banker.num*10+banker.flower))
          printf("�z��F�I\n");
        else
          printf("�zĹ�F�I\n");
      }
      printf("�A���@���ܡH  ��)�j ���^�p ���^�����F");
      scanf("%d",&choice);
    } while(choice != 0);
    system("pause");     //�ϵ{���Ȱ��b����e�����ڭ̬ݨ쵲�G
}
