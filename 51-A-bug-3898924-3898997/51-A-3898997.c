#include<stdio.h>
int main(int argc, char *argv[])
{
    int n,cnt=0,i,j,d=1;
    scanf("%d",&n);
    int a[n][4];
    char c[n][6];
    for(i=0;i<n;i++)
    {
    for(j=0;j<4;j++)
    {
        scanf("%1d",&a[i][j]);
    }
    if(i<n-1)
    scanf("%s",&c[i][6]);}
    for(i=0;i<n-1;i++)
    {
        cnt=0;
    for(j=i+1;j<n;j++)
    {
        if(a[j][0]==a[i][1]&&a[j][1]==a[i][3]&&a[j][3]==a[i][2]&&a[j][2]==a[i][0])
        cnt++;
        if(a[j][0]==a[i][3]&&a[j][1]==a[i][2]&&a[j][3]==a[i][0]&&a[j][2]==a[i][1])
        cnt++;
        if(a[j][0]==a[i][2]&&a[j][1]==a[i][0]&&a[j][3]==a[i][1]&&a[j][2]==a[i][3])
        cnt++;
        if(a[j][0]==a[i][0]&&a[j][1]==a[i][1]&&a[j][3]==a[i][3]&&a[j][2]==a[i][2])
        cnt++;
    }
        if(cnt==0)
        d++;
    }
    printf("%d",d);
    return 0;

}
