#include<stdio.h>
int main(int argc, char *argv[])
{

int swap_it[300][300],min,s=0,num[3000],n,k=0,i,j,temp;

scanf("%d",&n);

for(i=0;i<n;i++){scanf("%d",&num[i]);}

for(i=0;i<n-1;i++)
{

min=i;
for(j=i+1;j<n;j++)
{
if(num[min]>=num[j]){min=j;}
}

if((i!=min)&&(num[i]!=num[min])){s++;

swap_it[k][0]=i;swap_it[k][1]=min;
k++;

temp=num[i];
num[i]=num[min];
num[min]=temp;


}


}

printf("%d\n",s);


for(i=0;i<k;i++){printf("%d %d\n",swap_it[i][0],swap_it[i][1]);}




return 0;
}
