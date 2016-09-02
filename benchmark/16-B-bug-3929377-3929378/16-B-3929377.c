#include<stdio.h>
#include<string.h>
//#include<math.h>
int cmp(const void *a,const void *b)
{
    return *( long long int *)b-*(long long int *)a;
}
int main(int argc, char *argv[]){
long long int k,a[21],b[21],sum=0,ans=0;int m,i,c,d,swap;
scanf("%lld %d",&k,&m);for(i=0;i<m;i++){scanf("%lld %lld",&b[i],&a[i]);}
//qsort(a,m,sizeof( long long int ),cmp);
for (c = 0 ; c < ( m - 1 ); c++)
  {
    for (d = 0 ; d < m - c - 1; d++)
    {
      if (a[d] < a[d+1]) 
      {
        swap       = a[d];
        a[d]   = a[d+1];
        a[d+1] = swap; 
        swap       = b[d];
        b[d]   = b[d+1];
        b[d+1] = swap;
      }
    }
  }

for(i=0;i<m;i++){printf("%lld %lld\n",b[i],a[i]);}

for(i=0;i<m;i++){if(k>=b[i]){ans+=a[i]*b[i];k-=b[i];}
else{ans+=a[i]*(k);k=0;}if(k==0){break;}
}
printf("%lld",ans);
return 0;}






