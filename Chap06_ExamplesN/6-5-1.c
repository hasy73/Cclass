/* n!���p�� - recursion */
#include <stdio.h>       //���j���覡
#include <stdlib.h>
int factorial(int);         //�ŧi�ۭq�禡f
int main(void)
{
    int n;
    printf("Input n:");
    scanf("%d",&n);
    printf("%d! = %d",n,factorial(n));
system("pause");     
}
int factorial(int n)
{
  if(n==1)
    return 1;
  return n*factorial(n-1);   //����ԭz�|�A�I�sfactorial�禡�@��
}
