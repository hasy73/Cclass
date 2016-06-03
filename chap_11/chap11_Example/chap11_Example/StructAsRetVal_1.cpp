/* StructAsRetVal_1.cpp */
#include <stdio.h>
#include <stdlib.h>
struct Vector {
     double x;
     double y;
     double z;
};
struct Vector VectorAddition(struct Vector, struct Vector);
struct Vector VectorSubtract(struct Vector, struct Vector);
int main(void)
{
    struct Vector v1={1,2,3};
    struct Vector v2={4,5,6};
    struct Vector sum,sub;
    sum=VectorAddition(v1,v2);
    printf("(%.1lf, %.1lf, %.1lf)+(%.1lf, %.1lf, %.1lf)=(%.1lf, %.1lf, %.1lf)\n",
           v1.x,v1.y,v1.z,v2.x,v2.y,v2.z,sum.x,sum.y,sum.z);
           
    sub=VectorSubtract(v1,v2);
    printf("(%.1lf, %.1lf, %.1lf)-(%.1lf, %.1lf, %.1lf)=(%.1lf, %.1lf, %.1lf)\n",
           v1.x,v1.y,v1.z,v2.x,v2.y,v2.z,sub.x,sub.y,sub.z);
    system("pause");     
}
struct Vector VectorAddition(struct Vector v1, struct Vector v2){
       struct Vector ret_Val;
       ret_Val.x=v1.x+v2.x;
       ret_Val.y=v1.y+v2.y;
       ret_Val.z=v1.y+v2.z;
       return ret_Val;
}       
struct Vector VectorSubtract(struct Vector v1, struct Vector v2){
       struct Vector ret_Val;
       ret_Val.x=v1.x-v2.x;
       ret_Val.y=v1.y-v2.y;
       ret_Val.z=v1.y-v2.z;
       return ret_Val;
}       
