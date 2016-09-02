
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
/*               Author : Sarvesh Mahajan
                        IIIT, Hyderabad                                  */
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#define max(a,b) ((a)>(b))?(a):(b)
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
//#define MAX 100005
//int a[MAX];
       int compare(const void *a,const void *b)
       {
       return *(int *)a-*(int *)b;
       }
int freqi[15],freq[15];
char s[100005],s1[100000];
int main(int argc, char *argv[])
{
    int i,n,ans,k,l,m,t;
   ss(s1);
   l=strlen(s1);
   loop(i,l)
   {
	   if(s1[i]=='9')
		   s1[i]='6';
	   if(s1[i]=='5')
		   s1[i]='2';
   }
   loop(i,l)
	   freqi[s1[i]-'0']++;
   ss(s);
   l=strlen(s);
   loop(i,l)
   {
	   if(s[i]=='9')
		   s[i]='6';
	   if(s[i]=='5')
		   s[i]='2';
   }

   loop(i,l)
	   freq[s[i]-'0']++;
   int mini=999999999;
   loop(i,10)
   {
	   if(freqi[i])
	   {
		   ans=freq[i]/freqi[i];
		   if(ans)
		   {
			   if(ans<mini)
				   mini=ans;
		   }
	   }
   }
   pi(mini);



  
  // while(t--)
   // {
	  

    
     
    return 0;
    
}

