#include<stdio.h>
#include<math.h>
int main(int argc, char *argv[])
{
    int n, m;
    scanf("%d %d", &n, &m);
    int i,a[m+2], b[m+2];
    b[0]=a[0]=0;
    for(i=1;i<=m; i++)
    {
        scanf("%d %d", &a[i], &b[i]);
    }
    int ans;
    if(a[1]==1)
        ans = a[1] ;
    else
        ans = a[1] + b[1] - 1;

    //ans/=2;
    int flag = 0;
    for(i=2;i<=m && flag==0;i++){
        if(abs(b[i]-b[i-1]) > a[i]-a[i-1]){
            printf("IMPOSSIBLE");
            flag=1;
        }
        else{
            int temp;
            temp = a[i] + b[i-1] + b[i] - a[i-1];
            temp/=2;
            if(temp>ans){
                ans = temp;
            }
        }
    }
    if(flag==0){
        if(a[m]==n)
            printf("%d",ans);
        else{
            int temp = b[m] + n - a[m];
            if(temp>ans)
                ans = temp;
            printf("%d",ans);
        }
    }

return 0;
}
