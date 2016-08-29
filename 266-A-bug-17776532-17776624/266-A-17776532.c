#include<stdio.h>
int main(int argc, char *argv[])
{
    int i,n,count=0;
    char color[100];
    scanf("%d",&n);
    fflush(stdin);
    gets(color);
    for(i=0;i<n;i++)
    {
      if(color[i]==color[i+1]) count++;
    }
    printf("%d\n",count);
    return 0;
}
