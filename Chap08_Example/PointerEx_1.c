/* PointerEx_1.c */
#include <stdio.h>
#include<stdlib.h>
int main(void)
{
    int  *iptr, a=1;
    double *dptr, b=2.0;
    
    iptr=&a;
    dptr=&b;   
    
    //printf("Addr of iptr is: %x\n", );  //Q6: 輸出iptr的位址
    //printf("Addr of dptr is: %x\n", );  //Q7: 輸出dptr的位址
    
    //printf("Addr of a is: %x\n", );       //Q8: 輸出a的位址
    //printf("Addr of a is: %x\n", );     //Q9: 輸出a的位址(透過指標變數)
    
    //printf("Addr of b is: %x\n", );       //Q10: 輸出b的位址
    //printf("Addr of b is: %x\n", );     //Q11: 輸出b的位址(透過指標變數) 
    
    //printf("Value of a is: %d\n", );       //Q12: 輸出a的值
    //printf("Value of a is: %d\n", );   //Q13: 輸出a的值(透過指標變數)
    
    //printf("Value of b is: %lf\n", );       //Q14: 輸出b的值
    //printf("Value of b is: %lf\n", );   //Q15: 輸出b的值(透過指標變數)
    system("pause");
}
