#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
        int n,i,j,sum;
        char s[50];

        scanf("%d",&n);

        scanf("%s",&s);

        sum=0;
        for(i=0;i<n-1;i++)
        {
            if(s[i]!=s[i+1])
                {
                    sum=sum+1;
                }
        }

        printf("%d",sum);
        return 0;
}
