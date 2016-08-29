#include<stdlib.h>
typedef struct a{
    int x;
    struct a *o;
}a;
a *A[100007], *p; char H[100007];
int Q[100007],n,w,i,k,s;
void f(int x){

    if(x == i && s) { if(s > w) {printf("%d\n",s); for(i=0;i<s;i++) printf("%d ",Q[i]); exit(0);} else return; }
    Q[s] = x;
    a *p = A[x];
    for(; p ; p = p -> o)
       if(!H[p -> x]){
          H[p -> x] = 1;
          s++; f(p -> x); s--;
       }
}
int main(int argc, char *argv[]){
    scanf("%d %d %d",&n,&s,&w);
    while(s--){
        scanf("%d %d",&i,&k);
       	p = (a *) malloc (sizeof(a)); p -> x = k;
		if(A[i]) p -> o = A[i]; else p -> o = NULL; A[i] = p;
		p = (a *) malloc (sizeof(a)); p -> x = i;
		if(A[k]) p -> o = A[k]; else p -> o = NULL; A[k] = p;
    }
    for(i=1;i<=n;i++) f(i), memset(H , 0 , 100007);
}
