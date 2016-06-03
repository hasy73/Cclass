/* realloc_1.cpp */ 
#include <stdio.h>
#include <stdlib.h>

void main(){
     int *p;
     p = (int*) malloc(sizeof(int)*5);
     //...  存取所配置的記憶體空間
     
     //如果 p 所指向的空間要由 5個int 改配置 10個 int
     //寫法一: 先釋放原先配置釋放的空間, 再重新配置 
     free(p);
     p = (int*) malloc(sizeof(int)*10); 
     
     //寫法二: 以realloc重新配置
     p = (int*) realloc(p,sizeof(int)*10);
      
} 
