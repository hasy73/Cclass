/* SinglelyLinkedList_1.cpp */ 
#include <stdio.h>
#include <stdlib.h>
struct node {
       char nodeName;
       struct node *next;       
}; 
typedef struct node NODE;
int main(){
    //p���V�쵲��C���}�Y
    //q���V�쵲��C������
    //tmp�Ω���V�s���ͪ��`�I 
    NODE *p, *q, *tmp;     
    /* Part 4: �إ߲Ĥ@�Ӹ`�I */
    tmp=(NODE *)malloc(sizeof(NODE));
    tmp->nodeName='a';
    tmp->next=NULL;
    p=tmp;
    q=tmp;    
    
    /* Part 5: �إ߲ĤG�Ӹ`�I */ 
    tmp=(NODE *)malloc(sizeof(NODE));
    tmp->nodeName='b';
    tmp->next=NULL;
    q->next=tmp;
    q=tmp;
            
    /* Part 6: �إ߲ĤT�Ӹ`�I */ 
    tmp=(NODE *)malloc(sizeof(NODE));
    tmp->nodeName='c';
    tmp->next=NULL;
    q->next=tmp;
    q=tmp;        
    
    printf("�쵲��C�����`�I���:\n");
    tmp=p;
    while (tmp != NULL){
          printf("%c", tmp->nodeName);   
          tmp=tmp->next;
    }         
    system("pause");    
} 
