/*�L�X�϶����Ҧ�3������*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int a,b,i;
    scanf("%d %d",&a,&b);  
    for(i=a;i<=b;i++)
    {
      if (i%3!=0)  
        continue;
      printf("%d ",i);    
    }
    system("pause");  
    return 0;
}
