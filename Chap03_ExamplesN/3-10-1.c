#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int chinese,english,math;
    float average;    //�ŧiaverage���B�I���ܼ�
    printf("�п�J���^��ƾǦ��Z�G");
    scanf("%d %d %d",&chinese,&english,&math);  //Ū�J�U�즨�Z
    average = (float)(chinese+english+math)/3;    //�N���ƥ[�`�ᰣ�H3
    printf("�������Ƭ��G%f\n",average);
    system("pause");     //�ϵ{���Ȱ��b����e�����ڭ̬ݨ쵲�G
    return 0;
}
