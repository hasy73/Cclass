/* StructAsRetVal_3.cpp */
#include <stdio.h>
#include <stdlib.h>
struct Vector {
     double x;
     double y;
     double z;
};
typedef struct Vector iloveandrew;
void VectorComputation(iloveandrew[]);
void VectorSubtract(iloveandrew[]);
int main(void)
{
    iloveandrew v[4]={{1,2,3},{4,5,6},
                         {0,0,0},{0,0,0}};
    VectorComputation(v);
    printf("(%.1lf, %.1lf, %.1lf)+(%.1lf, %.1lf, %.1lf)=(%.1lf, %.1lf, %.1lf)\n",
           v[0].x,v[0].y,v[0].z,v[1].x,v[1].y,v[1].z,v[2].x,v[2].y,v[2].z);
    VectorSubtract(v);
    printf("(%.1lf, %.1lf, %.1lf)-(%.1lf, %.1lf, %.1lf)=(%.1lf, %.1lf, %.1lf)\n",
           v[0].x,v[0].y,v[0].z,v[1].x,v[1].y,v[1].z,v[3].x,v[3].y,v[3].z);
    system("pause");     
}
void VectorComputation(iloveandrew v[]){
       
       v[2].x=v[0].x+v[1].x;
       v[2].y=v[0].y+v[1].y;
       v[2].z=v[0].z+v[1].z;       
}   
void VectorSubtract(iloveandrew v[]){
       
       v[3].x=v[0].x-v[1].x;
       v[3].y=v[0].y-v[1].y;
       v[3].z=v[0].z-v[1].z;       
}   
