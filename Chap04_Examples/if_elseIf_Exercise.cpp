/* if_elseIf_Exercise.c */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int a,b;
    char oper;
    printf("�п�J + - * / ���G���p�⦡�G ");
    scanf("%d %c %d",&a ,&oper, &b);
    /* �Hif ...else if ... else��gLine 11 ~Line 30���{���\�� */
    switch(oper)
    {
      case '+':
        printf("%d + %d = %d\n", a,b,a+b);
        break;
      case '-':            
        printf("%d - %d = %d\n", a,b,a-b);
        break;
      case '*':                   
        printf("%d * %d = %d\n", a,b,a*b);
        break;
      case '/':                    
        printf("%d / %d = %f\n", a,b,(float)a/b);
        break;
      case '%':                   
        printf("%d %% %d = %d\n", a,b,a%b);
        break;  
      default:                                  
        printf("��J���|�h�B��榡���~\n");
    }
    system("pause");
    return 0;
} 
