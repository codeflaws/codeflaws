#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
    int n,m,b,g,arr1[1000],arr2[1000],c1,c2,p1,p2,max=0,flag=0,temp,i;
    memset(arr1,0,sizeof(arr1));
    memset(arr2,0,sizeof(arr2));
    int sum=0;
    scanf("%d",&n);scanf("%d",&m);
    scanf("%d",&b);
    for(i=0;i<b;i++)
       {    scanf("%d",&temp);
          arr1[temp]=1;
       }
     scanf("%d",&g);
    for( i=0;i<g;i++)
        {   scanf("%d",&temp);
          arr2[temp]=1;
       }

         max=(n>m) ? n : m;

        while(1)
            {
                if(max%n==0 && max%m==0)
             {
                 flag=max;
            break;
            }
            ++max;
         }
         //cout<<flag<<endl;
         sum=b+g;
         for(i=0;i<101101;i++)
         {
             int p1=i%n;
             int p2=i%m;
             if(arr1[p1]==1 && arr2[p2]==1)
                continue;
             else if(arr1[p1]==1 && arr2[p2]==0)
             {
                 sum++;
                 arr2[p2]=1;
             }
             else if(arr1[p1]==0 && arr2[p2]==1)
             {
                 sum++;
                 arr1[p1]=1;
             }

         }
         //cout<<"count"<<count<<endl;
         if(sum==n+m)
                printf("Yes\n");
                else printf("No\n");
                return 0;
}
