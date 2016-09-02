#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int i,p=0,q=0,r=0,s=0,t=0,n,x=0,ck,n1,z;
    scanf("%d",&n1);
    int a[n1];
    for(i=0;i<n1;i++)
    {
        scanf("%d",&a[i]);
    }
    n=n1/3;
    p=0;ck=-1;
    for(i=0;i<n1;i++)
    {
        if(a[i]==5 || a[i]==7)
        {ck=0;break;}
        else if(a[i]==1)
            p++;
        else if(a[i]==2)
            q++;
        else if(a[i]==3)
            r++;
        else if(a[i]==4)
            s++;
        else if(a[i]==6)
            t++;
    }
   // printf("ck %d n %d p %d q %d r %d s %d t %d\n",ck,n,p,q,r,s,t);
    if(ck!=-1 || p!=n)
        x=1;
    if(q==0 && r==0)
        x=1;
    if(q==0 && s>0)
        x=1;
    else if(q==0 && s==0)
    {
        if(r!=n && t!=n)
            x=1;
    }
    if(r==0)
    {
        if(q!=n)
            x=1;
        else if((s+t)!=n)
        x=1;

    }
    if(s==0)
    {
        if(t!=n || (q+r)!=n)
            x=1;
    }
    if(p==n && q>0 && r>0 && s>0 && t>0)
    {
        if((s+t)!=n || (q+r)!=n || t!=r)
            x=1;
    }
    if(t==0 && r>0)
            x=1;
    else if(t==0 && r==0)
        {
            if(q!=n && s!=n)
                x=1;
        }

    //printf("x %d",x);
    if(x==1)
        printf("-1");
    else
    {
        if(q==0)
        {
           for(i=1;i<=n;i++)
                printf("1 3 6\n");
        }
        else if(r==0)
        {
         for(i=1;i<=s;i++)
                printf("1 2 4\n");
        for(i=1;i<=t;i++)
                printf("1 2 6\n");
        }
        else if(s==0)
        {
            for(i=1;i<=q;i++)
                printf("1 2 6\n");
                for(i=1;i<=r;i++)
                printf("1 3 6\n");
        }
        else if(t==0)
        {
           for(i=1;i<=n;i++)
                printf("1 2 4\n");

        }
        else
        {
          for(i=1;i<=r;i++)
                printf("1 3 6\n");
        for(i=1;i<=s;i++)
                printf("1 2 4\n");
            z=t-r;
            for(i=1;i<=z;i++)
                printf("1 2 6\n");


        }
    }
    return 0;
}
