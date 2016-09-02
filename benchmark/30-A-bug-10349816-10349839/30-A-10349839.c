#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int puiss (int z , int n){
    int i,p=1 ;
    for(i=0;i<n;i++) {p*=z;}
    return p;
}
int main(int argc, char *argv[])
{   int a,b,n,c=0,d,x;
    scanf("%d %d %d",&a,&b,&n);
    if (a<0) {c++;a=-a;}
    if (b<0) {c++;b=-b;}
    int z;
    if(a==0) { if(b==0) printf("1"); else printf("No solution");}
    else {
    if(b%a!=0) printf("No solution");
    else
    {
    z=0;
    d=b/a;
    x=puiss(z,n);
    if(n==1) { if(c==1) printf("%d",-d); else printf("%d",d);}else {
        while (x<d)
        {
            z++;
            x=puiss(z,n);
        }
    if (x>d) {printf("No solution");}
    else { if(c==1) printf("%d",-z); else printf("%d",z);}
    }}}

    return 0;
}
