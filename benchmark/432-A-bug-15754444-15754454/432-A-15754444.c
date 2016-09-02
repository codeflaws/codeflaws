
#include<stdio.h>


 int main(int argc, char *argv[])
 {
 int i=0,n=0,k=0,count=0;
 int chances[2000];
 scanf("%d",&n);
  scanf("%d",&k);
 for(i=0;i<n;i++)
 {
     scanf("%d",&chances[i]);
 }


  for(i=0;i<n;i++)
    {
        if(n-chances[i]>=k)
            count++;
        }
  printf("%d",count/3);

 return 0;
 }
