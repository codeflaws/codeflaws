#include<stdio.h>
int cmp(const void *a,const void *b)
{
    return((long long int *)a)[0]-((long long int *)b)[0];
}
int main(int argc, char *argv[])
{
long long int l=0,p=0,u=0,v=0,t=0,q=0,m=0,i=0,j=0;
long n=0;
scanf("%ld",&n);
scanf("%lld",&m);
scanf("%lld",&p);
scanf("%lld",&q);
long long int d[n][2];
for(i=0;i<n;i++)
{
scanf("%lld",&u);
scanf("%lld",&v);
d[i][0]=u*p+v*q;
d[i][1]=i+1;
}
qsort(d,n,2*(sizeof(long long int)),cmp);
for(i=0;i<n;i++)
{
l+=d[i][0];
if(l>m)
break;
if(l==m)
{
i++;
break;
}
}
printf("%lld\n",l);
printf("%lld\n",i);
for(j=0;j<i;j++)
printf("%lld ",d[j][1]);
return(0);
}
