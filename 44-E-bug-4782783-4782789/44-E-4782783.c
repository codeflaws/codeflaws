#include<stdio.h>
#include<string.h>
#define Max(a,b) (a>b)?a:b
#define Min(a,b) (a<b)?a:b
int main(int argc, char *argv[])
{
    int a,b,n,i,j,k;
    char ch[1000];
    while(scanf("%d %d %d",&n,&a,&b)==3)
    {
        getchar();
        gets(ch);
        if(a>b)
        {
            int s=a;
            a=b;
            b=s;
        }
        int len=strlen(ch);
        if(len>(b*n)||len<(a*n)) printf("No Solution\n");
        else
        {
            int sum=0,ar[1000],in=0;
            for(i=0; i<n; i++) ar[in++]=b;
            for(;;)
            {
                sum=0;
                for(i=0; i<in; i++) sum+=ar[i];
                if(sum==len) break;
                if(sum!=len)
                {
                    for(i=0; i<in; i++)
                    {
                        if(ar[i]>a)
                        {
                            ar[i]=ar[i]-1;
                            break;
                        }
                    }
                }
            }
            int pp=0;
            for(i=0,j=1; ch[i]; i++,j++)
            {
                printf("%c",ch[i]);
                if(j==ar[pp])
                {
                    j=0;
                    pp++;
                    printf("\n");
                }
            }
        }
    }
    return 0;
}