#include<stdio.h>

int arr[6][4];

int main(int argc, char *argv[])
{
    int n,s_x1,s_x2,s_y1,s_y2,i,j;
    long int sum;
    while(~scanf("%d",&n))
    {
        sum=0;
        s_x1=99999,s_x2=0,s_y1=99999,s_y2=0;
        for(i=0;i<n;i++)
        {
            for(j=0;j<4;j++)
                scanf("%d",&arr[i][j]);
            sum+=(arr[i][2]-arr[i][0])*(arr[i][3]-arr[i][1]);
            if(arr[i][0]<s_x1)s_x1=arr[i][0];
            if(arr[i][1]<s_y1)s_y1=arr[i][1];
            if(arr[i][2]>s_x2)s_x2=arr[i][2];
            if(arr[i][3]>s_y2)s_y2=arr[i][3];
        }
        if(sum!=(s_x2-s_x1)*(s_y2-s_y1))puts("NO");
        else puts("YES");
    }
    return 0;
}