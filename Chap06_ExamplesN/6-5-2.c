#include <stdio.h>    //�D���j���覡
#include <stdlib.h>
int factorial(int);               //�ŧi�ۭq�禡f
int main(void)
{
    int n;
    printf("Input n:");
    scanf("%d",&n);
    printf("%d! = %d",n,factorial(n));
system("pause");     //�ϵ{���Ȱ��b����e�����ڭ̬ݨ쵲�G
}
int factorial(int n)
{
  int i,fac=1;
  for(i=1;i<=n;i++)
    fac = fac * i;      //�D���j�覡�Dn!�p��{��
  return fac;
}
