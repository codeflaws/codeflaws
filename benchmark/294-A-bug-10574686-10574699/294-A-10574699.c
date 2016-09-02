#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
   int s,a[10000],t,i,x,y;
   scanf("%d",&s);
   for(i=0;i<s;i++){
    scanf("%d",&a[i]);
   }
   scanf("%d",&t);
   while(t--){
    scanf("%d%d",&x,&y);
    --x;

   if(x!=0){
    a[x-1]=a[x-1]+(y-1);
   }
   if(x!=s+1){
    a[x+1]=a[x+1]+a[x]-y;
    a[x]=0;
   }}
   for(i=0;i<s;i++){
    printf("%d\n",a[i]);
   }
    return 0;
}
