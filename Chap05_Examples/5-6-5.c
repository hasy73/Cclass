/*璸衡ㄢ计程そ计の程そ计*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int a,b,i,M=0,m=0;
    printf("叫块ㄢタ俱计");
    scanf("%d %d",&a,&b);          /*块ㄢ俱计*/
    for(i=1;i<a && i<b;i++) {         
      if(!(a%i) && !(b%i))        /*璝a,b砆i俱埃ia,bぇそ计*/
        M = i;
    }
    printf("%d ㎝ %d ぇ程そ计 %d\n",a,b,M);
    i = a<b ? a:b;
    while(1) { 
      if(!(i%a) && !(i%b)) {       /*璝i俱埃a,bia,bぇ计*/
        m = i;
        break;                   /*材瞷碞琌程そ计*/
      }
      i++;
    }
    printf("%d ㎝ %d ぇ程そ计 %d\n",a,b,m);
    system("pause");     //ㄏ祘Α既氨磅︽礶琵и挡狦
    return 0;
}
