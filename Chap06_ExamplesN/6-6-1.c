/* main�禡�޼ƪ��d�� */
#include <stdio.h>
#include <stdlib.h>
int main(int argc,char *argv[])
{
  int i;
  printf("argc = %d\n",argc );
  for(i=0;i<argc;i++)
    printf("%s\n",argv[i]);
system("pause");     //�ϵ{���Ȱ��b����e�����ڭ̬ݨ쵲�G
}
