/* �n�ͦW��{�� */
#include <stdio.h>
#include <stdlib.h>
typedef struct friend {
  char name[10];
  char phone[15];
  char birth[15];
} FRIEND;
void show(FRIEND [ ],int);
FRIEND enter(void);
int main(void)
{
  int now=0;  
  char ch;
  FRIEND f[20];
  while(1)
  {
    printf("�аݱz�n 1)��X�n�ͦW�� 2)�s�W�n�͸�� 0)���}:");
    scanf("%c",&ch);
    if(ch == '1') {
      if(now != 0) 
        show(f,now);
      else
        printf("�ثe�|�L���\n");  
    } else if(ch =='2') {
      if(now>=20)
        printf("�W��w��!\n");
      else {
        f[now] = enter( );
        now++;
      }
    }         
else if(ch=='0')
      break;
    fflush(stdin);
  }
  system("pause");
  return 0;
}
void show(FRIEND f[ ],int size)
{
  int i;
  for(i=0;i<size;i++) {
    printf("==============================\n");                  
    printf("%10s ���q��: %-15s\n",f[i].name,f[i].phone);
    printf("%10s ���ͤ�: %-15s\n",f[i].name,f[i].birth);
  }
  printf("==============================\n");
}
FRIEND enter(void)
{
  FRIEND new;
  printf("�п�J�W��:");
  scanf("%s",new.name);
  printf("�п�J�q�ܸ��X:");
  scanf("%s",new.phone);
  printf("�п�J�ͤ�:");
  scanf("%s",new.birth);
  return new;
}

