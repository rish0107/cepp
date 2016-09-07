int main(){
int a[100],i,j,n,tmp;
printf("enter limit < 100");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<n;i++){
for(j=i+1;j<n;j++){
if(a[i]>a[j]){
tmp=a[i];
a[i]=a[j];
a[j]=tmp;
}
}
}
printf("sorted arrey is: ");
for(i=0;i<n;i++){
printf("%d\t",a[i]);}
return 0;
}
