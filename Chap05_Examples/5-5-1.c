/* 5-5-1.c*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int i;
    for(i=10;i<100;i++) {
      if(!(i%7))
        break;
      printf("%d ",i);
    }
    system("pause");  
    return 0;
}
