#include<stdio.h>
#define F for(i=1;i<=n;i++)
char A[3003][3003],W[3003][3003],B[3003];
int Q[3003],n,i,j,t,x,s;
void f(int x ,int s){
    int i;
    Q[x] = s;
    F if(W[x][i] && B[i]){
        W[i][x] = 0;
        f(i,s+1);
        }
}
int main(int argc, char *argv[]){
    scanf("%d",&n);
    F{  scanf("%d %d",&t,&j);
        W[t][j] = W[j][t] = A[t][j] = A[j][t] = 1;
    }
    F {x=i; while(1){
        for(s=0,j=1;j<=n;j++)
            if(A[x][j]) s++, t=j;
        if(s == 1) A[x][t] = A[t][x] = 0, B[x] = 1, x = t;
        else break;
    }}
    F if(!B[i]) f(i,0);
    F printf("%d ",Q[i]);
    return 0;
}
