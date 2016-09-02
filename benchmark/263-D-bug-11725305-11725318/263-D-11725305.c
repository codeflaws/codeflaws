#include<stdio.h>
#include<stdlib.h>
typedef struct a{
    int x;
    struct a *o;
}a;
a *A[100007], *p; char H[100007],h[100007];
int Q[100007],W[100007],n,t,w,i,k,s;
void f(int t){

   //  printf("%d ",t);
    if(t == i && s) { if(s > w) {printf("asdasd%d\n",s); for(i=0;i<s;i++) printf("%d ",Q[i]); exit(0);} else return; }
    Q[s] = t;
    a *q = A[t];
    for(; q ; q = q -> o)
       if(!H[q -> x] && !h[q -> x]){
        h[q -> x] = 1;
        s++; f(q -> x); s--;
        }
}
int main(int argc, char *argv[]){
    scanf("%d %d %d",&n,&t,&w);
    while(t--){
        scanf("%d %d",&i,&k);
        W[i]++; W[k]++;
       	p = (a *) malloc (sizeof(a)); p -> x = k;
		if(A[i]) p -> o = A[i]; else p -> o = NULL; A[i] = p;
		p = (a *) malloc (sizeof(a)); p -> x = i;
		if(A[k]) p -> o = A[k]; else p -> o = NULL; A[k] = p;
    }
    for(i=1;i<=n;i++)
       if(W[i] == 1){ k = i;
           while(W[k] == 1){
              H[k] = 1;
              k = A[i] -> x;
              W[k]--;
           }
       }
    for(i=1;i<=n;i++) if(!H[i]) f(i), memset(h , 0 , 100007);
}
