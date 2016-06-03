/* VarScope_4.c */
#include <stdio.h>
#include <stdlib.h>
int z=0;
void updateLocalZ();
void updateGlobalZ();
int main(void)
{
    printf("z=%d\n",z);   
    updateLocalZ();
    printf("z=%d\n",z);
    updateGlobalZ();  
    printf("z=%d\n",z);                                            
    system("pause");     
}
void updateLocalZ()
{
     int z=10;
     printf("z=%d\n",z);  
}     
void updateGlobalZ()
{
     z=20;
}    
