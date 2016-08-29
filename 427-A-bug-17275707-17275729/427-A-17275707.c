#include<stdio.h>
#include<math.h>

int main(int argc, char *argv[])
{
    long long int n,Loop,treat=0,untreat=0;

    scanf("%lld",&n);

    long long int a[n];

    for(Loop=0; Loop<n; Loop++)
    {
        scanf("%lld",&a[Loop]);

        if(a[Loop]<0)
        {
            untreat++;

            if(treat>0)
            {
                treat--;
                untreat--;
            }

        }
        else
            treat=a[Loop];



    }
    printf("%lld\n",untreat);

    return 0;
}
