/* 玩牌程式 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
typedef struct card {
  int flower;     /* 0123分別為梅花、磚塊、紅心、黑桃 */
  int num;        /* 0~12 表示 2,3,4…12,13,A 之間的數字 */
} CARD;
int main(void)
{
    char *fl[ ] = {"梅花","磚塊","紅心","黑桃"};
    int choice; 
    CARD player,banker;
    srand(time(NULL));
    printf("請問您想比 １)大 還是比 ２）小 ？");
    scanf("%d",&choice);
    do {
      printf("發牌中…\n");
      player.flower = rand( ) % 4;
      player.num = rand( )% 13;
      banker.flower = rand( )% 4;
      banker.num = rand( ) % 13;
      if(player.num == 12)
        printf("您拿到的牌是 %s A\n",fl[player.flower]);
      else
        printf("您拿到的牌是 %s %d\n", fl[player.flower],player.num+2);
      if(banker.num == 12)
        printf("電腦拿的牌是%s A\n",fl[banker.flower]);
      else
        printf("電腦拿的牌是 %s %d\n", fl[banker.flower],banker.num+2);
      if(choice == 1) {
        if((player.num*10+player.flower) > (banker.num*10+banker.flower))
          printf("您贏了！\n");
        else
          printf("您輸了！\n");
      } else {
        if((player.num*10+player.flower) > (banker.num*10+banker.flower))
          printf("您輸了！\n");
        else
          printf("您贏了！\n");
      }
      printf("再玩一次嗎？  １)大 ２）小 ０）不玩了");
      scanf("%d",&choice);
    } while(choice != 0);
    system("pause");     //使程式暫停在執行畫面讓我們看到結果
}
