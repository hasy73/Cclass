/* if_elseIf_Exercise.c */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int a,b;
    char oper;
    printf("請輸入 + - * / 之二元計算式： ");
    scanf("%d %c %d",&a ,&oper, &b);
    /* 以if ...else if ... else改寫Line 11 ~Line 30的程式功能 */
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
        printf("輸入的四則運算格式有誤\n");
    }
    system("pause");
    return 0;
} 
