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
    printf("請輸入狗的性別：(0:母，1:公)"); 
    fflush(stdin);
    scanf("%d", &dog.sex);    
    printf("請輸入貓的性別：(0:母，1:公)"); 
    fflush(stdin);
    scanf("%d", &cat.sex);    
    printf("請輸入狗的名字：");
    fflush(stdin);
    gets(dog.name);
    printf("請輸入貓的名字：");
    fflush(stdin); 
    gets(cat.name);
    
    printf("\n已輸入的動物清單：\n"); 
    printf("--------------------：\n"); 
    printf("性別(0:母，1:公)\t名字\n");
    
    system("pause");     
}
