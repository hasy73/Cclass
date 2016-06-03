#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    /*
       寫出下列運算式的運算結果
       (a) 100 > 3
       (b) 'a' > 'c'
       (c) 100 > 3 && 'a' > 'c'
       (d) 100 > 3 || 'a' > 'c'
       (e) !(100>3) 
       (f) 'X' > 'T'? 10:5
    */
    printf("100 > 3 的運算結果: %d \n", 100 > 3); //a:1
    printf("'a' > 'c' 的運算結果: %d \n", 'a' > 'c'); //b:0
    printf("100 > 3 && 'a' > 'c' 的運算結果: %d \n", 100 > 3 && 'a' > 'c'); //c:0
    printf("100 > 3 || 'a' > 'c' 的運算結果: %d \n", 100 > 3 || 'a' > 'c'); //d:1
    printf("!(100>3)  的運算結果: %d \n", !(100>3) ); //e:0
    printf("'X' > 'T'? 10:5的運算結果: %d\n", 'X' > 'T'? 10:5);//f:10
    system("pause");
    return 0;
} 
