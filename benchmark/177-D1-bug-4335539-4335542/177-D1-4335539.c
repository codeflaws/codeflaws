#include<stdio.h>
#include<malloc.h>
int main(int argc, char *argv[])
{
int a=0,b=0,c=0,n,m,d=0;
scanf("%d%d%d",&n,&m,&c);
int *arr=(int *)malloc(n*sizeof(int));
int *arr1=(int *)malloc(m*sizeof(int));
for(a=0;a<n;a++)
scanf("%d",&arr[a]);

for(b=0;b<m;b++)
scanf("%d",&arr1[b]);

for(b=0;b<=n-m;b++)
{d=0;
for(a=b;a<b+m;a++)
{
//printf("%d  ",arr1[d]+arr[a]);
arr[a]=(arr1[d]+arr[a])%c;
d++;
}
}
for(a=0;a<n;a++)
printf("%d",arr[a]);

return 0;

}