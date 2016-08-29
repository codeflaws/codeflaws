#include<stdio.h>
int main(int argc, char *argv[])
{
    int n,m,i,j,a[110],b[110],k=0,l,c=0,r;
    scanf("%d%d",&c,&r);
    if(r==c)
        {
            printf("%d\n",r+1);
            n=r+1;
        }
    else
    {
        n=(r>c)?r:c;
        printf("%d\n",n);
    }
   for(i=1;i<=n;i++)
   {
       printf("%d %d\n",k,r);
       k++;
       r--;
   }
    return(0);
}
