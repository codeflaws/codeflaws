#include<stdio.h>
int n,a[205],i,ma=0,mi=200;
int main(int argc, char *argv[])
{scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d",&a[i]);
if(a[i]<mi) mi=a[i];
if(a[i]>ma) ma=a[i];}
for(i=0;i<n;i++) if(a[i]==ma){ ma=i; break;}
for(i=n-1;i>=0;i--) if(a[i]==mi){ mi=i; break;}
printf("mi = %d ma = %d\n",mi,ma);
printf("%d",mi<ma?n-mi+ma-2:n-mi+ma-1);
return 0;
}
