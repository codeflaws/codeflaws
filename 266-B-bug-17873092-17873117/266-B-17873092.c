#include<stdio.h>
int main(int argc, char *argv[])
{
    int a,b,i,j,k,l,n;


    char ara[1000],temp;
    scanf("%d%d",&a,&b);
    scanf("%c",&n);
    gets(ara);

    for(j=0;j<b;j++)
    {
        for(k=0;k<a-1;k++)
        {
            if(ara[k]=='B')
            {
              temp=ara[k];
              ara[k]=ara[k+1];
              ara[k+1]=temp;
              k=k+1;
            }
        }
    }
    for(l=0;l<a;l++)
    {
        printf("%c",ara[l]);
    }
    return 0;
}
