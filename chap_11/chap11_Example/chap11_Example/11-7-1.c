/* 員工打卡機程式 */
#include <stdio.h>
#include <stdlib.h>
typedef struct staff {
  int id;
  char arrive[10];
  char leave[10];
} STAFF;
int main(void)
{
    int id,now=0;
    char ch;
    STAFF s[3];
    while(1) {
      printf("1) 打卡 2)查詢 0)離開 :"); 
      scanf("%c",&ch);
      if(ch == '1') {
        printf("請輸入您在公司的id：");
        scanf("%d",&s[now].id);
        printf("您今天到班時間是：");
        scanf("%s",s[now].arrive);
        printf("      離開時間為：");
        scanf("%s",s[now].leave);
        printf("謝謝，下一位\n");
        now++;
      } else if(ch == '2') {
        int i;
        if(now != 0) {     
          printf("想查詢誰的資料?");
          scanf("%d",&id);
          for(i=0;i<now;i++)
            if(id == s[i].id) {
               printf("上次到達時間為: %s\n",s[i].arrive);
               printf("上次離開時間為: %s\n",s[i].leave);
               break;   
            }
          if(i>=now)  
            printf("無此 id\n");    
        } else {
          printf("尚無資料\n");     
        }  
      } else if(ch == '0')
        break;
      fflush(stdin);   
    }
    system("pause"); 
}
