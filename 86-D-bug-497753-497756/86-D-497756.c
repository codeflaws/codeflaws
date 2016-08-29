#include <stdio.h>

#define lowbit(i) ((i)&-(i))

long a[200005]={0};
long hash[1000006]={0};

struct case1
{
 long l,r;
 long num;
}ques[200005]={0};

long long ans[200005]={0};
long s[200005]={0};
long long d[200005]={0};
long n,next[200005]={0};
long pre[200005]={0};
long pos[1000006]={0};

long quick(long x,long y)
{
 long l=(x+y)/2,i=x,j=y;
 struct case1 temp;
 
 for(;i<=j;)
   {
    for(;ques[i].r<ques[l].r;i++);
    if(i<=j)
     {
      temp=ques[i];
      ques[i]=ques[l];
      ques[l]=temp;
      l=i++;
     }
    for(;ques[j].r>ques[l].r;j--);
    if(i<=j)
     {
      temp=ques[j];
      ques[j]=ques[l];
      ques[l]=temp;
      l=j--;
     }
   }
 
 return l;
}

void quicksort(long x,long y)
{
 long l;
 
 if(x<y)
  {
   l=quick(x,y);
   quicksort(x,l-1);
   quicksort(l+1,y);
  }
}

void ins(long x,long long data)
{
 for(;x<=n;x+=lowbit(x))
   d[x]+=data;
}

long long search(long x)
{
 long long s=0;
 for(;x;x-=lowbit(x))
   s+=d[x];
 return s;
}

int main(int argc, char *argv[])
{
 long q,i,j,k;
 long long ss=0;
 
 scanf("%ld%ld",&n,&q);
 for(i=1;i<=n;i++)
   {
    scanf("%ld",&a[i]);
    hash[a[i]]++;
   }
 for(i=1;i<=q;i++)
   {
    scanf("%ld%ld",&ques[i].l,&ques[i].r);
    ques[i].num=i;
   }
 quicksort(1,q);
 
 for(i=1;i<=1000000;i++)
   if(hash[i]>=400)
    {
     for(j=1;j<=n;j++)
       s[j]=s[j-1]+(a[j]==i);
     for(j=1;j<=q;j++)
       ans[ques[j].num]+=(long long)i*(s[ques[j].r]-s[ques[j].l-1])*(s[ques[j].r]-s[ques[j].l-1]);
    }
 
 for(i=1;i<=n;i++)
   {
    pre[i]=pos[a[i]];
    next[pos[a[i]]]=i;
    pos[a[i]]=i;
   }
 
 for(i=1,j=0;i<=q;i++)
   {
    for(;j<ques[i].r;)
      {
       j++;
       if(hash[a[j]]<400)
        {
         for(k=j;k;k=pre[k])
           {
            ins(k,a[j]+(j!=k)*a[j]);
            ss+=a[j]+(j!=k)*a[j];
           }
        }
      }
    ans[ques[i].num]+=ss-search(ques[i].l-1);
   }
   
 for(i=1;i<=q;i++)
   printf("%I64d\n",ans[i]);
 
 return 0;
}
