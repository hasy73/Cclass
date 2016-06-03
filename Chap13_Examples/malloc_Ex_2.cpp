/*  malloc_Ex_2.cpp */
#include <stdio.h>
#include <stdlib.h>
struct student_dat {	
	char   id[10];
	char   bt[3];  //Blood type
} ;

int main(void){
    struct student_dat *start;
    struct student_dat *p;
    int i;
    int size;
    
    printf("請輸入資料筆數: ");
    scanf("%d", &size);
    //Step 1:　呼叫 malloc,要求配置 size 個student_dat並將傳回值指定給p 
    p=(struct student_dat *)malloc(size*sizeof(struct student_dat));
    //Step 2: 保留起始位址 
    start=p;
    //讀取資料並儲存到結構中     
    for (i=0; i<size; i++)
    {
        printf("請輸入第 %d 位同學的學號: ",i+1);
        fflush(stdin);
        gets(p->id);
        //Step 3: 讀取學號 
        
        printf("請輸入第 %d 位同學的血型: ",i+1);
        fflush(stdin);
        gets(p->bt);
        //Step 4: 讀取血型
        p++;
    }
    //Step 5: 讓p重新指回起始位址   
    p=start;
    
    printf("\n學號\t\t血型\n");
    printf("======================\n");
    //Step 6: 輸出結構內容 
    for (i=0; i<size; i++)
    {
        printf("%s\t%s\n",p->id,p->bt);
        p++;
    
    } 
    //Step 7: 釋放記憶體 
    system("pause");
}       
