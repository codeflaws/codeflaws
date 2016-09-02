#include<stdio.h>
int a[100000];
int main(int argc, char *argv[])
{
   long long int i,j,k,l,sum=0,m,s,p;
   scanf("%lld %lld",&m,&s);
   for(i=0;i<m;i++)
   {
       scanf("%lld",&a[i]);
   }
   for(i=0;i<m;i++)
   {
       for(j=0;j<m-1;j++)
       {
           if(a[j+1]<a[j])
           {
               k=a[j];
               a[j]=a[j+1];
               a[j+1]=k;
           }
       }
   }
  //for(i=0;i<s;i++)printf("%d\t",a[i]);
  for(i=0;i<s;i++)
  {
      if(a[i]<0){
      sum+=a[i];}
       //printf("%lld\t",sum);
  }
   printf("%lld",-sum);
   return 0;

}
