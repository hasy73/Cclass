/* SinglelyLinkedList_2.cpp */ 
#include <stdio.h>
#include <stdlib.h>
struct node {
       int C_Score;
       struct node *next;       
}; 
typedef struct node NODE;       
int main(){
    //p指向鏈結串列的開頭
    //q指向鏈結串列的結尾
    //tmp用於指向新產生的節點 
    NODE *p, *q, *tmp, *newNode, *newNode2;
    int sum=0;      
    /* 建立第一個節點 */
    tmp = (NODE *)malloc(sizeof(NODE));
    tmp->C_Score=70;
    tmp->next=NULL;
    p=tmp; 
    q=tmp;
    
    /* 建立第二個節點 */ 
    tmp=(NODE *)malloc(sizeof(NODE));
    tmp->C_Score=80;
    tmp->next=NULL;
    q->next=tmp;
    q=tmp;
    
    /* 建立第三個節點 */ 
    tmp=(NODE *)malloc(sizeof(NODE));
    tmp->C_Score=90;
    tmp->next=NULL;
    q->next=tmp;
    q=tmp;
    
    /* 建立第四個節點 */ 
    tmp=(NODE *)malloc(sizeof(NODE));
    tmp->C_Score=100;
    tmp->next=NULL;
    q->next=tmp;
    q=tmp;
    
    printf("C語言成績:\n");
    printf("============\n");
    tmp=p;
    while (tmp != NULL){
          printf("\t%d\n", tmp->C_Score); 
          sum+=tmp->C_Score;  
          tmp=tmp->next;
    }
    printf("============\n");
    printf("平均: %.2f\n", sum/4.0);  
    
    //建立所要新增的節點 
    newNode=(NODE *)malloc(sizeof(NODE));
    newNode->C_Score=95; 
    newNode->next=NULL;
    //找到要新增的位置    
    tmp=p;
    while (tmp->C_Score != 90) {
        tmp=tmp->next;
    }
    //將找到節點原先指向的節點改由新加入節點指向 
    newNode->next=tmp->next;     
    //讓找到的這個節點指向新加入節點 
    tmp->next=newNode; 
    
    
    
    printf("\n新增節點後的C語言成績:\n");
    printf("============\n");
    tmp=p;
    sum = 0;
    while (tmp != NULL){
          printf("\t%d\n", tmp->C_Score); 
          sum+=tmp->C_Score;  
          tmp=tmp->next;
    }
    printf("============\n");
    printf("平均: %.2f\n", sum/5.0);  
    
     //建立所要新增的節點2
    newNode2=(NODE *)malloc(sizeof(NODE));
    newNode2->C_Score=85; 
    newNode2->next=NULL;
    //找到要新增的位置2  
    tmp=p;
    while (tmp->C_Score != 80) {
        tmp=tmp->next;
    }
    //將找到節點原先指向的節點改由新加入節點指向
    newNode2->next=tmp->next;     
    //讓找到的這個節點指向新加入節點2
    tmp->next=newNode2; 
    
    
    printf("\n新增節點後的C語言成績2:\n");
    printf("============\n");
    tmp=p;
    sum = 0;
    while (tmp != NULL){
          printf("\t%d\n", tmp->C_Score); 
          sum+=tmp->C_Score;  
          tmp=tmp->next;
    }
    printf("============\n");
    printf("平均: %.2f\n", sum/6.0);  
    
    
    system("pause");    
} 
