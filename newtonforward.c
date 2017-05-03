#include<stdio.h>
#include<conio.h>
#include<math.h>

int fact(int x)
{
    int f=1,i;
    for(i=1;i<=x;i++)
    {
        f=f*i;
    }
    return f;
}

int main()
{
    int x[20],y[20],i,n,z[10],j=0,k;
    float u,sum,t=1,a,h;
    printf("enter value of n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
        scanf("%d",&y[i]);
    }

    h=x[1]-x[0];
    printf("from where we have to find value");
    scanf("%f",&a);
    u=(a-x[0])/h;
   for(k=0;k<n-1;k++)
    {
        z[j++]=y[0];
        for(i=0;i<n-1-k;i++)
        {
            int tmp=y[i+1]-y[i];
            y[i]=tmp;
            //printf("%d",tmp);
        }
        //printf("  ");
    }
    z[j++]=y[0];

    /*for(i=0;i<j;i++)
        printf("%d",z[i]);*/
        sum=z[0];
        i=1;
      //printf("%f",u);
   while(i<n)
   {
       t=(u*t)/i;
       sum+=(t*z[i]);
       i++;
       u=u-1;
      // printf("%f\n",u);
   }
   printf("%f",sum);

    return 0;
}
