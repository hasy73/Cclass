//RelationOp_2
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    //Step 1: �ŧi���int�ܼ� 
    int a, b;
    //Step 2: ��ܴ��ܰT��    
    printf("�п�J��Ӿ��, �H�ťդ��j��Ӿ��: ");
    //Step 3: �q��LŪ����Ӿ�� 
    scanf("%d %d", &a, &b);
    //Step 4: ��X���Y�B�⵲�G 
    printf("a>b : %d\n", a>b);
    printf("a<b : %d\n", a<b);
    printf("a>=b : %d\n", a>=b);
    printf("a<=b : %d\n", a<=b);
    printf("a==b : %d\n", a==b);
    printf("a!=b : %d\n", a!=b);
    system("pause");     
    return 0;
}
