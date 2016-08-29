#include<stdio.h>
int main(int argc, char *argv[])
{
    int a[101];
    int i,v=0,n,temp,j,s=0;
    for(i=0;i<101;i++)
    {
                      a[i]=0;
    }
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
                    scanf("%d",&temp);
                    a[temp]++;
    }
    for(i=0;i<101;i++)
    {
                      if(a[i]>=2)
                      {
                                 if(a[i]%4==0)
                                 {
                                              j=a[i]/4;
                                              s=s+j;
                                 }
                                 else
                                 {
                                     while(a[i]>=2)
                                     {
                                                  a[i]=a[i]/2;
                                                  if(v==0)
                                                  v++;
                                                  else if(v==1)
                                                  {
                                                       v=0;
                                                       s++;
                                                  }
                                     }
                                 }
                      }
                                                  
                                
    }
    printf("%d\n",s);
    scanf("%d",&n);
    return 0;
}    
                                                     
                                                  
                                   
                                   
