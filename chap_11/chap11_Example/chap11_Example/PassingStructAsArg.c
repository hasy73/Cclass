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
    printf("請輸入狗的性別：(0:母，1:公)"); 
    fflush(stdin);
    scanf("%d", &dog.sex);    
    printf("請輸入貓的性別：(0:母，1:公)"); 
    fflush(stdin);
    scanf("%d", &cat.sex);    
    printf("Return Value: %d\n", cmp(dog,cat));
    
    system("pause");     
}
int cmp(struct animal d, struct animal c)
{
    return d.sex==c.sex;   //傳回0(等式不成立時)或1(等式成立時) 
}   
