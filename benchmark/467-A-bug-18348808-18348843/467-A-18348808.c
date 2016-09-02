#include<stdio.h>
int main(int argc, char *argv[])
{
        int count=0,i,n,p,q;

        scanf("%d",&n);

        for(i=0;i<n;i++)
        {
            scanf("%d%d",&p,&q);
            if((p+2)>=q)
                count++;
        }

        printf("%d",count);

        return 0;
}
