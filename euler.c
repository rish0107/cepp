#include<stdio.h>
#include<conio.h>

float fn(float x,float y)
{
    return y;
}

int main()
{
    float x0,y0,x,y,h,a;
    printf("enter initial values");
    scanf("%f%f",&x0,&y0);
    printf("enter step size");
    scanf("%f",&h);
    printf("enter the value of x at which you want to y");
    scanf("%f",&a);
    while(x0<a)
    {
        y=y0+h*(fn(x0,y0));
        y0=y;
        x0=x0+h;
        //printf("x=%f\n",x0);
        //printf("y=%f\n",y0);
    }
    printf("==>%f",y0);
    return 0;
}
