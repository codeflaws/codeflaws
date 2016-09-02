#include <stdio.h>

int main(int argc, char *argv[]) {
    // your code goes here
    int n,i,ctr=0,j,t=0;
    
    scanf("%d",&n);
    
    double a[n][2];
    
    for(i=0;i<n;i++)
    {
        scanf("%lf",&a[i][0]);
        a[i][1]=0;
    }
        
    for(i=0;i<n-1;i++)
    {
        if(a[i][1]==0)
        {
            
            for(j=i+1,ctr=0;j<n;j++)
            {
                if(a[i][0]==a[j][0])
                {
                    ctr++;
                    a[j][1]=1;
                }
            }
            
            if(ctr>1)
            {
                printf("%d",-1);
                break;
            }
            if(ctr==1)
                t++;
        }   
        
    }   
    if(i==n-1)
        printf("%d",t);
    
    return 0;
}
