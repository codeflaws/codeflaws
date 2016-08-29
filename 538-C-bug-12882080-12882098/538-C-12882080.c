#include <stdio.h>
#define INT_MAX 100000000
#define MMAX 100000

int highest(int pd, int ph, int cd, int ch)
{
    int l=ph,r=INT_MAX;
    while (r-l>1)
    {
        int m=(r+l)/2;
        if (2*m-ph-ch<=cd-pd)
            l=m;
        else
            r=m;
    }
    return l;
}

int main(int argc, char *argv[])
{
    int n,m,i,pd,ph,cd,ch,rs=0;
    scanf("%d%d",&n,&m);
    for (i=0;i<m;i++)
    {
        scanf("%d%d",&cd,&ch);
        if (i>0)
            if (cd-pd<abs(ch-ph))
            {
                rs=-1;
                break;
            }
            else
            {
                int temp=highest(pd,ph,cd,ch);
                rs=(rs>temp)?rs:temp;
            }
        else
            rs=(rs>ch+cd-1)?rs:(ch+cd-1);
        pd=cd;
        ph=ch;
    }
    if (rs==-1)
        printf("IMPOSSIBLE");
    else
        printf("%d",rs>(ph+n-pd)?rs:(ph+n-pd));
    return 0;
}
