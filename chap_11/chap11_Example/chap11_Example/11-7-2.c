/* �ǥͦ��Z�t�ε{�� */
#include <stdio.h>
#include <stdlib.h>
typedef struct grade {
  int co_num;
  int g[10];
  double average;
} GD;
typedef struct student {
  char name[10];      
  GD gd;
} STU;
int main(void)
{
  int i;  
  STU s;
  printf("�п�J�z���m�W:");
  scanf("%s",s.name);
  printf("�п�J�ҵ{�ƥ�:");
  scanf("%d",&s.gd.co_num);
  for(i=0;i<s.gd.co_num;i++) {
    printf("�п�J�� %d �Ӧ��Z:",i+1);
    scanf("%d",&s.gd.g[i]);
  }
  s.gd.average = 0;
  for(i=0;i<s.gd.co_num;i++) {
    s.gd.average += s.gd.g[i];
  }
  s.gd.average = s.gd.average/s.gd.co_num;
  printf("%s ���������Z�� %.2lf\n",s.name,s.gd.average);                           
  system("pause");
  return 0;
}
