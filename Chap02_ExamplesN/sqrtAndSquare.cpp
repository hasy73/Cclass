/* �o�O�ϥ�scanf��J���{���d�� */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void)
{
    /*
      �D��: �q��LŪ�J�@�ӥ���ƨÿ�X�Ӽƪ�����ڤΥ���� 
    */
  
    //step 1: �ŧi�ܼ�
    int a;
    //step 2: �q��LŪ���ƭ�
    printf("�п�J�@���D����ڻP����Ȥ���: ");
    scanf("%d",&a);
    //step 3: �p��ÿ�X 
    printf("%d������ڻP����Ȥ��O��:  %f  �M  %d\n",a,sqrt(a),a*a);
    system("pause");
} 

