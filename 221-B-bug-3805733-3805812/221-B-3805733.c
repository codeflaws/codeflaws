#include<stdio.h>
int main(int argc, char *argv[])
{
 int x,n,i,j,t,z;
 int a[10],b[10];
    while(scanf("%d",&x)!=EOF)
    { 
        for(i=0;i<10;i++)           
         a[i]=b[i]=-1;
         t=x;
        do  
        {                  
            z=t%10;
            a[z]=1;         
        } 
        while(t=t/10);
        for(i=1,n=0;i*i<=x;i++)         
        {
            if(x%i==0)
            {
                t=i;
                do
                {
                     if(a[t%10]==1)
                     { 
                     n++;
                     t=0;
                     }                           
                }
                while(t=t/10);
                t=x/i;
                do
                {
                    if(a[t%10]==1)
                     { 
                     n++;
                     t=0;
                     }
                }
                while(t/=10);
            }
            else continue;
        }    
        printf("%d\n",n);
    }
return 0;
}
