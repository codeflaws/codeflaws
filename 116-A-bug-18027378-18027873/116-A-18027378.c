#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[]){
    int n,i,in,out,total=0,j,c;
    scanf("%d",&n);
    char a[n][2];
    int b[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[n][0]);
        scanf("%d",&a[n][1]);
        out = a[n][0];
        in = a[n][1];
        total = total + in - out;
        b[i] = total;
    }
     for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            if(b[j]>b[j+1]){
                c = b[j];
                b[j] = b[j+1];
                b[j+1] = c;
            }
        }
    }
    /*    c = b[0];
    for(i=0;i<n-1;i++){
        if(b[i]<b[i+1]){
            c = b[i+1];
        }
    }*/
    printf("%d\n",b[n-1]);
    return 0;
}
