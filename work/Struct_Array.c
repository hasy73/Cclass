/* Struct_Array.c */
#include <stdio.h>
#include <stdlib.h>
struct animal{
     char name[10];
     int  sex;      
};       
int main(void)
{
    struct animal dog[5];
    int i;
    //Part 1: �w�q���c�}�C(�ά����ܼơ^, �}�C�W�٬�dog, ���׬�5 
    
    
    for (i=0;i<5;i++){
        printf("��%d�������ʧO��(��:1/��:2):\n",i+1);
        fflush(stdin);
        scanf("%d",&dog[i].sex);
        printf("��%d�������m�W��:\n",i+1);
        scanf("%s",&dog[i].name);
        }
    //Part 2: �H?��Ū�� 5 �������ʧO�Ωm�W��� 
    
    
    printf("\n�w��J���ʪ��M��G\n"); 
    printf("--------------------�G\n"); 
    printf("�ʧO(0:���A1:��)\t�W�r\n");
    for (i=0;i<5;i++){
        printf("\t%d\t\t%s\n",dog[i].sex,dog[i].name);
        }
    //Part 3: �H?���X�e����Ū�������
   
   
    system("pause");     
}
