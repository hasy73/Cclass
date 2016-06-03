/* Array_Addr_Val_2.c */
#include <stdio.h>
#include<stdlib.h>
int main(void)
{
    char cname[10]="Kelly";
    int i;
    for(i=0;i<=10;i++){
        printf("cname+%d: %d",i,cname+i);
        printf("\n");
        }
    printf("\n");
    for(i=0;i<=10;i++){
        printf("&cname[%d]: %d",i,&cname[i]);
        printf("\n");
        }
    //Part 1: 以?圈指令輸出 cname這個陣列的元素位址
    //請運用兩種不同的取位址方式
    printf("\n");
    //Part 2: 以?圈指令輸出cname這個陣列的元素值 
    for(i=0;i<=10;i++){
        printf("cname[%d]: %d",i,cname[i]);
        printf("\n");
        }
    system("pause");     
}
