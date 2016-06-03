/* TwoDimArray_2.c */
#include <stdio.h>
#include<stdlib.h>
int main(void)
{
    //學號,Q1~Q4的成績 
    int arr[5][5]={{1,  70,  65, 105, 83},
                   {10, 80,  92, 90,  60},
                   {16, 100, 81, 106, 80},		
                   {11, 60,  90, 100, 65},
	               {39, 60,  91, 100, 68}};
    //Part 1: 輸出成績總表 
    printf("學號\tQ1\tQ2\tQ3\tQ4\n");
    for (int i=0; i<5 ;i++){
        for (int j=0; j<5 ; j++){
            printf("%d\t",arr[i][j]);
        }  
        printf("\n");  
    }    
    
    
    
    //Part 2: 輸出均分   
    printf("學號\t均分\n"); 
    //Step 1: 宣告變數, 用於儲存所累加的分數 
    float total;
    for (int i=0; i<5; i++){
    //step 2: 開始累加前, 變數值要歸0
    total=0 ;
          //step 3: 累加第 i 位同學的成績 
          for (int j=0; j<4; j++){ 
          total=total+arr[i][j+1];
          } 
          //step 4: 輸出學號及均分 
          printf("%d\t%f\n",arr[i][0],total/4);
    }    
    system("pause");     
}
