#include <stdio.h>
#include <stdlib.h>
int main(void)
{
     /*
      �̧Ǽg�X�C�@��printf���O�ҿ�X�� k �� 
    */
    int k;
    
    k = 6+2*5-9;
    printf("%d\n",k); //Ans: 7 
    
    k = -6+88%5-2*3;
    printf("%d\n",k); //Ans: -9 
                      
    k = -(6+8)%5-2*3;
    printf("%d\n",k); //Ans: -10 
                                                                                                                                     
    system("pause");
    return 0;
} 
