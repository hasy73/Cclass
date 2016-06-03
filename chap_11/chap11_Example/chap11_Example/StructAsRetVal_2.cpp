/* StructAsRetVal_2.cpp */
#include <stdio.h>
#include <stdlib.h>
struct Vector {
     double x;
     double y;
     double z;
};
void VectorAddition(struct Vector, struct Vector, struct Vector *);
void VectorSubtract(struct Vector, struct Vector, struct Vector *);
int main(void)
{
    struct Vector v1={1,2,3};
    struct Vector v2={4,5,6};
    struct Vector sum,sub;
    VectorAddition(v1,v2, &sum);
    printf("(%.1lf, %.1lf, %.1lf)+(%.1lf, %.1lf, %.1lf)=(%.1lf, %.1lf, %.1lf)\n",
           v1.x,v1.y,v1.z,v2.x,v2.y,v2.z,sum.x,sum.y,sum.z);
    VectorSubtract(v1,v2, &sub);
    printf("(%.1lf, %.1lf, %.1lf)-(%.1lf, %.1lf, %.1lf)=(%.1lf, %.1lf, %.1lf)\n",
           v1.x,v1.y,v1.z,v2.x,v2.y,v2.z,sub.x,sub.y,sub.z);
    system("pause");     
}
void VectorAddition(struct Vector v1, struct Vector v2, struct Vector *v3){
       
       v3->x=v1.x+v2.x;
       v3->y=v1.y+v2.y;
       v3->z=v1.z+v2.z;       
}       
void VectorSubtract(struct Vector v1, struct Vector v2, struct Vector *v3){
       
       v3->x=v1.x-v2.x;
       v3->y=v1.y-v2.y;
       v3->z=v1.z-v2.z;       
}       
