#include<stdio.h>
int main(int argc, char *argv[])
{
int n,a[200],i,max=0,j,b[100];
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=1;i<n-1;i++){
for(j=0;j<n-1;j++){
if(i==j+1&&max<a[j+2]-a[j])
max=a[j+2]-a[j];
else if(max<a[j+1]-a[j])
max=a[j+1]-a[j];
else;
}
b[i]=max;
}
max=b[1];
for(i=1;i<n-1;i++)
if(max>b[i])
max=b[i];
printf("%d",max);
return 0;
}
