#include<stdio.h>
int main(int argc, char *argv[])
{
       int i=-1,n;
       scanf("%d",&n);
       if(n>1)
       for(i=n;i>=1;i--)
       { if(i>1)printf("%d ",i);else printf("%d",i); }
       else printf("%d",i);
       return 0;
}
