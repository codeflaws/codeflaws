#include<stdio.h>
 long long arr[5000001][2];
 int main(int argc, char *argv[])
 {
     arr[0][1]=arr[1][1]=0;
     int i,j;
     for(i=2;i<5000001;i++)
        arr[i][0]=i;
     for(i=2;i<500001;i++)
     {
         if(arr[i][1]==0)
         {
             for(j=i;j<5000001;j+=i)
             {
                 while(arr[j][0]%i==0)
                    arr[j][1]++,arr[j][0]/=i;
             }
         }
         arr[i][1]+=arr[i-1][1];
     }
int task;
scanf("%d",&task);
while(task--)
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%lld\n",arr[a][1]-arr[b][1]);
}

 return 0;
}
