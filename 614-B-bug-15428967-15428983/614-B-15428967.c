#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
     int n,p=0,t,m=0,i,l=0,j,k=0;
     char s[100005],b[100005];
     scanf("%d",&n);
     for(i=0;i<n;i++)
     {
         t=0;
         scanf("%s",s);
         l=strlen(s);
            if(s[0]=='0')
            {
                p=1;
                break;
            }
            if(s[0]!='1')
            {
                printf("%s",s);
                k=1;
                strcpy(b,s);
                t=1;
                continue;
            }
            for(j=1;j<l;j++)
            {
                if(s[j]!='0')
                {
                    strcpy(b,s);
                    t=1;
                    k=1;
                    break;
                }
            }
            if(t==0)
                m+=(l-1);
     }
    if(p==1)
        printf("0");
    else
    {
        if(k==0)
           printf("1");
        else
            printf("%s",b);

        for(i=0;i<m;i++)
            {
                printf("0");
            }
    }
        return 0;
}
