/* �禡���е{�� */
#include <stdio.h>
#include<stdlib.h>
int add(int,int);
int main(void)
{
  int ans,(*p) (int x,int y); //�ŧi�禡����p�A�㦳��Ӿ�Ƥ޼�
  p = add;             //�Np���V�禡add
  ans = (*p) (3,4);      //�����I�sadd�禡
  printf("%d\n",ans);
system("pause");     //�ϵ{���Ȱ��b����e�����ڭ̬ݨ쵲�G
}
int add(int x,int y)
{
  return x+y;
}
