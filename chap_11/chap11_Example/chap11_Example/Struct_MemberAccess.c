/* Struct_MemberAccess.c */
#include <stdio.h>
#include <stdlib.h>
struct animal{
     char name[10];
     int  sex;      
};       
int main(void)
{
    struct animal dog, cat;
    printf("�п�J�����ʧO�G(0:���A1:��)"); 
    fflush(stdin);
    scanf("%d", &dog.sex);    
    printf("�п�J�ߪ��ʧO�G(0:���A1:��)"); 
    fflush(stdin);
    scanf("%d", &cat.sex);    
    printf("�п�J�����W�r�G");
    fflush(stdin);
    gets(dog.name);
    printf("�п�J�ߪ��W�r�G");
    fflush(stdin); 
    gets(cat.name);
    
    printf("\n�w��J���ʪ��M��G\n"); 
    printf("--------------------�G\n"); 
    printf("�ʧO(0:���A1:��)\t�W�r\n");
    
    system("pause");     
}
