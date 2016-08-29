#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) 
{
    char s[1001];
    int i,t,k,m,j,n,c;
    int flag=0;
    scanf("%s",s);
    scanf("%d",&k);
    n=strlen(s);
    if(n%k != 0)
    {
        printf("NO\n");
        return 0;
    }
    else
    {
        i=0;
        m=n/k;
        t=m;
        flag=0;
        while(k--)
        {
            for(j=i,c=0;j<t;j++,c++)
            {
                if(s[j] != s[t-c-1])
                {
                    flag=1;
                    break;
                }
            }
            i=i+m;
            t=t+m;
        }
    }   
    if(flag)
        printf("NO\n");
    else
        printf("YES\n");
    
    
    return 0;
}
