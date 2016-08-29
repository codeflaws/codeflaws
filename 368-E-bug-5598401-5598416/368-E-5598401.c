#include <stdio.h>
#include <math.h>
#define IsAscending(A,B) (A<=B) 
 #define UP(IA,IB) temp=IA; IA+=IB+1; IB=temp;
 #define DOWN(IA,IB) temp=IB; IB=IA-IB-1; IA=temp; 
 static int q,r,p,b,c,r1,b1,c1;static int *A;void sift(void){int r0,r2,temp;int T;r0=r1;T=A[r0];
 while(b1>=3){r2=r1-b1+c1;if(!IsAscending(A[r1-1],A[r2])){r2=r1-1;DOWN(b1,c1)}
 if(IsAscending(A[r2],T))b1=1;else{A[r1]=A[r2];r1=r2;DOWN(b1,c1)}}if(r1-r0){A[r1]=T;}}
 void trinkle(void){int p1,r2,r3,r0,temp;int T;p1=p;b1=b;c1=c;r0=r1;T=A[r0];while(p1>0){
 while((p1&1)==0){p1>>=1;UP(b1,c1)}r3=r1-b1;if((p1==1)||IsAscending(A[r3],T))p1=0;else{
 p1--;if(b1==1){A[r1]=A[r3];r1=r3;}else if(b1>=3){r2=r1-b1+c1;if(!IsAscending(A[r1-1],A[r2])){
 r2=r1-1;DOWN(b1,c1)p1<<=1;}if(IsAscending(A[r2],A[r3])){A[r1]=A[r3];r1=r3;}else{A[r1]=A[r2];
 r1=r2;DOWN(b1,c1)p1=0;}}}}if(r0-r1)A[r1]=T;sift();}void semitrinkle(void){int T;r1=r-c;
 if(!IsAscending(A[r1],A[r])){T=A[r];A[r]=A[r1];A[r1]=T;trinkle();}}
 void smoothsort(int Aarg[],const int N){int temp;A=Aarg;q=1;r=0;p=1;b=1;c=1;while(q<N){r1=r;
 if((p&7)==3){b1=b;c1=c;sift();p=(p+1)>>2;UP(b,c)UP(b,c)}else if((p&3)==1){if(q+c<N){b1=b;c1=c;
 sift();}else trinkle();DOWN(b,c);p<<=1;while(b>1){DOWN(b,c)p<<=1;}p++;}q++;r++;}r1=r;trinkle();
 while(q>1){q--;if(b==1){r--;p--;while((p&1)==0){p>>=1;UP(b,c)}}else if(b>=3){p--;r=r-b+c;
 if(p>0)semitrinkle();DOWN(b,c)p=(p<<1)+1;r=r+c;semitrinkle();DOWN(b,c)p=(p<<1)+1;}}}
int main(int argc, char *argv[]){
    int *s;
    int n,m,i,f=0;
    scanf("%d%d",&n,&m);
    s=malloc(m*sizeof(int));
    for(i=0;i<m;i++)scanf("%*d%d",&s[i]);
    smoothsort(s,m);
    for(i=pow(2*n,1/2);n>=(i-1-(i-1)/2)*i+i%2;i++);
    if(i-1<m)m=i-1;
    for(i=0;i<m;i++)f+=s[i];
    printf("%d",f);
    return 0;
}
