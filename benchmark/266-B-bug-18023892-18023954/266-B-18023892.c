#include<stdio.h>
int n,i,j,t;
char a[51],b;
int main(int argc, char *argv[]){scanf("%d%d",&n,&t);
scanf("%s",a);
for(i=0;i<t;i++)
for(j=0;j<n;j++)
if(a[j+1]=='B'&&a[j]=='G'){b=a[j+1];a[j+1]=a[j];a[j]=b;j+=1;}
printf("%s",a);return 0;
}
