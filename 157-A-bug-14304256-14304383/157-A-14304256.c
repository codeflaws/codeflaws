#include<stdio.h>
int n,i,j,a[31][32],row_sum,col_sum,count,k;
int main(int argc, char *argv[])
{
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
                row_sum=0,col_sum=0;
                //printf("a[i][j] %d\n",a[i][j]);
            for(k=0;k<n;k++){
                row_sum+=a[i][k];
            }
            for(k=0;k<n;k++){
                col_sum+=a[k][j];
            }
            //printf(" row %d col %d\n",row_sum,col_sum);
            if(row_sum>col_sum) count++;
            //printf("count %d\n",count);
        }
    }
    printf("%d\n",count);
    return 0;
}
