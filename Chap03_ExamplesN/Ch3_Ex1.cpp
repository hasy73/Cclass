#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    /*
       �g�X�U�C�B�⦡���B�⵲�G
       (a) 100 > 3
       (b) 'a' > 'c'
       (c) 100 > 3 && 'a' > 'c'
       (d) 100 > 3 || 'a' > 'c'
       (e) !(100>3) 
       (f) 'X' > 'T'? 10:5
    */
    printf("100 > 3 ���B�⵲�G: %d \n", 100 > 3); //a:1
    printf("'a' > 'c' ���B�⵲�G: %d \n", 'a' > 'c'); //b:0
    printf("100 > 3 && 'a' > 'c' ���B�⵲�G: %d \n", 100 > 3 && 'a' > 'c'); //c:0
    printf("100 > 3 || 'a' > 'c' ���B�⵲�G: %d \n", 100 > 3 || 'a' > 'c'); //d:1
    printf("!(100>3)  ���B�⵲�G: %d \n", !(100>3) ); //e:0
    printf("'X' > 'T'? 10:5���B�⵲�G: %d\n", 'X' > 'T'? 10:5);//f:10
    system("pause");
    return 0;
} 
