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
    //Q4: 若要輸出14這個陣列元素值, 則[]應填入什麼數字 
    printf("%d\n",arr[1][1]); 
    
    //Q5: 若要輸出333.3這個陣列元素值, 則[]應填入什麼數字 
    printf("%f\n",k[0][2]);
    
    //Q6: 若要輸出444.4這個陣列元素值, 則[]應填入什麼數字 
    printf("%f\n",k[1][0]);
    system("pause");     
}
