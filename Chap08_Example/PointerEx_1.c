/* PointerEx_1.c */
#include <stdio.h>
#include<stdlib.h>
int main(void)
{
    int  *iptr, a=1;
    double *dptr, b=2.0;
    
    iptr=&a;
    dptr=&b;   
    
    //printf("Addr of iptr is: %x\n", );  //Q6: ��Xiptr����}
    //printf("Addr of dptr is: %x\n", );  //Q7: ��Xdptr����}
    
    //printf("Addr of a is: %x\n", );       //Q8: ��Xa����}
    //printf("Addr of a is: %x\n", );     //Q9: ��Xa����}(�z�L�����ܼ�)
    
    //printf("Addr of b is: %x\n", );       //Q10: ��Xb����}
    //printf("Addr of b is: %x\n", );     //Q11: ��Xb����}(�z�L�����ܼ�) 
    
    //printf("Value of a is: %d\n", );       //Q12: ��Xa����
    //printf("Value of a is: %d\n", );   //Q13: ��Xa����(�z�L�����ܼ�)
    
    //printf("Value of b is: %lf\n", );       //Q14: ��Xb����
    //printf("Value of b is: %lf\n", );   //Q15: ��Xb����(�z�L�����ܼ�)
    system("pause");
}
