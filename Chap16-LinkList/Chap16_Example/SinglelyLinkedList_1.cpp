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
    NODE *p, *q, *tmp;     
    /* Part 4: 建立第一個節點 */
    tmp=(NODE *)malloc(sizeof(NODE));
    tmp->nodeName='a';
    tmp->next=NULL;
    p=tmp;
    q=tmp;    
    
    /* Part 5: 建立第二個節點 */ 
    tmp=(NODE *)malloc(sizeof(NODE));
    tmp->nodeName='b';
    tmp->next=NULL;
    q->next=tmp;
    q=tmp;
            
    /* Part 6: 建立第三個節點 */ 
    tmp=(NODE *)malloc(sizeof(NODE));
    tmp->nodeName='c';
    tmp->next=NULL;
    q->next=tmp;
    q=tmp;        
    
    printf("鏈結串列中的節點資料:\n");
    tmp=p;
    while (tmp != NULL){
          printf("%c", tmp->nodeName);   
          tmp=tmp->next;
    }         
    system("pause");    
} 
