#include <stdio.h>

int main(int argc, char *argv[])
{
    int b, l, s, n, i=-1, lines[100];
    scanf("%d",&n);
    while(++i<n) // Number of birds on line
       scanf("%d",&lines[i]);
    scanf("%d",&s);
    while(s--)
    {
       scanf("%d %d", &l, &b);
       --l;
       if(l>0) //Move down
          lines[l-1]+=(b-1);
       if(l+1<n) //Move up
          lines[l+1]+=lines[l]-b;
       lines[l]=0;
    }
    s=-1;
    while(++s<n)
       printf("%d\n",lines[s]);
    return 0;
}
