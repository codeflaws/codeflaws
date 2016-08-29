#include<stdio.h>
int main(int argc, char *argv[])
{
    int a,b,c,i,j,x,f=0;
    scanf("%d%d%d",&a,&b,&c);
    if(c==0)
    {
        if(a==c)f=1;
    }
    else if (c==1&&b>=a)f=1;
    else if (c==-1&&b<=a)f=1;
    
    else if(c>1)
    {
    for(i=a;i<=b;i=i+c)
    {
        if(i==b)
        {
            f=1;
            break;
         }
        
    }
    }
    else if(c<-1){
    for(i=a;i>=b;i=i+c)
    {
        if(i==b)
        {
            f=1;
            break;
         }
     }
     }
    
    if(f==1)printf("YES");
    else printf("NO");
return 0;
}