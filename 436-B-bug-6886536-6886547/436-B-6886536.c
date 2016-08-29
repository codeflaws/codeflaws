#include<stdio.h>
#include<limits.h>

int n,m,k,i,count,p,q,max=INT_MIN,j,a[2001][2001];
char s[2001];
int main(int argc, char *argv[])
{
scanf("%d %d %d",&n,&m,&k);
for(i=0;i<n;i++)
{
  scanf("%s",s);
//  puts(s);
  for(j=0;j<m;j++)
   {
     
     if(s[j]=='.')
     a[i][j]=0;
     else if(s[j]=='L')
     a[i][j]=1;
     else if(s[j]=='R')
     a[i][j]=2;
     else if(s[j]=='U')
     a[i][j]=3;
     else
     a[i][j]=4;
   }
}

for(i=0;i<m;i++)
{
  count=0;
  for(j=1;j<n;j++)
   {
     int h=j;
     p=h;
     q=h+i;
     if(p>=0 && p<n && q>=0 && q<m)
     {
        if(a[p][q]==1)
         count++;
     }
     //    printf("fOUND L %d\n",count);  
     p=h;
     q=i-h;
     if(p>=0&& p<n && q>=0 && q<m)
     {
        if(a[p][q]==2)
         count++;
     }
   //    printf("fOUND R %d\n",count);
     p=2*h;
     q=i;
     if(p>=0&& p<n && q>=0 && q<m)
     {
        if(a[p][q]==3)
         count++;
     }

    
   if(count>max)
    {
     max=count;
    } 
  }
printf("%d",count);
if(i<=n-2)
 printf(" ");
}
     
//printf("%d",max);

return 0;
}
