/*  malloc_Ex_2.cpp */
#include <stdio.h>
#include <stdlib.h>
struct student_dat {	
	char   id[10];
	char   bt[3];  //Blood type
} ;

int main(void){
    struct student_dat *start;
    struct student_dat *p;
    int i;
    int size;
    
    printf("�п�J��Ƶ���: ");
    scanf("%d", &size);
    //Step 1:�@�I�s malloc,�n�D�t�m size ��student_dat�ñN�Ǧ^�ȫ��w��p 
    p=(struct student_dat *)malloc(size*sizeof(struct student_dat));
    //Step 2: �O�d�_�l��} 
    start=p;
    //Ū����ƨ��x�s�쵲�c��     
    for (i=0; i<size; i++)
    {
        printf("�п�J�� %d ��P�Ǫ��Ǹ�: ",i+1);
        fflush(stdin);
        gets(p->id);
        //Step 3: Ū���Ǹ� 
        
        printf("�п�J�� %d ��P�Ǫ��嫬: ",i+1);
        fflush(stdin);
        gets(p->bt);
        //Step 4: Ū���嫬
        p++;
    }
    //Step 5: ��p���s���^�_�l��}   
    p=start;
    
    printf("\n�Ǹ�\t\t�嫬\n");
    printf("======================\n");
    //Step 6: ��X���c���e 
    for (i=0; i<size; i++)
    {
        printf("%s\t%s\n",p->id,p->bt);
        p++;
    
    } 
    //Step 7: ����O���� 
    system("pause");
}       
