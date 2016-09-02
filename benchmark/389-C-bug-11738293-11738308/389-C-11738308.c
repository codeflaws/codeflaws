#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int n,bank[105],pile,i,j,block;

    while(scanf("%d",&n)!=EOF)
    {
        for(i=0;i<=100;i++)
            bank[i]=0;

        for(i=0;i<n;i++)
        {
            scanf("%d",&j);
            bank[j]++;
        }

        pile=0;
        block=n;

        while(block>0)
        {
            for(i=100;i>=0;i--)
            {
                if(bank[i]>0)
                {
                //    printf("%d\t%d\n",pile,i);
                    bank[i]--;
                    block--;
                }
                else
                {
                    for(j=i;j<=100;j++)
                    {
                        if(bank[j]>0)
                        {

                  //  printf("%d\t%d\t%d\n",pile,i,j);
                            bank[j]--;
                            block--;
                            break;
                        }
                    }
                }
            }
            pile++;
        }
        printf("%d\n",pile);
    }



  return 0;
}

