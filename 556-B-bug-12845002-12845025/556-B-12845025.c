#include <stdio.h>

int n,a[100000];

int main(int argc, char *argv[])
{
    scanf("%d",&n);

    int i;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int step;
    step=n-a[0];
    //printf("%d",step);
    for(i=0;i<n;i++){
        if(i%2==0){
            //clockwise
            a[i]= (a[i]+step)%n;
        }
        else
        {
            //anticlock
            a[i]=a[i]-step;
            if(a[i]<0){
                a[i]+=n;
            }
        }
    }
    //for(i=0;i<n;i++){
      //  printf("%4d",a[i]);
    //}
    for(i=0;i<n-1;i++){
        if(a[i+1]-a[i]!=1){
            printf("No");
            return 0;
        }
    }
    printf("Yes");
    return 0;
}
