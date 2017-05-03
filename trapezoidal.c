#include<stdio.h>
#include<conio.h>

float fn(float x)
{
    float y;
    y=(1/(1+pow(x,2)));;
    return y;
}

int main()
{
    int i=0,n,j;
    float h,a,b,c,sum=0,x[10];
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
        sum=sum+x[j];
    }
    sum=sum*2;
    sum=((x[0]+x[i-1]+sum)*h)/2;
    printf("==>%f",sum);
    return 0;
}
