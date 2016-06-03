/* じ跑计ず甧ユ传祘Α */
#include <stdio.h>
#include<stdlib.h>
void swap(void*,void*,int);
int main(void)
{
  int a=5,b=3;      //俱计篈跑计砞﹚
  double c=6,d=2;   //疊翴计篈跑计砞﹚
  swap(&a,&b,sizeof(int));
  swap(&c,&d,sizeof(double));
  printf("a = %d b = %d\n",a,b);
  printf("c = %lf d = %lf\n",c,d);  
  system("pause");
  return 0;
}
void swap(void* a,void* b,int size)
{
     int i;
     char *p=(char *)a;   //盢void夹篈锣传char夹篈
     char *q=(char *)b;
     char tmp;
     for(i=0;i<size;i++,p++,q++) {
       tmp = *p;
       *p = *q;
       *q = tmp; 
     }  
}
