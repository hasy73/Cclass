#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    float i ; 
    printf("請輸入欲轉換英哩(mile)之值:") ;  
    scanf(" %f" ,&i ) ; 
    printf("%f英哩等於%f公里\n",i,i*1.6) ;       
                                                                                                                                           
    system("pause");
    return 0;
} 
