/* register �d�� */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    register int i;         //�ŧiregister�ܼ�i
    for(i=0;i<10000;i++)
      printf("%d ",i);
    system("pause");     //�ϵ{���Ȱ��b����e�����ڭ̬ݨ쵲�G
}
