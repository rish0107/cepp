int  main(){
int i,j,tmp,a[100],n;
printf("enter size of array < 100");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
for(i=1;i<n;i++)
{
    tmp=a[i];
    j=i-1;
    while(j>=0&&tmp<a[j])
    {
        a[j+1]=a[j];
        j--;
    }
    a[j+1]=tmp;
}
printf("sorted array is: ");
for(i=0;i<n;i++)
{
    printf("%d\t",a[i]);
}
return 0;
}
