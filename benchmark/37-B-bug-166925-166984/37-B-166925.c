#include <stdio.h>

struct case1
{
 long pow,dmg;
 long num;
}magic[1006]={{0,0,0}},ans[1006]={{0,0,0}};

long hash[1006]={0};
long tot=0;

int main(int argc, char *argv[])
{
 long hp,reg,n;
 long i,j;
 long s=0;
 long time=0;
 long max=0;
 long point;
 long flag=0,x=0;
 struct case1 temp;
 
 scanf("%ld%ld%ld",&n,&hp,&reg);
 max=hp;
 for(i=1;i<=n;i++)
   {
    scanf("%ld%ld",&magic[i].pow,&magic[i].dmg);
    magic[i].num=i;
   }
 
 for(i=1;i<n;i++)
   for(j=i+1;j<=n;j++)
     if(magic[i].pow<magic[j].pow||magic[i].pow==magic[j].pow&&magic[i].dmg<magic[j].dmg)
      {
       temp=magic[i];
       magic[i]=magic[j];
       magic[j]=temp;
      }
 
 for(time=0;hp>0;time++)
   {
    flag=0;
    for(j=1,x=0;j<=n;j++)
      if(!hash[j]&&hp<=max*magic[j].pow/100)
       {
        flag=1;
        if(x==0||magic[j].dmg>magic[x].dmg)
         x=j;
       }
    if(flag)
     {
      hash[x]=1;
      ans[++tot].dmg=time;
      ans[tot].num=magic[x].num;
     }
    hp-=s;
    hp+=reg;
    if(hp>max)
     hp=max;
    if(flag==0&&reg>=s)
     {
      printf("NO\n");
      return 0;
     }
   }
 
 printf("YES\n");
 printf("%ld %ld\n",time,tot);
 for(i=1;i<=tot;i++)
   printf("%ld %ld\n",ans[i].dmg,ans[i].num);
 
 return 0;
}
