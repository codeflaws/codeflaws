#include <stdio.h>
int main(int argc, char *argv[])
{
    int n, i, a[1000011], g[1000011], aa=0, gg=0;
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d %d", &a[i], &g[i]);
        aa+=a[i];
        gg+=g[i];
    }
    aa=0, gg=0;
    printf("A");
    for(i=1; i<n; i++)
    {
        /*if(abs(aa-gg)==0)
        {
            printf("A");
            aa+=a[i];
        }*/
        if(aa+a[i]-gg<=500)
        {
            printf("A");
            aa+=a[i];
        }
        else if(gg+g[i]-aa<=500)
        {
            printf("G");
            gg+=g[i];
        }
    }
    return 0;
}