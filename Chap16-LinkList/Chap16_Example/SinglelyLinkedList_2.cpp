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
    NODE *p, *q, *tmp;
    int sum=0;      
    /* Step 1: 建立第一個節點 */
    tmp=(NODE *)malloc(sizeof(NODE));
    tmp->C_Score=70;
    tmp->next=NULL;
    p=tmp;
    q=tmp;
    /* Step 2: 建立第二個節點 */ 
    tmp=(NODE *)malloc(sizeof(NODE));
    tmp->C_Score=80;
    tmp->next=NULL;
    q->next=tmp;
    q=tmp;    
    /* Step 3: 建立第三個節點 */ 
    tmp=(NODE *)malloc(sizeof(NODE));
    tmp->C_Score=90;
    tmp->next=NULL;
    q->next=tmp;
    q=tmp;    
    /* Step 4: 建立第四個節點 */ 
    tmp=(NODE *)malloc(sizeof(NODE));
    tmp->C_Score=100;
    tmp->next=NULL;
    q->next=tmp;
    q=tmp; 
    
    printf("C語言成績:\n");
    printf("============\n");
    /* Step 5: 輸出串列內容 */
    tmp=p;
    while(tmp!=NULL){
                     printf("\t%d\n",tmp->C_Score);
                     sum=sum+tmp->C_Score;
                     tmp=tmp->next;
                     };
    printf("============\n");
    /* Step 6: 輸出平均 */
    printf("\t%.2f\n",(float)sum/4);
    
    system("pause");    
} 
