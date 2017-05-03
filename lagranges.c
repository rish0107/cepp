#include<stdio.h>
#include<conio.h>

int main()
{
    int x[10],i,y[10],n,t,j;
    float p1=1,p2=1,sum=0,a;
    printf("enter no of terms you want to enter");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
        scanf("%d",&y[i]);
    }
    printf("enter the value at which you want to evaluate");
    scanf("%f",&a);
    for(i=0;i<n;i++)
    {
        t=x[i];
        p1=1;
        p2=1;
        for(j=0;j<n;j++)
        {
            if(x[j]!=t)
            {
                p1=p1*(a-x[j]);
                p2=p2*(t-x[j]);
            }
        }
        sum=sum+(p1/p2)*y[i];
    }
    printf("==>%f",sum);
}
