/*�D���Z�֥[�{��*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   int Sum = 0,i = 1,j = 1;
   while (i <= 106){
     Sum = Sum + i;
     printf("i=%d Sum=%d\n" ,i, Sum);
     i = i + j;
     j = j + 1;
   }
  printf ("Sum=%d",Sum);
  system("pause");     
  return 0;
}



