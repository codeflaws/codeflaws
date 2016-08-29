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
    int hold, least=2003 ,x, low=2001;
    for(i=0;i<n;i++){
        printf("%d ", a[i]);
        if(aray[i]==aray[i+1]){
            hold=i;
            if(least>hold){
                least=hold;
            }
            else if(low>hold){
                low=hold;
            }
        }
    }
    printf("\n");;
    for(j=0;j<n;j++){
        if(least==j){
            printf("%d %d ", a[j+1], a[j]);
            x = a[j+1];
            a[j+1] = a[j];
            a[j]=x;
            j++;
        }
        else{
            printf("%d ", a[j]);
        }
    }
    printf("\n");
    for(j=0;j<n;j++){
        if(low==j){
            printf("%d %d ", a[j+1], a[j]);
            j++;
        }
        else{
            printf("%d ", a[j]);
        }
    }
    return 0;

}
