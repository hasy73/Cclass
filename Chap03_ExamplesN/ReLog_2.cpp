#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int a=100, b=200, c=300, d=400;
    
    /* �m���D: a >= 100 || b < 100 && c > 200 || d <= 200 ���B�⵲�G */
    //printf("a >= 100 : %d\n", a>=100);   //a >= 100 : 
    //printf("b < 200 : %d\n", b < 200);   //b < 200 :          
    //printf("c > 200 : %d\n", c > 200);   //c > 200 :
    //printf("d <= 200: %d\n", d <= 200);  //d <= 200 :                   
    //printf("a >= 100 || b < 100 && c > 200 || d <= 200 : %d\n", 
    //          a >= 100 || b < 100 && c > 200 || d <= 200); 
    
    /* �m���D: !a == 0 && b <= 200 ���B�⵲�G */
    //printf("a == 0 : %d\n", a==0);   //a == 0 : 
    //printf("!a == 0 : %d\n", !a==0);   //!a==0 :        
    //printf("b <= 200 : %d\n", b<=200); //b <= 200 :       
    //printf("!a == 0 && b <= 200 : %d\n", !a == 0 && b <= 200); 
    system("pause");     //�ϵ{���Ȱ��b����e���H���˵����G
    return 0;
} 

