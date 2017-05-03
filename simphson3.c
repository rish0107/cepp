#include<stdio.h>
#include<conio.h>
#include<math.h>

float fn(float x)
{
    float y;
    y=(1/(1+pow(x,2)));
    return y;
}

int main()
{
    int i=0,j,n;
    float h,a,b,c,x[10],sum=0;
    printf("enter the integrating values");
    scanf("%f%f",&a,&b);
    printf("enter the no. in which you want to devide your interval");
    scanf("%f",&c);
    h=(b-a)/c;
    while(a<=b)
    {
        x[i++]=fn(a);
        a=a+h;
    }
    for(j=1;j<i-1;j++)
    {
        if(j%3==0)
            sum=sum+(2*x[j]);
        else
            sum=sum+(3*x[j]);
    }
    sum=((sum+x[0]+x[i-1])*h*3)/8;
    printf("===>%f",sum);
}
