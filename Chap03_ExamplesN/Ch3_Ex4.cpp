#include <stdio.h>
#include <stdlib.h>
int main(void)
{
     /*
      �̧Ǽg�X�C�@��printf���O�ҿ�X��z�� 
    */
    int x;
    float y,z;
    
    y = 6.0;
    x = 5;
    z = y / x;
    printf("%f\n",z); //Ans: 1.200000 
    
    z=(int)3.0 + (int)3.2;
    printf("%f\n",z); //Ans: 6.000000 
    
    y = 6.0;
    x = 5.7;
    z = x + y;
    printf("%f\n",z); //Ans: 11.000000                                                                                                              
    system("pause");
    return 0;
} 
