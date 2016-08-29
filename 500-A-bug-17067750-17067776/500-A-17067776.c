#include<stdio.h>

int main(int argc, char *argv[])
{
    int n, t, k, sum=0, a[30000], i, j;
    scanf("%d %d", &n, &t);
    for(i=0; i<n-1; i++){
        scanf("%d", &a[i]);
    }
    for(i=0; i<n-1; ){
        i = i+a[i];
        if(i+1==t){
            printf("YES");
            return 0;
        }
        else if(i>t){
            printf("NO");
            return 0;
        }
        //i = i+a[i];
    }
    printf("NO");
    return 0;
}
