#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[])
{
    char a[100];
    int i,j,flag=0;

    scanf("%s",a);
    j=strlen(a);

    for(i=0;i<j;i++)
    {
        if(a[i]=='H'){flag=1;break;}
        if(a[i]=='Q'){flag=1;break;}
        if(a[i]=='9'){flag=1;break;}
        if(a[i]=='+'){flag=1;break;}
    }

    if(flag==1)printf("YES");
    else printf("NO");

    return 0;
}
