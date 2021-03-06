/* SinglelyLinkedList_1.cpp */ 
#include <stdio.h>
#include <stdlib.h>
struct node {
       char nodeName;
       struct node *next;       
}; 
typedef struct node NODE;       
int main(){
    //p指向鏈結串列的開頭
    //q指向鏈結串列的結尾
    //tmp用於指向新產生的節點 
    NODE *p, *q, *tmp, *newNode;      
    /* 建立第一個節點 */
    tmp = (NODE *)malloc(sizeof(NODE));
    tmp->nodeName='a';
    tmp->next=NULL;
    p=tmp; 
    q=tmp;
    
    /* 建立第二個節點 */ 
    tmp=(NODE *)malloc(sizeof(NODE));
    tmp->nodeName='b';
    tmp->next=NULL;
    q->next=tmp;
    q=tmp;
    
    /* 建立第三個節點 */ 
    tmp=(NODE *)malloc(sizeof(NODE));
    tmp->nodeName='c';
    tmp->next=NULL;
    q->next=tmp;
    q=tmp;
    
    printf("鏈結串列中的節點資料:\n");
    tmp=p;
    while (tmp != NULL){
          printf("%c\n", tmp->nodeName);   
          tmp=tmp->next;
    } 
    //建立所要新增的節點 
    newNode=(NODE *)malloc(sizeof(NODE));
    newNode->nodeName='d';
    newNode->next=NULL;
    //找到要新增的位置    
    tmp=p;
    while (tmp->nodeName != 'b') {
        tmp=tmp->next;
    } 
    newNode->next=tmp->next;
    tmp->next=newNode;   
    printf("\n新增節點後鏈結串列中的節點資料:\n");
    tmp=p;
    while (tmp != NULL){
          printf("%c\n", tmp->nodeName);   
          tmp=tmp->next;
    }              
    system("pause");    
} 
