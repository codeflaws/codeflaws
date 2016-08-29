#include<stdio.h>
int main(int argc, char *argv[])
{
    int n,m,i,j,x=0;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
    {
        if(i%2==0) for(j=0;j<m;j++) printf("#");
        else if(i%2!=0)
        {
            if(x%2==0)
            {
                for(j=0;j<m-1;j++) printf(".");
                printf("#");
                x++;
            }
        else if(x%2!=0)
        {
            printf("#");
            for(j=0;j<m-1;j++)
            {
                printf(".");
            }
        }

        }

        printf("\n");
    }
    return 0;
}

