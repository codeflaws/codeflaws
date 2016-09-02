#include <stdio.h>
#include <stdlib.h>
    int a[1000];
    int num;
int main(int argc, char *argv[]){

    int i,ans=0,j;
    scanf("%d",&num);
    for(i=0;i<num;i++){
        scanf("%d",&a[i]);
    }
    if(check()){
        ans=1;
        goto end;
    }
    for(i=0;i<num;i++){
        for(j=0;j<num;j++){
            if(j%2==0){ //plus
                if(a[j]==num-1){
                    a[j]=0;
                }
                else{
                    a[j]++;
                }
            }
            else{ //minus
                if(a[j]==0){
                    a[j]=num-1;
                }
                else{
                    a[j]--;
                }
            }
        }
        /**for(j=0;j<num;j++){
            printf("%d ",a[j]);
        }
        printf("\n");**/
        if(check()){
            ans=1;
            goto end;
        }
    }

end:
    if(ans){
        printf("Yes");
    }
    else{
        printf("No");
    }



    return 0;

}

int check(void){
    int i;
    if(a[0]!=0) return 0;
    for(i=1;i<num;i++){
        if((a[i]-a[i-1])==0) {
            return 0;
        }
    }
    return 1;
}
