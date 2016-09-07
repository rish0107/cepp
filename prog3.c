int main(){
int i,j,a[100],n,tmp;
printf("enter limit < 100");
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d",&a[i]);}
for(i=0;i<n-1;i++){
for(j=i+1;j<n;j++){
if(a[i]>a[j]){
tmp=a[i];
a[i]=a[j];
a[j]=tmp;}
}
}
printf("sorted array is: ");
for(i=0;i<n;i++){
printf("%d\t",a[i]);}
return 0;
}
