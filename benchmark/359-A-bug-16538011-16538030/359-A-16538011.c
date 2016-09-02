#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int n,m,s1=0,i,j,s2=0,s3=0,x;
    scanf("%d%d",&n,&m);

    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            scanf("%d",&x);
            if(x==1 )
            {
                if(i==0 && i==1)
                    s1=1;
                else if(i==0 || j==0 )
                    s2=1;
                else
                    s3=1;

            }

        }
    }
    if(s1!=0)
        printf("1");
    else if(s2!=0)
        printf("2");
    else
        printf("4");

    return 0;
}
