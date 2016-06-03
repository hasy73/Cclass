#include <stdio.h>
#include <stdlib.h>
int main(void)
{
     /*
      依序寫出每一個printf指令所輸出的 k 值 
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
