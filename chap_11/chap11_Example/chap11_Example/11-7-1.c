/* ���u���d���{�� */
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
      printf("1) ���d 2)�d�� 0)���} :"); 
      scanf("%c",&ch);
      if(ch == '1') {
        printf("�п�J�z�b���q��id�G");
        scanf("%d",&s[now].id);
        printf("�z���Ѩ�Z�ɶ��O�G");
        scanf("%s",s[now].arrive);
        printf("      ���}�ɶ����G");
        scanf("%s",s[now].leave);
        printf("���¡A�U�@��\n");
        now++;
      } else if(ch == '2') {
        int i;
        if(now != 0) {     
          printf("�Q�d�߽֪����?");
          scanf("%d",&id);
          for(i=0;i<now;i++)
            if(id == s[i].id) {
               printf("�W����F�ɶ���: %s\n",s[i].arrive);
               printf("�W�����}�ɶ���: %s\n",s[i].leave);
               break;   
            }
          if(i>=now)  
            printf("�L�� id\n");    
        } else {
          printf("�|�L���\n");     
        }  
      } else if(ch == '0')
        break;
      fflush(stdin);   
    }
    system("pause"); 
}
