#include<stdio.h>
#include<string.h>

int modb[1100000],tens[1100000];

int main(int argc, char *argv[]){
    int a,b,moda=0,inlen,check=0,i,j,k;
    char in[1100000];
    scanf("%s %d %d",in,&a,&b);
    inlen=strlen(in);
    tens[0]=1%b;
    for(i=1;i<1100000;i++){
        tens[i]=(tens[i-1]*10)%b;
    }
    modb[0]=(in[0]-'0')%b;
    for(i=1;i<inlen;i++){
        modb[i]=(modb[i-1]*10+in[i]-'0')%b;
    }
    for(i=0;i<inlen-1;i++){
        moda=(moda*10+in[i]-'0')%a;
        if(in[i+1]=='0'){
            continue;
        }
        if(moda==0){
            if((modb[inlen-1]-modb[i]*tens[inlen-i-1])%b==0){
                check=1;
                printf("YES\n");
                for(k=0;k<=i;k++){
                    printf("%c",in[k]);
                }
                printf("\n");
                for(;k<inlen;k++){
                    printf("%c",in[k]);
                }
                printf("\n");
                break;
            }
        }
    }
    if(check==0){
        printf("NO\n");
    }
    return 0;
}
