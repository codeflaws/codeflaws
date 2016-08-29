#include <stdio.h>

int s[2000];
int abs(int x)
{
    if(x<0) return x*=(-1);
    else return x;
}

int main(int argc, char *argv[])
{
    int n,x,i,sum=0,rest,ans=0;
    scanf("%d%d",&n,&x);
    for(i=1;i<=n;i++){
        scanf("%d",&s[i]);
        sum+=s[i];
    }
    rest=0-sum;
    if(rest==0) return 0;
    else if(abs(rest)<=x) {ans++;printf("%d\n",ans);return 0;}
    else if(abs(rest)>x){
        int p,d=0;
        if(rest<0){
            p=x;
            while(rest!=0){
                if(abs(rest)>=p) {rest+=p;d++;}
                else if(abs(rest)<p) p-=1;
            }
        }
        else if(rest>0){
            p=-x;
            while(rest!=0){
                if(abs(rest)>=abs(p)) {rest+=p;d++;}
                else if(abs(rest)<abs(p)) p+=1;
            }
        }
        printf("%d\n",d);
    }
    return 0;
}
