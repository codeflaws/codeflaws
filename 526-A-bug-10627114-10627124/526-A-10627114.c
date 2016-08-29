#include <stdio.h>
//#include <conio.h>
//16
//.**.*..*.***.**.
int N,C;
int val[101];
char str[101];
int main(int argc, char *argv[])
{
    //FILE* fin=fopen("input.in","r");
    scanf("%d",&N);
    scanf("%s",str);
    int i,j,k;
    for(i=0; i<N; i++)
    {
        if(str[i]=='.')val[i]=0;
        else val[i]=1;
    }
    //for(i=0; i<N; i++)printf("%d",val[i]);
    //printf("\n");
    for(i=0; i<N; i++){
        if(val[i]==0)continue;
        for(j=1;j<=50;j++){
            //printf("%d->",i);
            C=0;
            for(k=i;k<N;k+=j){
                    if(val[k]==1){C++;/*printf("%d ",k);*/}
                    else break;
            }
            if(C==4){printf("YES");return 0;}

        }

    }
    printf("NO");
    //getch();
    return 0;
}
