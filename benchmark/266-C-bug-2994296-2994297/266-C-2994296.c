#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<memory.h>
#include<assert.h>
#include<ctype.h>

#define ll long long
#define max(a,b) (((a)>(b))?(a):(b))
#define min(a,b) (((a)<(b))?(a):(b))
#define abs(k) (((k)>0)?(k):(-(k)))
#define mod(a,b) (((a)>=0)?((a)-(b)*((a)/(b))):((a)-(b)*((a)/(b)+1))
#define mset(a) memset(a,0,sizeof(a))
#define mcpy(a,b) memcpy(a,b,sizeof(a))
#define inf (1e9)
#define linf (1e18)
#define pi 3.14159265358979323846

void fileio_in_out()
{
     freopen(".in","r",stdin);
     freopen(".out","w",stdout);
}

void fileio_txt()
{
     freopen("input.txt","r",stdin);
     freopen("output.txt","w",stdout);
}

//==================================================

int n,ans=0,t,x,y;
int map[1111][1111],xhave[1111],ymin[1111];
int anst[1111111],ans1[1111111],ans2[1111111];

#define swap(a,b) swapnumber(&a,&b)
void swapnumber(int *a,int *b)
{
     int t;
     
     t=*a;
     *a=*b;
     *b=t;
}

void sort(int a[],int l,int r)
{
    int i,j,mid;
    
    i=l;
    j=r;
    mid=a[(l+r)/2];
    do{
        while(a[i]<mid)
          i++;
        while(a[j]>mid)
          j--;
        if(i<=j)
          {
            if(a[i]!=a[j])
              {
                anst[++ans]=2;
                ans1[ans]=i;
                ans2[ans]=j;
                swap(a[i],a[j]);
              }
            i++;
            j--;
          }
      }while(i<=j);
    if(i<r)
      sort(a,i,r);
    if(j>l)
      sort(a,l,j);
}

int main(int argc, char *argv[])
{
    //fileio_in_out();
    //fileio_txt();
    
    int i,j,l;
    
    mset(map);
    mset(xhave);
    
    scanf("%d",&n);
    for(i=1;i<n;i++)
      {
        scanf("%d%d",&x,&y);
        map[x][y]=1;
        xhave[x]=1;
      }
    
    for(i=1;i<n;i++)
      if(xhave[i])
        {
          for(j=n;j>i;j--)
            if(!xhave[j])
              {
                anst[++ans]=1;
                ans1[ans]=i;
                ans2[ans]=j;
                swap(xhave[i],xhave[j]);
                for(l=1;l<=n;l++)
                  swap(map[i][l],map[j][l]);
                
                break;
              }
        }
    
    for(i=1;i<=n;i++)
      {
        ymin[i]=inf;
        for(j=1;j<=n;j++)
          if(map[j][i])
            {
              ymin[i]=j;
              break;
            }
      }
    
    sort(ymin,1,n);
    
    printf("%d\n",ans);
    for(i=1;i<=ans;i++)
      printf("%d %d %d\n",anst[i],ans1[i],ans2[i]);
    
    system("pause");
    return 0;
}

