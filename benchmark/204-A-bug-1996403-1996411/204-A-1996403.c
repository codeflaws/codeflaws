#include<stdio.h>
#include<math.h>
#include<string.h>
long long Count(char *s,int n){
  long long t=0,i,j,m=0,p=0;
    for(i=0;i<n;i++)s[i]-='0';
    if(n==1)          t=s[0];
    else if(n==2){
        if(s[0]<=s[1]) t=s[0]+9;
        else   t=9+s[0]-1;
    }
    else if(n==3){
        t=18;
        if(s[0]<=s[2])
            t=t+(s[0]-1)*10+s[1]+1;
        else 
            t=t+(s[0]-1)*10;
    }
    else {
        t=18;m=9;
        for(i=3;i<n;i++){
            m*=10;
            t+=m;
        }
        p=(s[0]-1);i=n-2;
        while(i>0){p*=10;i--;}
        t+=p;
        if(s[0]<=s[n-1]){
            for(i=1;i<=n-2;i++){
                if(i<n-2)p=s[i];
                else p=(s[i]+1);
                j=n-2-i;
                while(j>0){p*=10;j--;}
                t+=p;
   
            }
        }
        else{
            for(i=1;i<n-1;i++){
                p=s[i];
                j=n-2-i;
                while(j>0){p*=10;j--;}
                t+=p;
            }
        }
    }
     return t;
}
int main(int argc, char *argv[]){
    int n1,n2;
    char a[20],b[20];
    long long count,t1,t2;
    while(scanf("%s %s",a,b)!=EOF){
        n1=strlen(a);n2=strlen(b);
        t2=Count(b,n2);
        t1=Count(a,n1);
        if(a[0]==a[n1-1])t1-=1;
        count=t2-t1;
        printf("%I64d\n",count);
    }
    return 0;
}
