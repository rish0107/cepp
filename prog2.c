int main(){
int h,m,s;
char c;
printf("enter time if 12 hour format");
scanf("%d %d %d %c",&h,&m,&s,&c);
if(c=='p'&&h<12){
h=h+12;
}
else if(c=='a'&&h==12){
h=0;
}
printf("enter time in 24 hour format %d:%d:%d",h,m,s);
return 0;
}
