#include <stdio.h>
#include <stdlib.h>

int main(void){
    int *start;
    int *p;
    int i;
    int size;
    
    printf("請輸入資料筆數: ");
    scanf("%d", &size);
    //Step 1:　呼叫 malloc,要求配置 size 個整數並將傳回值指定給p 
    p=(int*)malloc(size*sizeof(int));
    //Step 2 : 保留起始位址    
    start=p;
    //Step 3: 輸出所配置的記憶體內容 
    for (i=0; i< size; i++)
    {
        printf("%d\n",*p);
        p++;  //指標後移 
    }    
    //Step 4: 讓p 重新指向記憶體的開頭 
    p=start;
    //step 5: 指定0, 1, 2, ...給所配置的記憶體 
    for (i=0;i<size;i++){
        *p=i;
        p++;
        }
    //setp 6: 讓p 重新指向記憶體的開頭
    p=start;
    //Step 7 :重新輸出所配置記憶體的內容 
    for (i=0;i<size;i++){
        printf("%d\n",*p);
        p++;
        }
    //Step 8: 釋放記憶體 
    system("pause");
}       
