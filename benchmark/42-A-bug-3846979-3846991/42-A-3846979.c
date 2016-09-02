#include<stdio.h>
int main(int argc, char *argv[]){
int n,v,i,sum=0;
scanf("%d%d",&n,&v);
int a[n],b[n];
float c[n],ans,x1,x2;
for(i=0;i<n;i++){
scanf("%d",&a[i]);
sum=sum+a[i];
}
for(i=0;i<n;i++)
scanf("%d",&b[i]);
for(i=0;i<n;i++)
        c[i]=((float)b[i])/a[i];
x2=c[0];
for(i=0;i<n;i++)
if(c[i]<x2)
    x2=c[i];
    x1=((float)v)/sum;
if(x1<x2){
    ans=x1*sum;
}
else
    ans=x2*sum;
printf("%.1f",ans);

return 0;
}
