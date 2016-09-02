#include<stdio.h>
int main(int argc, char *argv[])
{
    //freopen("in.txt","r",stdin);
    char a[3005];
    int p[30];
    int i,s=0;
    for(i=0;i<30;i++)
        p[i]=0;
    gets(a);
    for(i=0;a[i]!='\0';i++)
        p[a[i]-'a']++;
    for(i=0;i<26;i++)
    {
        if(p[i]%2!=0)
           s++;
    }
    if(s%2!=0)
        printf("First\n");
    else
        printf("Second\n");
    return 0;
}
