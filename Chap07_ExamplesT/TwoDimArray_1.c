/* TwoDimArray_1.c */
#include <stdio.h>
#include<stdlib.h>
int main(void)
{
    int arr[2][3]={{10, 11, 12},{13, 14, 15}};
    float k[][3]={111.1, 222.2, 333.3, 444.4, 555.5, 666.6};
    
    printf("%d\n",arr[0][0]);   //Q1: 10
    printf("%d\n",arr[0][0]+1); //Q2: 11
    printf("%d\n",arr[0][2]);   //Q3: 12
    //Q4: �Y�n��X14�o�Ӱ}�C������, �h[]����J����Ʀr 
    printf("%d\n",arr[1][1]); 
    
    //Q5: �Y�n��X333.3�o�Ӱ}�C������, �h[]����J����Ʀr 
    printf("%f\n",k[0][2]);
    
    //Q6: �Y�n��X444.4�o�Ӱ}�C������, �h[]����J����Ʀr 
    printf("%f\n",k[1][0]);
    system("pause");     
}
