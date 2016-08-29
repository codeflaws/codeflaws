#include <stdio.h>
#include <stdlib.h>
void dfs(int);
void print(int,int);
int n,fl,vis[5010],par[5010],stck[5010];
char str[5010][5010];
int main(int argc, char *argv[])
{
  int i;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  scanf("%s",str[i]);
  for(i=0;i<n;i++)
  {
  vis[i]=0;
  par[i]=-1;
  stck[i]=-1;
  }
  fl=0;

  for(i=0;i<n&&fl==0;i++){
  if(vis[i]==0)
  dfs(i);
                          }
  if(fl==0)
  printf("-1\n");
                          
  //system("PAUSE");    
  return 0;
}
void dfs(int v){
int i,j,count;
stck[v]=1;
vis[v]=1;
for(i=0;i<n&&fl==0;i++){
if(str[v][i]=='1'){

if(vis[i]==0)
    {
    par[i]=v;
    dfs(i);
    }
     else{
     if(stck[i]==1){
          fl=1;
     printf("%d %d %d\n",v,i,par[v]);
     //print(v,i);
                 
                    }
          }            
                     } 
                     }
     stck[v]=-1;
                 }
                 
    void print(int a,int b){
     if(a==b){
     printf("%d ",a+1);
     return;
              }
     print(par[a],b);
     printf("%d ",a+1);     
                         }
