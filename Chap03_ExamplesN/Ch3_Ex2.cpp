#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    /*
      �̧Ǽg�X�C�@��printf���O�ҿ�X��quack�� 
    */
    int quack = 2;
    
    quack += 5;
    printf("%d\n",quack); //Ans: 7
    
    quack *= 5;
    printf("%d\n",quack); //Ans: 35
    
    quack -= 5;
    printf("%d\n",quack); //Ans: 30
                          
    quack /= 5;
    printf("%d\n",quack); //Ans:  6                     
                          
    quack %= 5; //%�۰����l�� 
    printf("%d\n",quack); //Ans:  1
                            
                                             
    system("pause");
    return 0;
} 
