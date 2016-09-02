#include<stdio.h>
void merge(long int a[],long int b[],long int p,long int q,long int r)
   { long int i,j,k,l[100000],r1[100000],n1,n2,l2[100000],r2[100000];
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
long int n,x,a[21],b[21],i,s,r;
  scanf("%ld%ld",&n,&x);
  for(i=0;i<x;i++)
  scanf("%ld%ld",&b[i],&a[i]);
  mergesort(a,b,0,x-1);
  r=0;
  s=0;
  for(i=x-1;i>=0&&r<n;i--)
  {  r=r+b[i];
     s=s+a[i]*b[i];

  }
  s=s-(r-n)*a[i+1];
  printf("%ld",s);
return 0;
}




