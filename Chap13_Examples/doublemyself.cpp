/* calloc_Ex.cpp */
#include <stdio.h>
#include <stdlib.h>

int main(void){
    double *p1;
    int *p2;
    int i;
    int size;
    
    printf("�п�J�@��: ");
    scanf("%d", &size);
    
    p1=(double*)malloc(sizeof(double)*size);
    printf("�Q��malloc�Ұt�m���O���餺�e\n");
    for (i=0; i< size; i++)
    {
        printf("%d\n",*p1);
        p1++;  //���ЫᲾ 
    }
    p2=(int*)calloc(size, sizeof(int));                
    printf("\n�Q��calloc�Ұt�m���O���餺�e\n");
    for (i=0; i< size; i++)
    {
        printf("%d\n",*p2);
        p2++;  //���ЫᲾ 
    }
    system("pause");   
}    
