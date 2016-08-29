   #include<stdio.h>
   int main(int argc, char *argv[])
   {
   int k[1000][1000],i,j,c1=0,x,y,f=0,r,s,b,a; 
   scanf("%d%d",&x,&y);
   scanf("%d%d",&a,&b);
r=0;
s=0;
   for(i=a;i<=x;i++)
   {
f=0;
   for(j=b;j<=y;j++)
   { 
    if(i==j)
{
break;
}
s=0;
  if(i>j&&s==0)
 {
f=1;
c1++;
k[r][s]=i;
}
s=1;
if(i>j&&s==1)
 {
  k[r][s]=j;
r++;
}
s=0;
}
if(i==x&&j==y)
break;
}
printf("%d\n",c1);
for(i=0;i<c1;i++)
{
for(j=0;j<2;j++)
{
printf("%d ",k[i][j]);
}
printf("\n");
}
return 0;
}

  
