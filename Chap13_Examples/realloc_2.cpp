/* realloc_2.cpp */
#include <stdio.h>
#include <stdlib.h>

void main(){
     int *p;
     p = (int*) malloc(sizeof(int)*5);
     //...  
    
     //Line 10: ���s�t�m p �ҫ��V���O����Ŷ� 
     p = (int*) realloc(p,sizeof(int)*10);
     //...
     
     free(p);   
}    
