#include <stdio.h>

struct case1
{
 long full;
 long child[2];
}tree[2000005]={{0,{0}}};

long totm=1;
long flag=0;

struct case2
{
 long l;
 long num;
}word[1006]={{0,0}};

long ans[1006][1006]={0};
long l[1006]={0};

void mark(long level,long x)
{
 if(x==0)
  return;
 if(level==0)
  tree[x].full=1;
 if(tree[x].full==1)
  return;
 mark(level-1,tree[x].child[0]);
 mark(level-1,tree[x].child[1]);
}

void check(long *p)
{
 if(*p==0)
  {
   totm++;
   *p=totm;
  }
}

void insert(long l,long level,long x,long num)
{
 if(level<=l)
  {
   check(&tree[x].child[0]);
   if(tree[tree[x].child[0]].full==0)
    {
     ans[num][level]=0;
     insert(l,level+1,tree[x].child[0],num);
    }
   else
    {
     check(&tree[x].child[1]);
     if(tree[tree[x].child[1]].full==0)
      {
       ans[num][level]=1;
       insert(l,level+1,tree[x].child[1],num);
      }
     else
      flag=1;  
    }
   tree[x].full=tree[tree[x].child[0]].full&tree[tree[x].child[1]].full;
  }
 else
  tree[x].full=1;
}

int main(int argc, char *argv[])
{
 long n,i,j;
 struct case2 temp;
 
 scanf("%ld",&n);
 for(i=1;i<=n;i++)
   {
    scanf("%ld",&word[i].l);
    word[i].num=i;
    l[i]=word[i].l;
   }
 for(i=1;i<n;i++)
   for(j=i+1;j<=n;j++)
     if(word[j].l>word[i].l)
      {
       temp=word[i];
       word[i]=word[j];
       word[j]=temp;
      }
 
 for(i=1;i<=n;i++)
   {
    insert(word[i].l,1,1,word[i].num);
    if(flag)
     {
      printf("NO");
      return 0;
     }
    if(i<n&&word[i+1].l<word[i].l)
     mark(word[i+1].l,1);
   }
 printf("YES\n");
 for(i=1;i<=n;i++)
   {
    for(j=1;j<=l[i];j++)
      printf("%ld",ans[i][j]);
    printf("\n");
   }
 
 return 0;
}
