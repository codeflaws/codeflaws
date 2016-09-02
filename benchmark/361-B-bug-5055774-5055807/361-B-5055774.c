#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{int a,b;
scanf("%d%d",&a,&b);
int A[a];
int r;
r=0;
while(r<a){
A[r]=r+1;
r=r+1;
}if(a<=b){
printf("-1");}
if(a>b){
if((a-b)%2==1){
int r,t;
r=a-b-1;
t=0;
while(t<=r){
int g;
g=A[b+t+1];
A[b+t+1]=A[b+t+2];
A[b+t+2]=g;
t=t+2;
}int p;
p=0;
while(p<a){
printf("%d",A[p]);
p=p+1;}
}
if((a-b)%2==0){
int r,t;
r=a-b-1;
t=0;
while(t<r-1){
int g;
g=A[b+t+1];
A[b+t+1]=A[b+t+2];
A[b+t+2]=g;
t=t+2;
}int j;
j=A[0];
A[0]=A[a-1];
A[a-1]=j;
int p;
p=0;
while(p<a){
printf("%d ",A[p]);
p=p+1;}
}}


return 0;
}



