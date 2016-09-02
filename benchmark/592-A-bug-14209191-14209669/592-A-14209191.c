#include<stdio.h>
int main(int argc, char *argv[]){
    char a[8][8];
    int i,j,k,posw,posb,m,n;
    posw=posb=-1;
    for(i=0;i<8;++i){
        for(j=0;j<8;++j){
            scanf(" %c",&a[i][j]);
            }
            }
for(k=0;k<10;++k){
    for(i=0,m=7;i<8,m>=0;++i,--m){
        for(j=0;j<8;++j){
            if((a[i][j]=='w'||a[i][j]=='W')&&(k%2==0)){
                if(a[i-1][j]== '.'){
                    a[i][j]='.';
                    a[i-1][j]='W';
                    posw=(i-1);
                    }
                }
            if((a[m][j]=='b'||a[m][j]=='B')&&(k%2!=0)){
                if(a[m+1][j]=='.'){
                    a[m][j]='.';
                    a[m+1][j]='B';
                    posb=(m+1);
                    
                    }
                }
                    }
            if(posw==0){
                printf("A");
                exit(0);
                }
            else if(posb==7){
                printf("B");
                exit(0);
                }   
            }   
        }
return 0;
}