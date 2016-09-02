#include<stdio.h>
int pro[100003]={0},out=0,n,x,k,i;
int main(int argc, char *argv[])
{
scanf("%d",&n);
for(i=0;i<n;i++)
{
  scanf("%d %d",&x,&k);
  if(x>pro[k]) {out=-1; break;}
  else if(x==pro[k]) pro[k]++;
}
if(out==-1) printf("NO");
else if(out==0) printf("YES");

}
