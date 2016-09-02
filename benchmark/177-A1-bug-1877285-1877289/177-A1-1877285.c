#include<stdio.h>
int main(int argc, char *argv[])
{int a[101][101],sum=0,n,i,j,d;
scanf("%d",&n);
for(i=0;i<n;i++)
for(j=0;j<n;j++)
scanf("%d",&a[i][j]);
d=n/2+1;
if(n!=1)
{
for(j=0;j<n;j++)
sum=sum+a[d][j]+a[j][d]+a[j][j]+a[j][n-1-j];

sum=sum-3*a[d][d];

printf("%d",sum);
}
else printf("%d",a[0][0]);
return 0;
}

