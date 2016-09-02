#include <stdio.h>
int main(int argc, char *argv[]){
int a[20000],n=0,i,j,k,l,m,z,v;
scanf("%d",&z);
v=2*z*z;
if(z>2000)for(i=1;i<=v;i*=11)for(j=1;i*j<=v;j*=7)for(k=1;i*j*k<=v;k*=5)for(l=1;i*j*k*l<=v;l*=3)for(m=1;i*j*k*l*m<=v;m*=2)a[n++]=i*j*k*l*m;
else if(z>100)for(i=1,j=1;i*j<=v;j*=7)for(k=1;i*j*k<=v;k*=5)for(l=1;i*j*k*l<=v;l*=3)for(m=1;i*j*k*l*m<=v;m*=2)a[n++]=i*j*k*l*m;
else if(z>50)for(k=1,i=1,j=1;i*j*k<=v;k*=5)for(l=1;i*j*k*l<=v;l*=3)for(m=1;i*j*k*l*m<=v;m*=2)a[n++]=i*j*k*l*m;
else for(i=1;i<=v;i*=3)for(j=1;i*j<=v;j*=2)a[n++]=i*j;
for(n--;z>0;z--)printf("%d ",a[n--]);
return 0;
}