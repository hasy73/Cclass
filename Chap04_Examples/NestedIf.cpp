/* NestedIf.c */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int a, b, c;
    printf("�п�J�T�Ӿ��: ");
    scanf("%d %d %d",&a,&b,&c);
    /* �m���D: 
       �Ч�X�ÿ�Xa, b, c�����̤j��       
       �ХH�_��if�g�X�P�_��       
    */
    if (a>b) 
       {
       if (a>c) 
          {printf("%d �̤j",a);} 
       else 
          {printf("%d �̤j",c);}
       } 
    else 
       {
       if (b>c) 
          {printf("%d �̤j",b);}
       else 
          {printf("%d �̤j",c);}
       } 
    system("pause");     
    return 0;
} 

