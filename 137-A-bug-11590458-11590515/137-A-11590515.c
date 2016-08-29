#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
    char st[200];
    int i,l,k,m;
    scanf("%s",st);
    l=strlen(st);
    k=0;
    for(i=0;i<l;i++)
    {
        m=0;
        while(st[i]==st[i+1]&&m<5)
        {
            i++;
            m++;
        }
        if(m==5)
        i--;
        k++;
    }
    printf("%d\n",k);
    return 0;
}
