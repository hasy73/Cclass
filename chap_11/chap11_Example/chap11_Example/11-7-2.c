/* 學生成績系統程式 */
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
  printf("請輸入您的姓名:");
  scanf("%s",s.name);
  printf("請輸入課程數目:");
  scanf("%d",&s.gd.co_num);
  for(i=0;i<s.gd.co_num;i++) {
    printf("請輸入第 %d 個成績:",i+1);
    scanf("%d",&s.gd.g[i]);
  }
  s.gd.average = 0;
  for(i=0;i<s.gd.co_num;i++) {
    s.gd.average += s.gd.g[i];
  }
  s.gd.average = s.gd.average/s.gd.co_num;
  printf("%s 的平均成績為 %.2lf\n",s.name,s.gd.average);                           
  system("pause");
  return 0;
}
