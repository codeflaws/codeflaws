#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char a[100001], b[100001], c[1000001];
    int i,n,j,m,z,k;
    gets(a);
    n=strlen(a);
    for(i=0;i<n;i++)
    {
        if(a[i]==' ' || a[i]==2)
        {
            if(a[i+1]==' ')
                a[i+1]=2;
        }
    }

    for(i=0,j=0;i<n;i++,j++)
    {
        if(a[i]==2)
            j--;
        else
            b[j]=a[i];
    }
    m=strlen(b);

    for(i=0;i<m;i++)
    {
        if(b[i]==' ')
        {
            if(b[i+1]==',' || b[i+1]=='!' || b[i+1]=='?' || b[i+1]=='.')
                b[i]=2;
        }
    }
   // puts(b);

    for(i=0,j=1,k=0;k<m*2-1;i=i+2,j=j+2,k++)
    {
        c[i]=b[k];
        c[j]=' ';

    }
    //puts(c);

    z=strlen(c);

    for(i=0;i<z;i++)
    {
        if(c[i]==',' || c[i]=='!' || c[i]=='?' || c[i]=='.')
        {
            if(c[i+1]!=' ')
                c[i+1]=3;
        }

    }
    for(i=0;i<z;i++)
    {
        if(c[i]==3)
            printf(" ");
        if(i%2==0 && c[i]!=2)
            printf("%c", c[i]);
    }

    return 0;
}
