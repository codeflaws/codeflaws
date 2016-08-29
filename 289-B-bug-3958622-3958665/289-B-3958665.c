//by kkk
#include<stdio.h>
int main(int argc, char *argv[])
{
     int flag=0,m,n,d,i,j,mid=0,num,array[10001];
     long long int p;
     int count=0;
     scanf("%d%d%d",&m,&n,&d);
     p=m*n;
     for(i=0;i<p;i++)
     {
          scanf("%d",&array[i]);
     }
    	for(j=1;j<p;j++)
	      {
		     num=array[j];
		     i=j-1;
		     while(i>=0&&array[i]>num)
		     {
		     	array[i+1]=array[i];
		     	i=i-1;
		     }
		    array[i+1]=num;
		  }
for(i=0;i<p&&flag!=1;i++)
{
  if((array[0]%d)!=(array[i]%d))
  {
  printf("-1");
  flag=1;
  }
}
if(flag!=1)
{
mid=array[(p/2)];
for(i=0;i<p;i++)
{
     if(mid>=array[i])
     count=count+((mid-array[i])/d);
     else
     count=count+((array[i]-mid)/d);
}
printf("%d",count);
}
return 0;
}
