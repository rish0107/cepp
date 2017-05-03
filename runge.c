#include<stdio.h>
#include<conio.h>

float fn(float x,float y)
{
    return (y*y+x*x);
}

int main()
{
    float x0,y0,x,y,h,a,k1,k2,k3,k4;
    printf("enter initial values");
    scanf("%f%f",&x0,&y0);
    printf("enter step size");
    scanf("%f",&h);
    printf("enter the value of x at which you want to y");
    scanf("%f",&a);
    while(x0<a)
    {
        k1=h*fn(x0,y0);
        k2=h*fn((x0+h/2),(y0+k1/2));
        k3=h*fn((x0+h/2),(y0+k2/2));
        k4=h*fn(x0+h,y0+k3);
        y=y0+(1.0/6)*(k1+2*k2+2*k3+k4);
        y0=y;
        x0=x0+h;
        printf("k1=%f\t",k1);
        printf("k2=%f\t",k2);
        printf("k3=%f\t",k3);
        printf("k4=%f\n",k4);
    }
    printf("==>%f",y0);
    return 0;
}
