//�ʪ��p�O�{�� 
#include <stdio.h>  //���J�зǿ�X�J���Y��  
#include <stdlib.h>
int main( )
{
  int m,a1,a2,a3,total;  //�ŧi5�Ӿ���ܼ�
  scanf("%d%d%d%d",&m,&a1,&a2,&a3);  //��J������Ƥΰӫ~�Ӽ�
  total=a1*199+a2*23+a3*85;  //�p���ʶR���ӫ~�`��
  if(total<=m)   //�P�_�O�_������������
    printf("�ѤU%d��\n",m-total);  //�һݿ�<=�֦���
  else 
    printf("�ٮt%d��\n",total-m);  //�һݿ� > �֦���
  system("pause");  //�ϵ{���Ȱ��b����e�����ڭ̬ݨ쵲�G
  return 0;
} 

