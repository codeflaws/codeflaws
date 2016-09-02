#include<stdio.h>
#include<math.h>
#define si(n) scanf("%d",&n)
#define rep(i,n) for(i=0;i<n;i++)
#define REP(i,a,b) for(i=a;i<b;i++)
#define pn printf("\n")
#define ps printf(" ")
#define pi(n) printf("%d",n)
#define pll(n) printf("%llu",n)
#define sll(n) scanf("%llu",&n)
#define ss(s) scanf("%s",s)
 int cmp(const void *a,const void *b)
{
    return *(int *)a-*(int *)b;
}
 
int main(int argc, char *argv[]){
int n,m,k,d,i,a[205]={0},j,sum=0,c,ans=0;
si(n);si(m);si(d);k=n*m;
rep(i,k){scanf("%d",&a[i]);}
//rep(i,n){rep(j,m){pi(a[i][j]);ps;};pn;}
qsort(a,k,sizeof(int ),cmp);
c=a[(k/2)];//pi(c);pn;rep(i,k){pi(a[i]);ps;}pn;
rep(i,k){if((abs(c-a[i]))%d!=0){pi(-1);return 0;}ans+=(abs(c-a[i]))/d;}
pi(ans);
 
 }