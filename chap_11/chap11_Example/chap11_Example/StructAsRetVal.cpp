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
    printf("\n讀取狗狗的性別及名字\n");
    dog=readAnimalData();
    printf("\n讀取貓咪的性別及名字\n");
    cat=readAnimalData();
    printf("\n已輸入的動物清單：\n"); 
    printf("--------------------：\n"); 
    printf("性別(0:母，1:公)\t名字\n");
    printAnimalData(dog, cat); 
    system("pause");     
}
struct animal readAnimalData(){
       struct animal d;
       printf("請輸入性別：(0:母，1:公): "); 
       fflush(stdin);
       scanf("%d", &d.sex);    
       printf("請輸入名字： "); 
       fflush(stdin);
       gets(d.name);    
       return d;
}       
void printAnimalData(struct animal d, struct animal c)
{
     printf("\t%d\t\t%s\n", d.sex, d.name);
     printf("\t%d\t\t%s\n", c.sex, c.name);
}     
