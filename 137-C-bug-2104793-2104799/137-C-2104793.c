#include<stdio.h>
  void merge(long int a[],long int b[],long int p,long int q,long int r)
   { long int i,j,k,l[100000],r1[100000],n1,n2,l2[100000],r2[100000];printf("JJJ\n");
     n1=q-p+1;
     n2=r-q;
     for(i=0;i<n1;i++)
        {l[i]=a[p+i];
        l2[i]=b[p+i];}
     for(j=0;j<n2;j++)
       {r1[j]=a[q+j+1];
       r2[j]=b[q+j+1];}
     l[n1]=1000000001;
     r1[n2]=1000000001;

     i=0;
     j=0;

    for(k=p;k<=r;k++)
    {  if(l[i]<=r1[j])
      {  a[k]=l[i];
         b[k]=l2[i];
          i++;}
       else
       { a[k] =r1[j];
         b[k]=r2[j];
          j++;
         }}
         }

void mergesort(long int a[],long int b[],long int p,long int r)
   {long int q;

     if(p<r)
     {
     q=(r+p)/2;
     mergesort(a,b,p,q);
     mergesort(a,b,q+1,r);

     merge(a,b,p,q,r);
     }

     }

int main(int argc, char *argv[])
{
  long int a[100000],b[100000],i,y,x,c,n;

 scanf("%ld",&n);

 for(i=0;i<n;i++)
   scanf("%ld%ld",&a[i],&b[i]);
   mergesort(a,b,0,n-1);
   
  c=0;
  y=b[0];
  x=1;
         for(i=0;i<n;i++)
    {   if(b[i]>y)
      { c=c+i-x;
        y=b[i];
        x=i+1;


      }}
    c=c+n-x;

   printf("%ld",c);
   return 0;
   }

