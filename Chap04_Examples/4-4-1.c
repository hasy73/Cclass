/* 4-4-1.c */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int score;
    printf("�п�J�z�����Z�G");
    scanf("%d",&score);
    
    if(score >= 90)                          
      printf("�z���ҵ�\n");
    else if(score >= 80)                      
      printf("�z���A��\n");
    else if(score >= 70)                      
      printf("�z������\n");
    else if(score >= 60)                      
       printf("�z���B��\n");
    else                                
       printf("�z������\n");
       
    system("pause");     
    return 0;
} 

