/* �ܼƥ洫�{�� */
#include <stdio.h>
#include<stdlib.h>
void swap(int *,int *);
int main(void)
{
  int a=4,b=3;  //����ܼƪ���ȳ]�w 
  swap(&a,&b);  //�N���з�@�޼ƨӶǻ��i�禡
  printf("a = %d  b= %d\n",a,b);
  system("pause");     //�ϵ{���Ȱ��b����e�����ڭ̬ݨ쵲�G
}
void swap(int *x,int *y)
{
  int tmp;
  tmp = *x;
  *x = *y;
  *y = tmp;
}
