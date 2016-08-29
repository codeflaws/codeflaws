#include <stdio.h>
#define MAX 100000
int B1[MAX+1]={0};
int S1[MAX+1]={0};
int main(int argc, char *argv[])
{
    int p,q,n,s;
    char ch;
    int i;
    scanf("%d %d",&n,&s);
    //B[MAX+1]={0};
    //S[MAX+1]={0};
     for(i=0;i<n;i++){
        scanf(" %c",&ch);
        scanf("%d %d",&p,&q);
        if(ch=='B'){
            B1[p]=B1[p]+q;
        }
        else{
            S1[p]=S1[p]+q;
        }
     }
     int count=0,save=0;
     for(i=1;i<=MAX;i++){
        if(S1[i]){
            count++;
            if(count==n){
                save=i;
                break;
            }
            if(count==s){
                save=i;
                break;
            }
        }
     }
     for(i=save;i>=0;i--){
        if(S1[i]){
            printf("S %d %d\n",i,S1[i]);
        }
     }
     count=0;
    for(i=MAX;i>=0;i--){
        if(B1[i]){
            count++;
            printf("B %d %d\n",i,B1[i]);
        }
        if(count==n){
            break;
        }
        if(count==s){
            break;
        }
    }
    return 0;
}
