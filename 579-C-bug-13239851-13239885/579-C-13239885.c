#include <stdio.h>

int main(int argc, char *argv[])
{
int a,b; scanf("%d %d",&a,&b);
double tmp;
int n;
double dotx;
double x;
double da,db;
if(a<b){
printf("-1");
return 0;
}
if(a==b){
tmp=b;
printf("%.10lf",tmp);
return 0;
}

n=a/b;
if(n%2==0)
--n;

da=a;
db=b;

dotx=(da)/(db + da)*(n+1);



x=(da)/dotx;
printf("%.12lf",x);


return 0;
}
