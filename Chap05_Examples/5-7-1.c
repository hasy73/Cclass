/*�����ƴM��{��*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int i,j,check=0;
    for(i=1;i<10000;i++) {
      check =0;
      for(j=1;j<i;j++) 
        if(!(i%j)) check = check +j;
      if(check == i) 
        printf("%d �O������\n",i);
    }
    system("pause");     //�ϵ{���Ȱ��b����e�����ڭ̬ݨ쵲�G
    return 0; 
}
