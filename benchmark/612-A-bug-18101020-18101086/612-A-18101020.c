#include<stdio.h>
int main(int argc, char *argv[])
{
    char s[1000];

    int n,a,b,i,j,sum=0,res,check;

    scanf("%d%d%d",&n,&a,&b);

    scanf(" %[^\n]",s);
    if(n%a==0)
    {

        printf("%d\n",n/a);
        for(i=0;s[i];i++)
        {
            printf("%c",s[i]);
            sum++;
            if(sum==a)
            {
                printf("\n");
                sum=0;
            }
        }

    }
    else if(n%b==0)
    {
        printf("%d\n",n/b);
        for(i=0;s[i];i++)
        {
            printf("%c",s[i]);
            sum++;
            if(sum==b)
            {
                printf("\n");
                sum=0;
            }
        }

    }
    else
    {
            for(i=1; ;i++)
            {
                res=n-a*i;
                check=res%b;
                if(res<0) {
                        printf("-1");
                        return 0;
                }
                if(check==0)
                {
                   break;
                }

            }

            for(j=0;j<a*i;j++)
            {
                printf("%c",s[j]);
                sum++;
                if(sum==a)
                {
                    printf("\n");
                    sum=0;
                }
            }
            sum=0;
            for(j=a*i;s[j];j++)
            {
                printf("%c",s[j]);
                sum++;
                if(sum==b)
                {
                    printf("\n");
                    sum=0;
                }
            }

    }
}
