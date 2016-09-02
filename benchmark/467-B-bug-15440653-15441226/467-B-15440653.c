#include<stdio.h>
int main(int argc, char *argv[])
{
      int n,m,k,a[1000],i,j,p,f,c=0,res=0;
         scanf("%d%d%d",&n,&m,&k);
              for(i=0;i<=m;i++)
                  scanf("%d",&a[i]);
                     f=a[m];
                 
                   for(i=0;i<m;i++) {
                      c=0;p=1;   
                      for(j=0;j<n;j++) {
                          if((!(f&p)&&a[j]&p)||(f&p&&!(a[j]&p)))
                                c++;
                          p=p*2; 
                      } 
                          if(c<=k)
                                 res++;    
                   }
                   printf("%d",res);
       return 0;
}



