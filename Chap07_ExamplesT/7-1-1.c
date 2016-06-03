/* 7-1-1.c */
#include <stdio.h>
#include<stdlib.h>
int main(void)
{
    int i,StuScore[10],total=0;
    int above90=0, above80=0, above70=0, above60=0, below60=0;            
    for(i=0;i<10;i++) {
      printf("請輸入學生%d的成績：",i+1);
      scanf("%d",&StuScore[i]);      
    }
    for (i=0; i<10; i++){
        if (StuScore[i]>=90) above90++; 
        if (StuScore[i]>=80 && StuScore[i]<90) above80++;
        if (StuScore[i]>=70 && StuScore[i]<80) above70++;
        if (StuScore[i]>=60 && StuScore[i]<70) above60++;
        if (StuScore[i]<60) below60++;
    }
    printf("90~100: %d\n", above90);    
    system("pause");     
}
