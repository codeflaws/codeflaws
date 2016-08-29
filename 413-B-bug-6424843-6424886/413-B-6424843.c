#include<stdio.h>
long people[20001]={0},room[11]={0},d[20001][11]={0};
int main(int argc, char *argv[]){
long n,m,k,i,j,t1,t2;
scanf("%ld%ld%ld",&n,&m,&k);

printf("%ld %ld %ld",n,m,k);

for(i=1;i<=n;i++)
    for(j=1;j<=m;j++)
    scanf("%ld",&d[i][j]);

for(i=1;i<=k;i++)
{
    scanf("%ld%ld",&t1,&t2);
    people[t1]--;
    room[t2]++;
}


for(j=1;j<=m;j++)
for(i=1;i<=n;i++)
if(d[i][j]==1)
        people[i]+=room[j];

for(i=1;i<=n;i++)
    printf("%ld ",people[i]);
return 0;

}


