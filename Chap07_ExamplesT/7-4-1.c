/*�ǻ��}�C�i�禡*/
#include <stdio.h>
#include<stdlib.h>
void func(int [ ]);                 //�ŧi�禡func���@�Ӥ޼ƬO�}�C
int main(void)
{
    int a[2]={3,6};
printf("a[0]=%d a[1]=%d\n",a[0],a[1]);  //�L�X�}�C���e
    func(a);                     //�ΰ}�Ca�I�s�禡func
    printf("a[0]=%d a[1]=%d\n",a[0],a[1]);
    system("pause");     //�ϵ{���Ȱ��b����e�����ڭ̬ݨ쵲�G
}
void func(int a[ ])                 //�洫a[0]�Pa[1]����
{
   int temp;
   temp = a[0];
   a[0] = a[1];
   a[1] = temp;
}
