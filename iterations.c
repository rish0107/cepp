#include<stdio.h>
#include<conio.h>
#include<math.h>

float fn(float x)
{
    float tmp;
    tmp=(3*x-cos(x)-2);
    return tmp;
}
float dfn(float x)
{
    return (cos(x)+2)/3;
}
int main()
{
    float x1,x2,x3;
    printf("enter approx values");
    scanf("%f%f",&x1,&x2);
    if(fn(x1)*fn(x2)>0)
    {
        printf("wrong values");
    }
    else
    {
        printf("enter inbetween value");
        scanf("%f",&x3);
        x1=x3;
            do{
            x3=x1;
            x1=dfn(x3);
            }while((x1-x3)>.00001||(x3-x1)>.00001);
        printf("root is%f",x1);
    }
    return 0;
}
