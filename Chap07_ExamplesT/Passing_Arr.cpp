/* Passing_Arr.c */
#include <stdio.h>
#include<stdlib.h>
void modify_array1(int[]);
void modify_array2(int , int , int );
int main(void)
{
    int arr1[3]={0,1,2};
    int arr2[3]={0,1,2}; 
    modify_array1(arr1);    
    for (int i=0; i<3; i++)
        printf("arr1[%d] = %d\t", i, arr1[i]);
    printf("\n"); 
    
    modify_array2(arr2[0],arr2[1],arr2[2]);
    for (int i=0; i<3; i++)
        printf("arr2[%d] = %d\t", i, arr2[i]);   
    printf("\n");     
    system("pause");     
}
void modify_array1(int a[])
{
     for (int i=0; i<3; i++)
         a[i]*=2;
} 
void modify_array2(int e1, int e2, int e3)
{
     e1*=2;
     e2*=2;
     e3*=2;
}    
