#include<stdio.h>

int main(int argc, char *argv[])
{
    int i, n;
    scanf("%d", &n);
    int e, p=0, count=0;
    for(i=0; i<n; i++){
        scanf("%d", &e);
        if(e!=-1){
            p=e;
        }else{
            if(p>0)
                p--;
            else
                count++;
            }
        }
    printf("%d\n", count);
    return 0;
}
