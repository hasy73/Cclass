/*if_else_Exercise_1.cpp */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int a, b;
    printf("�п�J��Ӿ��: ");
    scanf("%d %d", &a, &b);
    /*
        �Эץ��{���A���{���i�H���T����H�U�\��G
        �q��LŪ����Ӿ�ơA�H���j���Ƭ��Q��ƩγQ����
        �p��ο�X�G
        1. ��Ƭ۴���G 
        2. �۰��ұo����
        3. �۰��ұo���l��
    */
    
    if (a > b)
       printf("%d-%d = %d\n", a, b, a-b);  
       printf("%d/%d = %d\n", a, b, a/b);    
       printf("%d%%%d = %d\n", a, b, a%b);
          
    else  
       printf("%d-%d = %d\n", b, a, b-a);  
       printf("%d/%d = %d\n", b, a, b/a);    
       printf("%d%%%d = %d\n", b, a, b%a);   
                 
       
    
    system("pause");     
    return 0;
} 
