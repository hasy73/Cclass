/* static���d�� */
#include <stdio.h>
#include <stdlib.h>
int f(void);               //�ŧi�ۭq�禡f
int main(void)
{
    int i;
    for(i=1;i<5;i++)
      printf("x=%d\n",f( ));
    system("pause");     //�ϵ{���Ȱ��b����e�����ڭ̬ݨ쵲�G
}
int f(void)
{
    static int x=0;    //�[�Wstatic�׹��r
    return x++;
}
