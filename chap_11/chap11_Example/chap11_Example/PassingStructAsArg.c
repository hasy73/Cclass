/* PassingStructAsArg.c */
#include <stdio.h>
#include <stdlib.h>
struct animal{
     char name[10];
     int  sex;      
};       
int cmp(struct animal , struct animal);

int main(void)
{
    struct animal dog, cat;
    printf("�п�J�����ʧO�G(0:���A1:��)"); 
    fflush(stdin);
    scanf("%d", &dog.sex);    
    printf("�п�J�ߪ��ʧO�G(0:���A1:��)"); 
    fflush(stdin);
    scanf("%d", &cat.sex);    
    printf("Return Value: %d\n", cmp(dog,cat));
    
    system("pause");     
}
int cmp(struct animal d, struct animal c)
{
    return d.sex==c.sex;   //�Ǧ^0(���������߮�)��1(�������߮�) 
}   
