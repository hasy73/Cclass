/* 根號程式 */
#include <stdio.h>
#include <stdlib.h>
int SQRT(int);
int main(void)
{
  int n;
  scanf("%d",&n);
  printf("%d",SQRT(n));  
  system("pause");
  return 0;
}
int SQRT(int n)
{
  int i;
  if(n < 1) return -1;      /* error input */
  for(i=1;i<n;i++)
    if(i*i>n) break;        /* i 已經超過 n^1/2 */
  return (i*i - n) < ((i-1)*(i-1) - n) ? i : i-1 ;     
}

