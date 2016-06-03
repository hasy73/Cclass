/* 4-6-1.c */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int a,b;
    char oper;
    printf("請輸入 + - * / 之二元計算式： ");
    scanf("%d %c %d",&a ,&oper, &b);
    
    switch(oper)
    {
      case '+':
        printf("計算結果為%d\n", a+b);
        break;
      case '-':            
        printf("計算結果為%d\n", a-b);
        break;
      case '*':                   
        printf("計算結果為%d\n", a*b);
        break;
      case '/':                    
        printf("計算結果為%f\n", (float)a/b);
        break;
      default:                                  
        printf("輸入的四則運算格式有誤\n");
    }
    system("pause");     
    return 0;
} 
