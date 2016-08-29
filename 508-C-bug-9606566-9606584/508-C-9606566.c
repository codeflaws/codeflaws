#include <stdio.h>
int can[602];
int main(int argc, char *argv[])
{
    int m,t,r,i,k;
    int ans = 0;
    scanf("%d%d%d",&m,&t,&r);
    int A[m];
    for(i = 0;i < m;i++){
        scanf("%d",&A[i]);
    }
    if(r > t){
        printf("-1\n");
    }

    for(i = 0;i < m;i++){
        int j = A[i] - 1;
        while(can[A[i]] < r){
            for(k = j + 1; k <= j + t;k++){
                if(k >= 1){
                    can[k]++;
                }
            }
            ans++;
            j--;
        }

    }
    printf("%d\n",ans);


    return 0;
}
