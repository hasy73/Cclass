/* PassingStructArray.c */
#include <stdio.h>
#include <stdlib.h>
struct animal{
     char name[10];
     int  sex;      
}; 
void readDogData(struct animal[]);
void printDogData(struct animal[]);
int main(void)
{
    //Part 1: 定義結構陣列(及相關變數）, 陣列名稱為dog, 維度為5 
    struct animal dog[5];
        
    //Part 2: 呼叫readDogData函式讀取五隻狗的資料 
    
    
    //Part 3: 呼叫printDogData函式輸出五隻狗的資料
           
    
    system("pause");     
}
