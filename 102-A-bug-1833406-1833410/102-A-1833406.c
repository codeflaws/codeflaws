#include<stdio.h>
int q[10000],u[10000],v[10000],n,m;
int find(int a,int b);
int main(int argc, char *argv[])
{
    int i,a,b,c,j,d,s=0,l=10000000;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
    scanf("%d",&q[i]);
    for(i=0;i<m;i++)
    scanf("%d %d",&u[i],&v[i]);
    if(m<3)
    printf("-1");
    else 
    {
         for(i=0;i<m-1;i++)
         {
                           a=u[i];
                           b=v[i];
                           for(j=i+1;j<m;j++)
                           {
                                 if(u[j]==a)
                                 {
                                               c=v[j];
                                               d=find(b,c);
                                               if(d==1)
                                               s=q[a-1]+q[b-1]+q[c-1];
                                               if(l>s&&(s!=0))
                                                l=s;
                                                }
                                  else if(a==v[j]) 
                                  {
                                       c=u[j];
                                               d=find(b,c);
                                               if(d==1)
                                               s=q[a-1]+q[b-1]+q[c-1];
                                               if(l>s&&(s!=0))
                                                l=s;
                                                }
                           }
                           a=v[i];
                           b=u[i];
                           for(j=i+1;j<m;j++)
                           {
                                 if(u[j]==a)
                                 {
                                               c=v[j];
                                               d=find(b,c);
                                               if(d==1)
                                               s=q[a-1]+q[b-1]+q[c-1];
                                               if(l>s&&(s!=0))
                                                l=s;
                                                }
                                  else if(a==v[j]) 
                                  {
                                       c=u[j];
                                               d=find(b,c);
                                               if(d==1)
                                               s=q[a-1]+q[b-1]+q[c-1];
                                               if(l>s&&(s!=0))
                                                l=s;
                                                }
                                                }
                           }
                           if(l==100000)
                           l=-1;
                           printf("%d",l);
                           }
                           return(0);
}
int find(int a,int b)
{
    int i;
    for(i=0;i<m;i++)
    {
                    if(((a==u[i])&&(b==v[i]))||((b==u[i])&&(a==v[i])))
                       return(1);
                       }
                       return(0);
}
    
    
    
    
    
    
                                                                                                                                          
