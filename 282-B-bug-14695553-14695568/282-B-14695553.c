#include<string.h>
#include<math.h>
#include<stdio.h>
int main(int argc, char *argv[])
{
    int n,x,y,sc,gc,l;
    sc=gc=0;
    char a[1000];
    int i=0;
    scanf("%d",&n);
    while(n--)
    {
       scanf("%d %d",&x,&y);
        if(sc+x-gc > 500)
        {
            gc+=y;
            a[i++]='G';
        }
        else
        {
            sc+=x;
            a[i++]='A';
        }
    }
    a[i]='\0';
    if(sc-gc>500 || sc-gc < -500) printf("-1");
    else
    {
        puts(a);
    }
    return 0;
}
