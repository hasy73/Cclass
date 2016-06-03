#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    /*
      依序寫出每一個printf指令所輸出的quack值 
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
                          
    quack %= 5; //%相除取餘數 
    printf("%d\n",quack); //Ans:  1
                            
                                             
    system("pause");
    return 0;
} 
