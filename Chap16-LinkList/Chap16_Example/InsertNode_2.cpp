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
    NODE *p, *q, *tmp, *newNode, *newNode2;
    int sum=0;      
    /* �إ߲Ĥ@�Ӹ`�I */
    tmp = (NODE *)malloc(sizeof(NODE));
    tmp->C_Score=70;
    tmp->next=NULL;
    p=tmp; 
    q=tmp;
    
    /* �إ߲ĤG�Ӹ`�I */ 
    tmp=(NODE *)malloc(sizeof(NODE));
    tmp->C_Score=80;
    tmp->next=NULL;
    q->next=tmp;
    q=tmp;
    
    /* �إ߲ĤT�Ӹ`�I */ 
    tmp=(NODE *)malloc(sizeof(NODE));
    tmp->C_Score=90;
    tmp->next=NULL;
    q->next=tmp;
    q=tmp;
    
    /* �إ߲ĥ|�Ӹ`�I */ 
    tmp=(NODE *)malloc(sizeof(NODE));
    tmp->C_Score=100;
    tmp->next=NULL;
    q->next=tmp;
    q=tmp;
    
    printf("C�y�����Z:\n");
    printf("============\n");
    tmp=p;
    while (tmp != NULL){
          printf("\t%d\n", tmp->C_Score); 
          sum+=tmp->C_Score;  
          tmp=tmp->next;
    }
    printf("============\n");
    printf("����: %.2f\n", sum/4.0);  
    
    //�إߩҭn�s�W���`�I 
    newNode=(NODE *)malloc(sizeof(NODE));
    newNode->C_Score=95; 
    newNode->next=NULL;
    //���n�s�W����m    
    tmp=p;
    while (tmp->C_Score != 90) {
        tmp=tmp->next;
    }
    //�N���`�I������V���`�I��ѷs�[�J�`�I���V 
    newNode->next=tmp->next;     
    //����쪺�o�Ӹ`�I���V�s�[�J�`�I 
    tmp->next=newNode; 
    
    
    
    printf("\n�s�W�`�I�᪺C�y�����Z:\n");
    printf("============\n");
    tmp=p;
    sum = 0;
    while (tmp != NULL){
          printf("\t%d\n", tmp->C_Score); 
          sum+=tmp->C_Score;  
          tmp=tmp->next;
    }
    printf("============\n");
    printf("����: %.2f\n", sum/5.0);  
    
     //�إߩҭn�s�W���`�I2
    newNode2=(NODE *)malloc(sizeof(NODE));
    newNode2->C_Score=85; 
    newNode2->next=NULL;
    //���n�s�W����m2  
    tmp=p;
    while (tmp->C_Score != 80) {
        tmp=tmp->next;
    }
    //�N���`�I������V���`�I��ѷs�[�J�`�I���V
    newNode2->next=tmp->next;     
    //����쪺�o�Ӹ`�I���V�s�[�J�`�I2
    tmp->next=newNode2; 
    
    
    printf("\n�s�W�`�I�᪺C�y�����Z2:\n");
    printf("============\n");
    tmp=p;
    sum = 0;
    while (tmp != NULL){
          printf("\t%d\n", tmp->C_Score); 
          sum+=tmp->C_Score;  
          tmp=tmp->next;
    }
    printf("============\n");
    printf("����: %.2f\n", sum/6.0);  
    
    
    system("pause");    
} 
