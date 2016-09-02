#include<stdio.h>
int main(int argc, char *argv[])
{
int n,m,h;
int i,s[1000];
int sum=0;
float p1=1,p2=1;
scanf("%d %d %d",&n,&m,&h);// 6 5 3    5 2 3 10 5 sum =22   22 +3- 6=19   22+3-1=24  24 23 22 21 20
for(i=1;i<=m;i++)
{scanf("%d",&s[i]);
 if(i!=h)
 sum+=s[i];
}
int j;

for(j=1;j<n;j++)  // 1 2 3 4 5 6  22+3-1 24  22-6+3 19
p1*=(sum+s[h]-j);
// p1=1*(2+2-1)*(2+2-2)*(2+2-3)=3*2*1  22+3-6    22+3-1  19  24   24 23 22 21 20

for(j=0;j<n-1;j++)// 0 5
p2*=(sum-j);

 if(sum+s[h]==n )
{
if(s[h]==1)
printf("0.00000\n");
else
printf("1\n");
}

else if(n>sum+s[h])
printf("-1");
else
printf("%0.10f",1-p2/p1);
return 0;
}


// 22    22 21 20 19 18