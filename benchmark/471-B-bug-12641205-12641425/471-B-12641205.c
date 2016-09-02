#include<stdio.h>

int main(int argc, char *argv[])
{
    int n, aray[2005] ;
    scanf("%d", &n);
    int a[n+1];
    int i, j, count=0;
    for(i=0;i<n;i++){
        scanf("%d", &aray[i]);
        a[i]=i+1;
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(aray[i]==aray[j]){
                count++;
                break;
            }
        }
    }
    if(count<2){
        printf("NO");
        return 0;
    }
    int temp, t, d;
    for(i=1;i<n;i++){
        d = i;
        while(d>0 && aray[d]<aray[d-1]){
            temp=a[d];
            a[d]=a[d-1];
            a[d-1]=temp;

            t=aray[d];
            aray[d]=aray[d-1];
            aray[d-1] = t;
            d--;
        }
    }
    int x=0;
    for(i=0;i<n;i++){
        if(aray[i]==aray[i+1]){
            for(j=0;j<n;j++){
                if(j==i){
                    printf("%d %d ", a[j+1], a[j]);
                    j++;
                }
                else{
                    printf("%d ", a[j]);
                }
            }
            x++;
            if(x>=3){
                break;
            }
            printf("\n");
            for(j=0;j<n;j++){
                printf("%d ", a[j]);
            }
            x++;
            printf("\n");


        }
        if(x>=3){
            break;
        }
    }
    return 0;

}
