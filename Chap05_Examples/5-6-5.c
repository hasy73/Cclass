/*�p���ƪ��̤j���]�Ƥγ̤p������*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int a,b,i,M=0,m=0;
    printf("�п�J��ӥ���ơG");
    scanf("%d %d",&a,&b);          /*��J����*/
    for(i=1;i<a && i<b;i++) {         
      if(!(a%i) && !(b%i))        /*�Ya,b�i�Qi�㰣�Ai��a,b�����]��*/
        M = i;
    }
    printf("%d �M %d ���̤j���]�� %d\n",a,b,M);
    i = a<b ? a:b;
    while(1) { 
      if(!(i%a) && !(i%b)) {       /*�Yi�i�㰣a,b�Ai��a,b������*/
        m = i;
        break;                   /*�Ĥ@�ӥX�{���N�O�̤p������*/
      }
      i++;
    }
    printf("%d �M %d ���̤p������ %d\n",a,b,m);
    system("pause");     //�ϵ{���Ȱ��b����e�����ڭ̬ݨ쵲�G
    return 0;
}
