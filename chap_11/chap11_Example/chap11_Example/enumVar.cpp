/* enumVar.c */
#include <stdio.h>
#include <stdlib.h>

enum BLOODTYPE {A, B, O, AB} bt1; 

int main(void)
{
  printf("請輸入血型(A:0, B:1, O:2, AB:3) : ");
  scanf("%d", &bt1);
  switch (bt1){
     case A:
          printf("A 型\n");
          break;
     case B:
          printf("B 型\n");
          break;   
     case O:
          printf("O 型\n");
          break;  
     case AB:
          printf("AB 型\n");
          break;                               
  }
  system("pause");
  return 0;
}



