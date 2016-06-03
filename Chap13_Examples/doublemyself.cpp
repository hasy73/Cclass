/* calloc_Ex.cpp */
#include <stdio.h>
#include <stdlib.h>

int main(void){
    double *p1;
    int *p2;
    int i;
    int size;
    
    printf("請輸入一數: ");
    scanf("%d", &size);
    
    p1=(double*)malloc(sizeof(double)*size);
    printf("利用malloc所配置的記憶體內容\n");
    for (i=0; i< size; i++)
    {
        printf("%d\n",*p1);
        p1++;  //指標後移 
    }
    p2=(int*)calloc(size, sizeof(int));                
    printf("\n利用calloc所配置的記憶體內容\n");
    for (i=0; i< size; i++)
    {
        printf("%d\n",*p2);
        p2++;  //指標後移 
    }
    system("pause");   
}    
