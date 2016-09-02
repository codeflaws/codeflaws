#include <stdio.h>

int main(int argc, char *argv[])
{
    int x,c=0,q=0,s=0,p;
    
    scanf ("%d%d",&x,&p);
    
    int a[x];
    
    for (int i=0;i<x;i++)
    {
        scanf ("%d",&a[i]);
        
        a[i]=a[i]+p;
        
        if (a[i]<=5)
        c++;
        
        if (c%3==0)
        
        s++;
        
        }
        
        printf ("%d",s);
        
        
    
  
        
        
                                    
                                    
                                    return 0;
                                    }
        
    
