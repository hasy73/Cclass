/* TwoDimArray_2.c */
#include <stdio.h>
#include<stdlib.h>
int main(void)
{
    //�Ǹ�,Q1~Q4�����Z 
    int arr[5][5]={{1,  70,  65, 105, 83},
                   {10, 80,  92, 90,  60},
                   {16, 100, 81, 106, 80},		
                   {11, 60,  90, 100, 65},
	               {39, 60,  91, 100, 68}};
    //Part 1: ��X���Z�`�� 
    printf("�Ǹ�\tQ1\tQ2\tQ3\tQ4\n");
    for (int i=0; i<5 ;i++){
        for (int j=0; j<5 ; j++){
            printf("%d\t",arr[i][j]);
        }  
        printf("\n");  
    }    
    
    
    
    //Part 2: ��X����   
    printf("�Ǹ�\t����\n"); 
    //Step 1: �ŧi�ܼ�, �Ω��x�s�Ҳ֥[������ 
    float total;
    for (int i=0; i<5; i++){
    //step 2: �}�l�֥[�e, �ܼƭȭn�k0
    total=0 ;
          //step 3: �֥[�� i ��P�Ǫ����Z 
          for (int j=0; j<4; j++){ 
          total=total+arr[i][j+1];
          } 
          //step 4: ��X�Ǹ��Χ��� 
          printf("%d\t%f\n",arr[i][0],total/4);
    }    
    system("pause");     
}
