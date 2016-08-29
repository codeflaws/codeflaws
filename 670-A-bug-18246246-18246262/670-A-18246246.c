#include<stdio.h>
int main(int argc, char *argv[])
{
int n;
scanf("%d",&n);
int i,max=0,min=0;
for(i=1;i<=n;i++){
if(i%7 == 1 || i%7 == 2) max++;
if(i%7 == 5 || i%7 == 6) min++;
}
printf("%d %d",min,max);
return 0;
}
