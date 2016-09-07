int main(){
int a[10],b[10],bob=0,alice=0,i,n;
printf("enter no of subjects");
scanf("%d",&n);
printf("enter alice marks");
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}
printf("enter bob marks");
for(i=0;i<n;i++){
scanf("%d",&b[i]);
}
for(i=0;i<n;i++){
if(a[i]>b[i])
alice++;
else
bob++;}
printf("aliice=%d ,bob=%d",alice,bob);
return 0;
}
