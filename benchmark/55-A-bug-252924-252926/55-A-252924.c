#include <stdio.h>

int main(int argc, char *argv[])
{
    int n;
    scanf("%d", &n);
    int nv = n - 1;
    int c = 0;
    int k = 1;
    int p = 0;
    char sp[1001];
    char v[1001]; 
    int i;
    for(i == 0; i < 1001; i++)
    {
        sp[i] = 0;
        v[i] = 0;
    }
    while((nv > 0) && (c == 0))
    {
        if(k==0)
        {
            if(sp[p] == 1)
                c = 1;
            sp[p] = 1;
            k = 1;
        }
        if(v[p] == 0) nv--;
        v[p] = 1;
        p = (p + k) % n;
        k = (k + 1) % n;
    }
    if(nv == 0)printf("YES");
    else printf("NO");
    return 0;
}