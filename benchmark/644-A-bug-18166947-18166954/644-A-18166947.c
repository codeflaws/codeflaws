/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include<stdio.h>
#define ll long long
int main(int argc, char *argv[])
{
    ll n,a,b,i,j;
    scanf("%lld%lld%lld",&n,&a,&b);
    if(n>a*b){
        printf("-1");
    }
    else{
        ll array[101][101];
        for(i=0;i<a;i++){
            for(j=0;j<b;j++){
                array[i][j] = 0;
            }
        }
        ll sign = 1, count =1,i=0;
        
        while(count<=n){
            if(sign==1){
                for(j=0;j<b;j++){
                    if(count<=n){
                        array[i][j] = count;}
                    else{
                        break;
                    }
                    count++;
                }
                sign*=-1;
                i++;
            }
            else{
                for(j=b-1;j>=0;j--){
                    if(count<=n){
                        array[i][j]=count;}
                    else{
                        break;
                    }
                    count++;
                }
                i++;
                sign*=-1;
            }
        }
        
        for(i=0;i<b;i++){
            for(j=0;j<b;j++){
                printf("%lld ",array[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
