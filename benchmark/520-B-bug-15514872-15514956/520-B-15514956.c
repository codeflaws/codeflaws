#include<stdio.h>
int main(int argc, char *argv[])
{
    int n,m,count=0;
    scanf("%d %d",&n,&m);
    if(n>=m)
    {
        printf("%d",n-m);
    }
    else
    {
        while(n<m)
        {
            if(m%2==0)
            {
                m=m/2;
                count++;
            }
            else if(m%2!=0)
            {
                m=m+1;
                count++;
            }
        }
        count=count+abs(n-m);
        printf("%d",count);
    }
return 0;
}
