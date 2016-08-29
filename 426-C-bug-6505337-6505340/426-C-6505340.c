#include <stdio.h>
#define maxn 205
int a[maxn],n;
void uniqueall(int end1,int end2,int list1[])
{
    int i;
    for(i=1;i<=end1;i++)
     list1[i]=a[i];
    for(i=end2;i<=n;i++)
     list1[end1+i-end2+1]=a[i];
}
void qsort(int i,int j,int st[])
{
    int n,m,k;
    n=i,m=j,k=st[i];
    while(i<j)
    {
        while(i<j&&k<=st[j]) j--;
        if(i<j) st[i++]=st[j];
        while(i<j&&k>=st[i]) i++;
        if(i<j) st[j--]=st[i];
    }
    st[i]=k;
    if(i-n>1) qsort(n,i-1,st);
    if(m-i>1) qsort(i+1,m,st);
}
int main(int argc, char *argv[])
{
    int k,i,j,l,r,m[maxn],swaptime,listnum2,listnum1,sum,tsum,list1[maxn],list2[maxn];
    //freopen("C:\\Users\\Shen\\Desktop\\in.txt","r",stdin);
    while(~scanf("%d%d",&n,&k))
    {
        m[0]=0;
        sum=0xffffff;
        sum=(-1)*sum;
        for(i=1;i<=n;i++)
        {
            scanf("%d",&a[i]);
            m[i]=m[i-1]+a[i];
        }
        for(l=1;l<=n;l++)
         for(r=l;r<=n;r++)
         {
              tsum=0;
              if(l!=1&&r!=n) uniqueall(l-1,r+1,list1);
              else
                if(l==1&&r!=n)
                 for(i=r+1;i<=n;i++) list1[i-r]=a[i];
                else
                if(l!=1&&r==n)
                 for(i=1;i<=l-1;i++) list1[i]=a[i];

              //   printf("list1:\n");
              //for(i=1;i<=n-r+l-1;i++) printf("%d ",list1[i]);
              //printf("\n");

              //printf("r-l+1=%d\n",r-l+1);
              qsort(1,n-r+l-1,list1);
              for(i=1;i<=r-l+1;i++) list2[i]=a[l+i-1];
              qsort(1,r-l+1,list2);



              //printf("list1:\n");
              //for(i=1;i<=n-r+l-1;i++) printf("%d ",list1[i]);
              //printf("\nlist2:\n");
              //for(i=1;i<=r-l+1;i++) printf("%d ",list2[i]);
              //printf("\n");


              swaptime=r-l+1>k?k:r-l+1;
              listnum1=n-r+l-1,listnum2=1;
              //printf("swaptime=%d listnum1=%d\n",swaptime,listnum1);
              while((swaptime--)&&(listnum1>=1))
              {
                  if(list2[listnum2]<list1[listnum1]) {tsum+=list1[listnum1];tsum-=list2[listnum2];}
                  else break;
                  listnum2++,listnum1--;
              }
              tsum+=m[r]-m[l-1];
              //if(tsum==2244) printf("left=%d,right=%d\n",l,r);
              if(tsum>sum) sum=tsum;
         }
        printf("%d\n",sum);
    }
    return 0;
}
