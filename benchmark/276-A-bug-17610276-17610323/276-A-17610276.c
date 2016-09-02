#include<stdio.h>
int main(int argc, char *argv[])
{
    int n,k,t,f=0,i,j,m=0,q=-99999999,p=0,w=0;
    int a[100000];
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
     scanf("%d %d",&f,&t);
     if(t>k)
         a[i]=(f-(t-k));
     else
         a[i]=f;
    }
    for(i=0;i<n;i++)
    {
            if(a[i]>m&&a[i]>0)
            {
            m=a[i];
            p=1;
              }
        if(a[i]>=q&&a[i]<0)
        {
        q=a[i];
        w=1;
        }
    }
    if(p==1&&w==0)
        printf("%d",m);
    else if (w==1&&p==0)
        printf("%d",q);
else
{
        if((q*-1)>m)
            printf("%d",q);
        else
            printf("%d",m);
}
return 0;
}
