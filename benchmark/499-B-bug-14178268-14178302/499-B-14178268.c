#include <stdio.h>
#include <string.h>

char a[4000][12],b[4000][12],c[4000][12],str[4000][12];
int i,j,k,n,m,len1,len2;

int main(int argc, char *argv[])
{
    //char a[100],b[100],c[100],str[100000];
    //int i,j,k,n,m,len1,len2;
    scanf("%d %d",&n,&m);
    for(i=0; i<m; i++)
    {
        scanf("%s %s",a[i],b[i]);
    }
    for(i=0; i<m ; i++)
    {
        //scanf("%s",b[i]);
        len1=strlen(a[i]);
        len2=strlen(b[i]);
        if(len1<=len2)
            strcpy(c[i],a[i]);
        else
            strcpy(c[i],b[i]);
    }
    for(i=0; i<n; i++)
    {
        scanf("%s",str[i]);
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(strcmp(str[i],a[j])==0 || strcmp(str[i],b[j])==0)
                strcpy(str[i],c[j]);
        }
    }
    for(i=0; i<n; i++)
        printf("%s ",str[i]);
    return 0;
}
