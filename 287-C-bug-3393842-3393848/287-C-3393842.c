#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define max(a,b) a>=b?a:b
#define min(a,b) a<b?a:b
#define MOD 1000000007
/*int main(int argc, char *argv[]){
 long long int n,m;
 scanf("%lld%lld",&n,&m);
 long long int sum=((m-1)*(m-2))/2;
 n-=2;
 printf("%lld",binary_begin(n, m-1, 1, sum));
 }
 
 */
int main(int argc, char *argv[]){
    int n,i=0,cnt=0;
    scanf("%d",&n);
    int a[n+1],b[100005]={0};
    if(n==1){
        printf("1\n");
        return 0;
    }
    else if(n<=3 || n%4!=0){
        printf("-1\n");
        return 0;
        
    }
    else if(n==3){
        printf("3 1 2\n");
        return 0;
    }
    else{
        if(n&1){
            a[n/2 +1]=n/2+1;b[n/2+1]=1;
            cnt++;
        }
        i=1;
        int j=i+1;
        int top=1;
        while(top<=n){
            i=top;
            j=i+1;
            if(b[top]==0 &&  ((n-cnt>4 &&log(n)!=(int)log(n)) || n-cnt>2) ){
                if(b[i]==0){
                    a[i]=j;b[i]=1;}
                if(b[j]==0){
                    a[j]=n-i+1;b[j]=1;
                }
                j=n-j+1;
                i=n-i+1;
                if(b[i]==0){
                    a[i]=j;b[i]=1;
                }
                if(b[j]==0){
                    a[j]=n-i+1;b[j]=1;
                }
                cnt+=4;
            }
            else if(b[top]==0){
                a[i]=j;b[i]=1;
                a[j]=i;b[j]=1;
                cnt+=2;
            }
            top++;
        }
    }
    i=1;
    while (i<=n) {
        printf("%d ",a[i]);
        i++;
    }
    printf("\n");
    return 0;
}