/* 6-2-2.c */
#include <stdio.h>
#include <stdlib.h>
int add(int,int);
int minus(int,int);
int multiply(int,int);
float divide(int,int);
int main(void)
{
    int a,b;
    char choice;
    printf("請輸入您的計算式：");
    scanf("%d %c %d",&a,&choice,&b);
    switch(choice) {
        case '+': 
             printf("%d + %d = %d\n",a,b,add(a,b)); 
             break;
        case '-': 
             printf("%d - %d = %d\n",a,b,minus(a,b)); 
             break;
        case '*': 
             printf("%d * %d = %d\n",a,b,multiply(a,b)); 
             break;
        case '/': 
             printf("%d / %d = %f\n",a,b,divide(a,b)); 
             break;
        default: break;
      }
    system("pause");     
}
int add(int a,int b)
{
  return a+b;
}
int minus(int a,int b)
{
  return a-b;
}
int multiply(int a,int b)
{
  return a*b;
}
float divide(int a,int b)
{
  return (float)a/b;
}
