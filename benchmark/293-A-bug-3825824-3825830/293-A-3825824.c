#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[])
{int i,k,cnt1=0,cnt2=0,n,t=0,x=0,y=0;
char a[2000001],b[2000001],f[3];
scanf("%d",&n);gets(f);
gets(a);gets(b);
for(i=0;i<2*n;i++){
if(a[i]==b[i]&&a[i]=='1'){t++;}
else if(a[i]=='1'){x++;}
else if(b[i]=='1'){y++;}
else{continue;}}
if(x==0&&y==0){
if(t%2!=0){printf("First");return 0;}
else if(t%2==0&&t!=2*n&&t!=0){printf("Draw");return 0;}
else{printf("Second");return 0;}}
else{
if(t%2!=0){y--;if(y-x==1){printf("Draw");return 0;}else if(x>y){printf("First");return 0;}
else if(x==y){printf("Draw");return 0;}else{printf("Second");return 0;}}
else{ if(y-x==1){printf("Draw");return 0;}   else if(x>y){printf("First");return 0;}
else if(x==y){printf("Draw");return 0;}else{printf("Second");return 0;}}}
return 0;}

