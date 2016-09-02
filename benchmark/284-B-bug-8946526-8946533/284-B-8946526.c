#include<stdio.h>
int main(int argc, char *argv[])
{
    int i,n,c=0,d=0,e=0;
    char s;
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        scanf("%c",&s);
        if(s=='A')
            c++;
        else if(s=='F')
            d++;
        else if(s=='I')
            e++;

    }


     if(e>0)
        printf("0");
    else if(e==1)
    printf("1");
    else
        printf("%d",c);
    return 0;

}
