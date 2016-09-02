#include<stdio.h>
int main(int argc, char *argv[])
{
    int n,c,i,days[200],max;
    while(scanf("%d%d",&n,&c)!=EOF)
    {
        for(i=0;i<n;i++)
            scanf("%d",&days[i]);
        max=days[0]-days[1];
        for(i=0;i<n-1;i++)
        {
            if((days[i]-days[i+1])>max)
            {
                max=days[i]-days[i+1];
            }
        }
        if((max-c)!=0) printf("0\n");
        else printf("%d\n",max-c);
    }
    return 0;
}
