/* StructAsRetVal.c */
#include <stdio.h>
#include <stdlib.h>
struct animal{
     char name[10];
     int  sex;      
};
struct animal readAnimalData();
void printAnimalData(struct animal, struct animal);
int main(void)
{
    struct animal dog, cat;
    printf("\nŪ���������ʧO�ΦW�r\n");
    dog=readAnimalData();
    printf("\nŪ���߫}���ʧO�ΦW�r\n");
    cat=readAnimalData();
    printf("\n�w��J���ʪ��M��G\n"); 
    printf("--------------------�G\n"); 
    printf("�ʧO(0:���A1:��)\t�W�r\n");
    printAnimalData(dog, cat); 
    system("pause");     
}
struct animal readAnimalData(){
       struct animal d;
       printf("�п�J�ʧO�G(0:���A1:��): "); 
       fflush(stdin);
       scanf("%d", &d.sex);    
       printf("�п�J�W�r�G "); 
       fflush(stdin);
       gets(d.name);    
       return d;
}       
void printAnimalData(struct animal d, struct animal c)
{
     printf("\t%d\t\t%s\n", d.sex, d.name);
     printf("\t%d\t\t%s\n", c.sex, c.name);
}     
