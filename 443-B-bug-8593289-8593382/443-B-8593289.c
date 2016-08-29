#include<stdio.h>
int istandem(char s[],int n)
{
    int i;
    for(i=0;i<n/2;i++)
    {
        if(s[i]!=s[i+n/2])
        {
            return(0);
        }
    }
    return(1);
}
int max(int a,int b)
{
    if(a>b)
    {
        return(a);
    }
    return(b);
}
int min(int a,int b)
{
    if(a<b)
    {
        return(a);
    }
    return(b);
}
int main(int argc, char *argv[])
{
    char s[300];
    int k,i,j,y,z;
    scanf("%s",s);
    int l=strlen(s);
    scanf("%d",&k);
    int ans=min(2*((l+k)/2),2*k);
    for(j=2*(l/2);j>=2;j-=2)
    {
        for(i=0;i<=l-j;i++)
        {
            if(istandem(s+i,j))
            {
                break;
            }
        }
    }
    ans=max(ans,j);
    for(y=k;y>=0;y--)
    {
        for(z=0;2*z+y<=l;z++)
        {
            int f=1;
            for(i=l-2*z-y;i<l-z-y;i++)
            {
                if(s[i]!=s[i+z+y])
                {
                    f=0;
                    break;
                }
            }
            if(f)
            {
                ans=max(ans,2*(y+z));
            }
        }
    }
    printf("%d",ans);
    return(0);
}
