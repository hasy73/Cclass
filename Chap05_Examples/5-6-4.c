/*99���k��*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int i,j;
    for(i=1;i<10;i++) {    //�~�j��A�N�Q���ƨC�����W1
      for(j=1;j<10;j++)    //���j��A�N���ƨC�����W1
        printf("%2d*%2d=%2d",i,j,i*j);  //�p��æL�X99���k����
      printf("\n");  //�L���@�C�ᴫ��
    }
    system("pause");     //�ϵ{���Ȱ��b����e�����ڭ̬ݨ쵲�G
    return 0;
}
