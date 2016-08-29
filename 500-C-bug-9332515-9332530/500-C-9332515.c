#include<stdio.h>
int w[510],fl[510],st[510],ord[510];
int main(int argc, char *argv[])
{
  int i,j,k=0,n,t,tt,m,sm=0,l;
  w[0]=0;
  scanf("%d%d",&n,&m);
  printf("%d %d\n",n,m);
  for(i=1;i<=n;i++)
  scanf("%d",&w[i]);

  //printf("val 2 is:%d\n",w[2]);
  for(i=0;i<m;i++)
  {
      scanf("%d",&ord[i]);
      //ord[i]=j;
      if(fl[ord[i]]==0)
      st[k++]=ord[i];
      fl[ord[i]]=1;
  }
  /*if(n==500)
  {
      for(i=0;i<10;i++)
  cout<<ord[i]<<" ";
  cout<<"\n";
  }*/
  for(i=0;i<m;i++)
  {
      j=0;
      //cout<<"pick "<<ord[i]<<"\n";
     // for(tt=0;tt<k;tt++)
      //cout<<st[tt]<<" ";
      //cout<<"\n";
      while(j<k&&ord[i]!=st[j])
      {
          //cout<<"mm "<<ord[i]<<" "<<st[j]<<"\n";
          sm+=w[st[j]];
          j++;
      }
      for(t=j;t>0;t--)
      st[t]=st[t-1];
      st[0]=ord[i];

  }

  printf("%d\n",sm);
        return 0;
}
