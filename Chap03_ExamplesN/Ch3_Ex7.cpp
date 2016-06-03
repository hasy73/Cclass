#include <stdio.h>
#include <stdlib.h>
int main(void)
{
     /*
      依序寫出每一個printf指令所輸出的 ans 值 
    */
    int a=3, b=0, c=5, ans;
 
    ans = a&&b||c;
    printf("%d\n",ans); //Ans: 1 
    
    ans = a||b&& !c;    //&&的運算優先序高於|| 
    printf("%d\n",ans); //Ans: 1                                                                                                                                                                    
    system("pause");
    return 0;
} 
