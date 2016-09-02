#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int check(int n);

char evee[10][20]={"vaporeon", "jolteon", "flareon", "espeon", "umbreon", "leafeon", "glaceon", "sylveon"};
char inp[200];
int n;

int main(int argc, char *argv[])
{
    while(scanf("%d",&n)!=EOF)
    {
        scanf("%s",inp);

        if(n==6)
        {
            if(check(3)==1) return 0;
        }

        else if(n==7)
        {
            if(check(1)==1) return 0;
            if(check(2)==1) return 0;
            if(check(5)==1) return 0;
            if(check(6)==1) return 0;
            if(check(7)==1) return 0;
            if(check(8)==1) return 0;
        }

        else
        {
            if(check(0)==1) return 0;
        }


    }

    return 0;
}


int check(int m)
{
    int test=1,i;
            for(i=0;i<n;i++)
            {
                if(inp[i]!='.')
                {
                    if(inp[i]!=evee[m][i])
                        {
                            test=0;
                            break;
                        }
                }
            }
            if(test==1)
            {
                printf("%s\n",evee[m]);
                return 1;
            }

            return 0;
}
