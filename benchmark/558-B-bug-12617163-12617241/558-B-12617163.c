#include<stdio.h>

int start[1000005] = {0}, end[1000005] = {0}, count[1000005] = {0};
int arr[100005];

int main(int argc, char *argv[])
{
        int n, i, j, mx = 0, tmp, mxst, mxed;

        scanf("%d", &n);
        for(i = 1; i <= n; i++){
                scanf("%d", &arr[i]);
                tmp = arr[i];
                if(start[tmp] == 0){
                        start[tmp] = i;
                }
                end[tmp] = i;
                count[tmp]++;
                if(mx < count[tmp] || ( mx == count[tmp] && (end[tmp] - start[tmp]) > (mxed - mxst)   ) ){
                        mx = count[tmp];
                        mxst = start[tmp];
                        mxed = end[tmp];
                }
        }

       printf("%d %d\n", mxst, mxed);

        //bitches better fuck off

        return 0;
}
