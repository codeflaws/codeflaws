#include<stdio.h>
int main(int argc, char *argv[])
{
    long int n,k,i,j,l[100001],r[100001],d=0;
    scanf("%ld %ld",&n,&k);
    for(i=0;i<n;i++)
    {scanf("%ld %ld",&l[i],&r[i]);
     d+=r[i]-l[i]+1;
    }
long int f=d%k;
if(f==0) printf("0");
else
{
    long int y=d/k;
    printf("%ld",(y+1)*k-d);
}
return 0;
}
