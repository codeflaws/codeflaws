#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
    int n,k,i,start;
    char *s;
    scanf("%d %d",&n,&k);
    s=(char *)malloc(sizeof(char)*n);
    scanf("%s",s);
    start=(k-1<(n-k)?0:n-1);
    if(start==0)
    {
        while(k!=1)
        {
            printf("LEFT\n");
            k--;
        }
        i=0;
        while(i!=n)
        {
            printf("PRINT %c\n",s[i]);
            i++;
            if(i!=n)
             printf("RIGHT\n");
        }
    }
    else
    {
        while(k!=n)
        {
            printf("RIGHT\n");
            k++;
        }
        i=n-1;
        while(i!=-1)
        {
            printf("PRINT %c\n",s[i]);
            i--;
            if(i!=-1)
             printf("LEFT\n");
        }
    }
    free(s);
    return 0;
}