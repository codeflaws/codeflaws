#include <stdio.h>

int main(int argc, char *argv[]){
    int n,m;
    int neg=0, pos=0;
    int temp;
    scanf("%d %d", &n ,&m);
    int l, r;
    for(int i=0; i<n; i++){
        scanf("%d", &temp);
        if (temp<0){
            neg++;

        }else{
            pos++;
        }
    }
    for (int i=0; i<m; i++){
        scanf("%d %d", &l,&r);
        if(((r-l)+1)%2==1 || r==l){
            printf("0\n");
        }else{
            if (pos*2>=((r-l)) && neg*2>=((r-l)/2)){
                printf("1\n");
            }else{
                printf("0\n");
            }
        }
    }

    return 0;
}
