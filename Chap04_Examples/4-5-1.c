/*�|�~�P�_�{�� */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int year;
    scanf("%d",&year);
    if(!(year%4)) {                      /*�i�Q4�㰣*/
      if(!(year%100) && year%400)       /*�Q4�M100���㰣�A�����Q400�㰣*/
        printf("%d �~�����|�~\n",year);   
      else 
        printf("%d �~���|�~\n",year);   /*�Q4�M400���㰣�A�����Q100�㰣*/
    } 
    else 
      printf("%d �~�����|�~\n",year);  /*�L�k�Q4�㰣*/
    system("pause");     //�ϵ{���Ȱ��b����e�����ڭ̬ݨ쵲�G
    return 0;
} 

