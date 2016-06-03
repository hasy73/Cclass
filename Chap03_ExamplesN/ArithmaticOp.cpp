#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int a,b,c,d,e,f;    
    a = 10;
    b = a+4;
    c = a-4;
    d = a*4;
    e = a/4;
    f = a%4;
    
    printf("a = %d\nb = %d\nc = %d\nd = %d\ne = %d\nf = %d\n",
           a,b,c,d,e,f);
    system("pause");
    return 0;
}
