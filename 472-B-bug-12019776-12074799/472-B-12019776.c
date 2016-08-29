#include <stdio.h>

int main(int argc, char *argv[])
{
    int n, k, f[2015], tmp, i, j, time=0;
    scanf("%d %d", &n, &k);
    for(i=0; i<n; i++)scanf("%d", &f[i]);

    for(j=0;j<n;j++)
    {
        for(i=0;i<n-1;i++)
        {
            if(f[i]>f[i+1])
            {
                tmp=f[i];
                f[i]=f[i+1];
                f[i+1]=tmp;
            }
        }
    }

    for(i=0; i<n; i+=k)
        time+=((f[i]-1)*2);

    printf("%d\n", time);

 //   main(int argc, char *argv[]);

    return 0;
}
