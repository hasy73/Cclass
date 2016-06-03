/* realloc_2.cpp */
#include <stdio.h>
#include <stdlib.h>

void main(){
     int *p;
     p = (int*) malloc(sizeof(int)*5);
     //...  
    
     //Line 10: 重新配置 p 所指向的記憶體空間 
     p = (int*) realloc(p,sizeof(int)*10);
     //...
     
     free(p);   
}    
