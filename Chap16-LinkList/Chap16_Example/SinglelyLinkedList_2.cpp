/* SinglelyLinkedList_2.cpp */ 
#include <stdio.h>
#include <stdlib.h>
struct node {
       int C_Score;
       struct node *next;       
}; 
typedef struct node NODE;       
int main(){
    //p���V�쵲��C���}�Y
    //q���V�쵲��C������
    //tmp�Ω���V�s���ͪ��`�I 
    NODE *p, *q, *tmp;
    int sum=0;      
    /* Step 1: �إ߲Ĥ@�Ӹ`�I */
    tmp=(NODE *)malloc(sizeof(NODE));
    tmp->C_Score=70;
    tmp->next=NULL;
    p=tmp;
    q=tmp;
    /* Step 2: �إ߲ĤG�Ӹ`�I */ 
    tmp=(NODE *)malloc(sizeof(NODE));
    tmp->C_Score=80;
    tmp->next=NULL;
    q->next=tmp;
    q=tmp;    
    /* Step 3: �إ߲ĤT�Ӹ`�I */ 
    tmp=(NODE *)malloc(sizeof(NODE));
    tmp->C_Score=90;
    tmp->next=NULL;
    q->next=tmp;
    q=tmp;    
    /* Step 4: �إ߲ĥ|�Ӹ`�I */ 
    tmp=(NODE *)malloc(sizeof(NODE));
    tmp->C_Score=100;
    tmp->next=NULL;
    q->next=tmp;
    q=tmp; 
    
    printf("C�y�����Z:\n");
    printf("============\n");
    /* Step 5: ��X��C���e */
    tmp=p;
    while(tmp!=NULL){
                     printf("\t%d\n",tmp->C_Score);
                     sum=sum+tmp->C_Score;
                     tmp=tmp->next;
                     };
    printf("============\n");
    /* Step 6: ��X���� */
    printf("\t%.2f\n",(float)sum/4);
    
    system("pause");    
} 
