#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int a=100, b=200;
    
    /* �m���D: a>=100 && b<=200 ���B�⵲�G */
    //printf("a >= 100 : %d\n", a>=100);   //a >= 100 : 
    //printf("b <= 200 : %d\n", b<=200);   //b <= 200 :          
    //printf("a>=100 && b<=200 : %d\n", a>=100 && b<=200); 
    
    /* �m���D: a >= 100 && b < 200 ���B�⵲�G */
    //printf("a >= 100 : %d\n", a>=100);   //a >= 100 : 
    //printf("b < 200 : %d\n", b<200);     //b < 200 :          
    //printf("a>=100 && b<200 : %d\n", a>=100 && b<200); 
    system("pause");     //�ϵ{���Ȱ��b����e���H���˵����G
    return 0;
} 

