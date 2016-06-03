/* 4-3-2.c */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    char rain;
    printf("今天降雨機率大於50%嗎?");
    scanf("%c",&rain);    
    if(rain == 'y' || rain =='Y')           
      printf("你最好要帶傘!\n");
    else    
      printf("可能不會下雨，不必帶傘了!\n");
    system("pause");     
    return 0;
}

