/* dowhile_exercise_1.c */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void)
{
   //Step 1: �ŧi�������ܼƤε��w���
   int a ;
   //Step 2: ��X���ܰT��
   printf("�п�J�@���:");
   //Step 3: �q��LŪ���@���
   scanf("%d",&a);
   //Step 4: ��X���D
   printf("%d���]�Ʀ�:",a);
   //Step 5: �Hdo while?��v�@��X�]��
   int i=1;
   do {
       if (a%i==0)
       printf("%d\t",i);
       i++;
   } while(a>=i);
   //��: ����98���]��, ��1...98����, 98��Q����, �i�H�㰣98�̧Y��98���]�� 
   printf("\n\n");   
   system("pause");     
   return 0;
}        
