#include<stdio.h>
int main(int argc, char *argv[])
{
    int n,d,t[100000],a,m,l,i,sum=0,count=0,total=0;
    scanf("%d %d",&n,&d);
    for(i=0;i<n;i++)
    {
        scanf("%d",&t[i]);
        sum=sum+t[i];
        
        }
    a=sum+(n-1)*10;
    m=d-a;
    if(a<0) printf("-1");
    else {
        l=(m+(n-1)*10)/5;
        printf("%d",l);
        
    }
    //printf("%d ",sum+count+5);
    
    //else printf("-1");
    
return 0;
}