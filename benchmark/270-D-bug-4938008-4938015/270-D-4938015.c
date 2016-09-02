
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
/*               Author : Sarvesh Mahajan
                        IIIT, Hyderabad                                  */
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int max(a,b) {return ((a)>(b))?(a):(b);}

#define min(a,b) ((a)<(b))?(a):(b)
#define si(n) scanf("%d",&n)
#define ss(s) scanf("%s",s)
#define sort(a,n) qsort(a,n,sizeof(int),compare)
#define pi(n) printf("%d ",n)
#define ps(s) printf("%s",s)
#define loop(i,n) for(i=0;i<n;i++)
#define Loop(i,n) for(i=1;i<=n;i++)
#define For(i,j,n) for(i=j;i<=n;++i)
typedef long long int lld;
#define MAX 10005
int a[MAX];
       int compare(const void *a,const void *b)
       {
       return *(int *)a-*(int *)b;
       }
int LIS[5003];
int main(int argc, char *argv[])
{
    int i,n,j,ans,k,l,m,t;
    double x;
  // si(t);
  // while(t--)
   // {
   si(n);
   si(m);
   int gmax=1;
   loop(i,n)
   {
	   si(a[i]);
	   scanf("%lf",&x);
   }
   //Find LIS
   loop(i,n) 
   LIS[i]=1;

   for(i=1;i<n;++i)
   {
	   for(j=0;j<i;++j)
	   {
		   if(a[j]<=a[i])
		   {
			   LIS[i]=max(LIS[i],LIS[j]+1);
		   }

	   }
	gmax=max(gmax,LIS[i]);
   }
   pi(n-gmax);



    
   


	  

    
      
    return 0;
    
}

