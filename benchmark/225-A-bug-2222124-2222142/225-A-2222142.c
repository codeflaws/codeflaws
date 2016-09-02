#include<stdio.h>
//#include<conio.h>
int main(int argc, char *argv[])
{
    int n,f,flag=0;
    int a[100][2];
    int k=0,i,j,p,q;
    scanf("%d",&n);
    scanf("%d",&f);
    for(i=0;i<n;i++)
    scanf("%d %d",&a[i][0],&a[i][1]);
    p=7-a[0][0];q=7-a[0][1];
    for(i=1;i<n;i++)
    {
         if(a[i][0]!=a[i-1][0]&&a[i][0]!=p&&a[i][0]!=a[i-1][1]&&a[i][0]!=q){flag=1;break;}
         if(a[i][1]!=a[i-1][0]&&a[i][1]!=p&&a[i][1]!=a[i-1][1]&&a[i][1]!=q){flag=1;break;}
         p=7-a[i][0];
         q=7-a[i][1];
         }
         if(flag==0)printf("YES");
         else printf("NO");
         return 0;
}
