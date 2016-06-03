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
    //Part 1: 定義結構陣列(及相關變數）, 陣列名稱為dog, 維度為5 
    
    
    for (i=0;i<5;i++){
        printf("第%d隻狗的性別為(公:1/母:2):\n",i+1);
        fflush(stdin);
        scanf("%d",&dog[i].sex);
        printf("第%d隻狗的姓名為:\n",i+1);
        scanf("%s",&dog[i].name);
        }
    //Part 2: 以?圈讀取 5 隻狗的性別及姓名資料 
    
    
    printf("\n已輸入的動物清單：\n"); 
    printf("--------------------：\n"); 
    printf("性別(0:母，1:公)\t名字\n");
    for (i=0;i<5;i++){
        printf("\t%d\t\t%s\n",dog[i].sex,dog[i].name);
        }
    //Part 3: 以?圈輸出前面所讀取的資料
   
   
    system("pause");     
}
