/* calloc_Ex.cpp */
#include <stdio.h>
#include <stdlib.h>

int main(void){
    int *p1;
    int *p2;
    int i;
    int size;
    
    p1=(int*)malloc(sizeof(int)*5);
    printf("�Q��malloc�Ұt�m���O���餺�e\n");
    for (i=0; i< 5; i++)
    {
        printf("%d\n",*p1);
        p1++;  //���ЫᲾ 
    }
    p2=(int*)calloc(5, sizeof(int));
    printf("\n�Q��malloc�Ұt�m���O���餺�e\n");
    for (i=0; i< 5; i++)
    {
        printf("%d\n",*p2);
        p2++;  //���ЫᲾ 
    }
    system("pause");   
}    
