/* realloc_1.cpp */ 
#include <stdio.h>
#include <stdlib.h>

void main(){
     int *p;
     p = (int*) malloc(sizeof(int)*5);
     //...  �s���Ұt�m���O����Ŷ�
     
     //�p�G p �ҫ��V���Ŷ��n�� 5��int ��t�m 10�� int
     //�g�k�@: ���������t�m���񪺪Ŷ�, �A���s�t�m 
     free(p);
     p = (int*) malloc(sizeof(int)*10); 
     
     //�g�k�G: �Hrealloc���s�t�m
     p = (int*) realloc(p,sizeof(int)*10);
      
} 
