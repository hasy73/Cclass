/*�ܼƥ洫�{��*/
#include <stdio.h>
#include <stdlib.h>
#define SWAP(x,y,t) (t = x, x = y, y = t) //�w�q����
int main(void)
{
    int x=3,y=4,temp;
    SWAP(x,y,temp);   //�I�s����
    printf("x = %d y = %d\n",x,y);
    system("pause");  
}
