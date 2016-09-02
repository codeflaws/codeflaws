#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(int argc, char *argv[])
{
    int n, s, a, b, i;
    int B[100002], S[100003], aray[100002][2];
    memset(B, 0, sizeof(B));
    memset(B, 0, sizeof(B));
    char ch;
    scanf("%d %d", &n, &s);
    int count=0;
    int p ,q;
    for(i=0;i<n;i++){
        ch=getchar();
        if(ch=='B'){
            scanf("%d %d" ,&p, &q);
            B[p]+=q;

        }
        else{
            scanf("%d %d", &p, &q);
            S[p]+=q;
        }
    }
    for(i=0;i<=100000;i++){
        if(S[i]!=0 && count<s){
            aray[count][0]=i;
            aray[count][1]=S[i];
            count++;
        }

    }
    b=count-1;
    count=0;
    for(i=b;i>=0;i--){
        printf("S %d %d\n", aray[i][0], aray[i][1]);
    }
    count=0;
    for(i=100000;i>=0;i--){
        if(count==s){
            break;
        }
        if(B[i]!=0){
            printf("B %d %d\n", i, B[i]);
            count++;
        }

    }


    return 0;
}
