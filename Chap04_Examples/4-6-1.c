/* 4-6-1.c */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int a,b;
    char oper;
    printf("�п�J + - * / ���G���p�⦡�G ");
    scanf("%d %c %d",&a ,&oper, &b);
    
    switch(oper)
    {
      case '+':
        printf("�p�⵲�G��%d\n", a+b);
        break;
      case '-':            
        printf("�p�⵲�G��%d\n", a-b);
        break;
      case '*':                   
        printf("�p�⵲�G��%d\n", a*b);
        break;
      case '/':                    
        printf("�p�⵲�G��%f\n", (float)a/b);
        break;
      default:                                  
        printf("��J���|�h�B��榡���~\n");
    }
    system("pause");     
    return 0;
} 
