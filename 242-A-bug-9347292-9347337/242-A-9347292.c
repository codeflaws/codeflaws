#include<stdio.h>
int main(int argc, char *argv[])
    {
        int x,y,a,b,i,j,c=0;
        scanf("%d %d %d %d",&x,&y,&a,&b);
        for(i=b;i<=y;i++)
        {
            for(j=a;j<=x;j++)
            {
                if(j>i)
                    c++;
            }
        }
        printf("%d\n",c);
        for(i=b+1;i<=x;i++)
        {
            for(j=b;j<=y;j++)
            {
                if(j<i)
                    printf("%d %d\n",i,j);
            }
        }
        return 0;
     }
