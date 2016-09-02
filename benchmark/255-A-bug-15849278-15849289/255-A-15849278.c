#include <stdio.h>


int main(int argc, char *argv[])
{
    int n;
    
    scanf ("%d",&n);
    if (n==1)
    printf ("chest");
    else
    {
    int a[n],z[3]={0};
    
    for (int i=0;i<n;i++)
    {
        scanf ("%d",&a[i]);
        }
        for (int i=0;i<n;i=i+3)
        {
            z[0]=z[0]+a[i];
            }
            
            for (int i=1;i<n;i=i+3)
        {
            z[1]=z[1]+a[i];
            }
            for (int i=2;i<n;i=i+3)
        {
            z[2]=z[2]+a[i];
            }
            
            printf ("%d %d %d\n",z[0],z[1],z[2]);
            
            
            if (z[0]>z[1]&&z[0]>z[2])
            printf ("chest");
            if (z[1]>z[0]&&z[1]>z[2])
            printf ("biceps");
            if (z[2]>z[1]&&z[2]>z[0])
            printf ("back");
            
            
            }   
        
        
        return 0;
        }
        
        
