#include<stdio.h>
char s[100001];
int main(int argc, char *argv[])
{
    int x,i,y,x1,y1,c=1,l,p,q;
    scanf("%d%d%d%d",&x,&y,&x1,&y1);
    static int a[500][500];
    scanf("%s",s);
    l=strlen(s);
    printf("1 ");
    p=x1-1;
    q=y1-1;
    for(i=0;i<l-1;i++)
    {
        if(s[i]=='U')
        {
            if(p-1>=0)
            {
                p--;
                if(a[p][q]!=1)
                {
                    printf("1 ");
                    a[p][q]=1;
                    c++;
                }
                else
                    printf("0 ");
            }
                else
                    printf("0 ");
        }
        if(s[i]=='L')
        {
            if(q-1>=0)
            {
                q--;
                if(a[p][q]!=1)
                {
                    printf("1 ");
                    a[p][q]=1;
                    c++;
                }
                else
                    printf("0 ");
            }
                else
                    printf("0 ");
        }
        if(s[i]=='R')
        {
            if(q+1<y)
            {
                q++;
                if(a[p][q]!=1)
                {
                    printf("1 ");
                    a[p][q]=1;
                    c++;
                }
                else
                    printf("0 ");
            }
                else
                    printf("0 ");
        }
        if(s[i]=='D')
        {
            if(p+1<x)
            {
                p++;
                if(a[p][q]!=1)
                {
                    printf("1 ");
                    a[p][q]=1;
                    c++;
                }
                else
                    printf("0 ");
            }
                else
                    printf("0 ");
        }
    }
    printf("%d",x*y-c);
    return 0;
}
