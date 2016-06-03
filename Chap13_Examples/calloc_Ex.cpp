/* calloc_Ex.cpp */
#include <stdio.h>
#include <stdlib.h>

int main(void){
    int *p1;
    int *p2;
    int i;
    int size;
    
    p1=(int*)malloc(sizeof(int)*5);
    printf("利用malloc所配置的記憶體內容\n");
    for (i=0; i< 5; i++)
    {
        printf("%d\n",*p1);
        p1++;  //指標後移 
    }
    p2=(int*)calloc(5, sizeof(int));
    printf("\n利用malloc所配置的記憶體內容\n");
    for (i=0; i< 5; i++)
    {
        printf("%d\n",*p2);
        p2++;  //指標後移 
    }
    system("pause");   
}    
