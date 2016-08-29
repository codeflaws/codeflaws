#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
    int i,j,n,flag=0;
    char a[201],b[201];
    gets(a);
    n=strlen(a);
    for(i=0;i<n;i++)
    {
        if(a[i]=='W'&&a[i+1]=='U'&&a[i+2]=='B')
        {
            i=i+2;
            flag=0;
        }

        else
        {
            for(j=i;j<n;j++)
            {
                if(a[j]=='W'&&a[j+1]=='U'&&a[j+2]=='B') {i=j+2; break;}
                else printf("%c",a[j]);
                flag=1;
            }
        }
        if(flag==1) printf(" ");
    }

    return 0;
}
