/*�|�h�B��p����{��*/
#include <stdio.h>
#include <stdlib.h>
#define add(x,y)      ((x)+(y))
#define minus(x,y)    ((x)-(y))
#define multiply(x,y) ((x)*(y))
#define divide(x,y)   ((double)(x)/(y))
int main(void)
{
    int a,b;
    char choice;
    printf("�п�J�z���p�⦡�G");
    scanf("%d %c %d",&a,&choice,&b);
    switch(choice) {
        case '+': printf("%d + %d = %d\n",a,b,add(a,b)); break;
        case '-': printf("%d - %d = %d\n",a,b,minus(a,b)); break;
        case '*': printf("%d * %d = %d\n",a,b,multiply(a,b)); break;
        case '/': printf("%d / %d = %lf\n",a,b,divide(a,b)); break;
        default: break;
      }
    system("pause"); 
}

