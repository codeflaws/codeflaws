#include <stdio.h>
int main(int argc, char *argv[])
{
    int i, flag=0, r1, r2, c1, c2, d1, d2, a, b, c, d, ar[1000];
    scanf("%d %d %d %d %d %d", &r1, &r2, &c1, &c2, &d1, &d2);
    for(a=1; a<(r1%10); a++)
    {
        //printf("a=%d ", a);
        for(i=1; i<=1000; i++)
            ar[i]=0;
        ar[a]=1;
        if(a>=c1 || a>=d1)
        {
            //printf("continuing when a=%d\n", a);
            continue;
        }
        b=r1-a;
        if(ar[b]==1)
            continue;
        else
            ar[b]=1;
        if(b>=c2 || b>=d2)
        {
            continue;
        }
        c=c1-a;
        if(ar[c]==1)
            continue;
        else
            ar[c]=1;
        if(c>=r2 || c>=d2)
        {
            continue;
        }
        d=d1-a;
        if(ar[d]==1)
            continue;
        if(d>=r2 || d>=c2)
        {
            continue;
        }
        if(b+c!=d2)
            continue;
        if(b+d!=c2)
            continue;
        if(c+d!=r2)
            continue;
        if(a>9 || b>9 || c>9 || d>9)
            continue;
        flag=1;
        break;
        //}
    }
    if(flag==1)
        printf("%d %d\n%d %d\n", a, b, c, d);
    else
        printf("-1\n");
    return 0;
}