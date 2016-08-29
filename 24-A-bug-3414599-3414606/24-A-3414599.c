#include<stdio.h>
int city1[105],city2[105],cost[105],n;
void solve();
int main(int argc, char *argv[])
{
scanf("%d",&n);
solve();
return 0;
}
void solve()
{
int i,clockwise=0,anticlockwise=0,q,t,j=0;
anticlockwise+=cost[0];
for(i=0;i<n;i++)
scanf("%d%d%d",&city1[i],&city2[i],&cost[i]);
t=city1[0];
q=city2[0];
j=0;
while(1)
{
for(i=0;i<n;i++)
{
if(q==city2[i]&&t==city1[i])
continue;
if(q==city1[i])
{
anticlockwise+=cost[i];
q=city2[i];
t=city1[i];
break;
}
else if(q==city2[i])
{
clockwise+=cost[i];
q=city1[i];
t=city2[i];
city2[i]=q;
city1[i]=t;
break;
}
}
j++;
if(j==n-1)
break;
}
if(anticlockwise<=clockwise)
printf("%d\n",anticlockwise);
else
printf("%d\n",clockwise);
}
