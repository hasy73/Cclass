#include <stdio.h>
#include <stdlib.h>
int main(void)
{
     /*
      依序寫出每一個printf指令所輸出的 x y z 值 
    */
    int x, y=1, z=1;
    
    x = ++y + ++z;
    printf("%d\t%d\t%d\n",x,y,z);     //Ans:4   2   2 
    
    x = y++ + z++;
    printf("%d\t%d\t%d\n",x,y,z);     //Ans:4   3   3   
    
    x = --y + z--;
    printf("%d\t%d\t%d\n",x,y,z);     //Ans:5   2   2   
    
    x=y++ + ++z;
    printf("%d\t%d\t%d\n",x,y,z);     //Ans:5   3   3 
                                                                                                                                                                         
    system("pause");
    return 0;
} 
