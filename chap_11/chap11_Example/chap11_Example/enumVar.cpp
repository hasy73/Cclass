/* enumVar.c */
#include <stdio.h>
#include <stdlib.h>

enum BLOODTYPE {A, B, O, AB} bt1; 

int main(void)
{
  printf("�п�J�嫬(A:0, B:1, O:2, AB:3) : ");
  scanf("%d", &bt1);
  switch (bt1){
     case A:
          printf("A ��\n");
          break;
     case B:
          printf("B ��\n");
          break;   
     case O:
          printf("O ��\n");
          break;  
     case AB:
          printf("AB ��\n");
          break;                               
  }
  system("pause");
  return 0;
}



