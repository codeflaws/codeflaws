#include<stdio.h>
#include<string.h>
int n,i,j,t,s,d,u,h[1005],m;
char a[100003],b[100003];
int main(int argc, char *argv[])
{
    scanf("%s",a);u=strlen(a);
    for(;i<u;i++)h[a[i]]++;i=0;
    for(j='z';j>='a';j--)
        while(h[j]&&i<u)
        {
            if(a[i]==j)b[m++]=a[i];
            h[a[i]]--;
            i++;
        }
    printf("%s",b);
    return 0;
}