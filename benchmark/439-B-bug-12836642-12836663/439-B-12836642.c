#include <stdio.h>
#include <stdlib.h>
int comp (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}
int main(int argc, char *argv[])
{
    long long n,x;
    long long s=0,y;
    scanf("%I64d %I64d",&n,&x);
    long long i,j;
    long long ara[100005];
    for(i=0;i<n;i++)    {
        scanf("%I64d",&ara[i]);
    }
    qsort(ara,n,sizeof(int),comp);
    i=0;
    while(x>1&&i<n)    {
        s+=ara[i]*x;
        i++;
        x--;
    }
    y=0;
    for(j=i;j<n;j++)    {
        y+=ara[j];
    }
    s+=y;
    printf("%I64d\n",s);
    return 0;
}
