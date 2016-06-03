#include <stdio.h>
#include <stdlib.h>
int main(void)
{
     /*
      依序寫出每一個printf指令所輸出的x,y值 
    */
    int x, y=0;
    
    x=(2+3)*6;
    printf("%d\t%d\n",x,y); //Ans: 30      0 
    
    x=(12+6)/2*3;
    printf("%d\t%d\n",x,y); //Ans: 27      0 
               
    y=x=(2+3)/4;
    printf("%d\t%d\n",x,y); //Ans: 1       1           
    
    y=3+2*(x=7/2);
    printf("%d\t%d\n",x,y); //Ans: 3       9 
    
    x=(2+3)*10.5;
    printf("%d\t%d\n",x,y); //Ans: 52      9  
                            
    x=3/5*22.0;
    printf("%d\t%d\n",x,y); //Ans: 0       9   
                            
    x=22.0*3/5;
    printf("%d\t%d\n",x,y); //Ans: 13      9                                                                                                                          
    system("pause");
    return 0;
} 
