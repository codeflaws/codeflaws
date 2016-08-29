#include <stdio.h> 
#include<math.h>
#define si(n) scanf("%d",&n)
#define rep(i,n) for(i=0;i<n;i++)
#define REP(i,a,b) for(i=a;i<b;i++)
#define pn printf("\n")
#define ps printf(" ")
#define pi(n) printf("%d",n)
#define pll(n) printf("%lld",n)
#define sll(n) scanf("%lld",&n)
#define ss(s) scanf("%s",s)
#define mod 1000000000 
/*int pc(int k){
int m,n,i;m=sqrt(k);
if(k==2){return 1;}
if(k%2==0){return -1;}
for(i=3;i<m+2;i++){if(k%i==0){return -1;}}
return 1;}
 int calc(int n,int i){int j,ans=0;
 for(j=1;;j++){ans+=floor(n/pow(i,j));if(floor(n/pow(i,j))==0){return ans;}}}
 
int pw(int a,  int b)
{
int x =1, y = a;
    while(b > 0)
    {
        if(b%2 == 1)
        {
            x=(x*y);
          //  if(x>mod) {x%=mod;}
        }
        y = (y*y);
       // if(y>mod) {y%=mod;}
        b /= 2;
    }
    return x;
}*/

 int min(int a,int b){if(a<b){return a;}return b;}

/* int dp(int i){int x,mini;
 if(i==0){return a[0];}
 if(i==n-1){return a[n-1];}
 mini=(min((dp(temp,a,i-1)+a[i])%100,(dp(temp,a,i+1)+a[i])%100));
 if(mini==(dp(temp,a,i-1)+a[i])%100){ans+=temp[i-1]*a[i];temp[i]=mini;}
 else{ans+=temp[i+1]*a[i];temp[i]=mini;}
 }*/
 
int main(int argc, char *argv[]){//int t,m;si(t);rep(m,t)ans=0;
int n,m,i,k;
      int a[200]={47,74,4477,4747,4774,7447,7474,7744,444777,447477,447747,447774,474477,474747,474774,477447,477474,477744,744477,744747,
      744774,747447,747474,747744,774447,774474,774744,777444,44447777,44474777,44477477,44477747,44477774,44744777,44747477,44747747,
      44747774,44774477,44774747,44774774,44777447,44777474,44777744,47444777,47447477,47447747,47447774,47474477,47474747,47474774,
      47477447,47477474,47477744,47744477,47744747,47744774,47747447,47747474,47747744,47774447,47774474,47774744,47777444,74444777,
      74447477,74447747,74447774,74474477,74474747,74474774,74477447,74477474,74477744,74744477,74744747,74744774,74747447,74747474,
      74747744,74774447,74774474,74774744,74777444,77444477,77444747,77444774,77447447,77447474,77447744,77474447,77474474,77474744,
      77477444,77744447,77744474,77744744,77747444,77774444};
      
si(n);

if(n>77774444){pi(4444477777);}else{rep(i,200){if(a[i]>=n){pi(a[i]);return 0;}}}
return 0;} 