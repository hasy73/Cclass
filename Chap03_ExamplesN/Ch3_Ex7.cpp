#include <stdio.h>
#include <stdlib.h>
int main(void)
{
     /*
      �̧Ǽg�X�C�@��printf���O�ҿ�X�� ans �� 
    */
    int a=3, b=0, c=5, ans;
 
    ans = a&&b||c;
    printf("%d\n",ans); //Ans: 1 
    
    ans = a||b&& !c;    //&&���B���u���ǰ���|| 
    printf("%d\n",ans); //Ans: 1                                                                                                                                                                    
    system("pause");
    return 0;
} 
