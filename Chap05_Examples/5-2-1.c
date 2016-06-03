/*1+3+5+...+99²Ö¥[µ{¦¡*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int i=1,ans=0;
    
    while(i<=99) {
      ans = ans + i;
      i= i+2;
    }
    printf("1+3+5+¡K+99 = %d\n",ans);
    system("pause");    
    return 0;
}
