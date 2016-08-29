#include<stdio.h>
int n,i,j,k,m,a[102][220],count;
int main(int argc, char *argv[])
{
    int n,i,s[4][4],j,need[4][4];
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&s[i][j]);
        }
    }
    need[0][0]=s[0][0]+s[0][1]+s[1][0];
    need[0][1]=s[0][0]+s[0][1]+s[0][2]+s[1][1];
    need[0][2]=s[0][1]+s[0][2]+s[1][2];
    need[1][0]=s[0][0]+s[1][1]+s[1][0]+s[2][0];
    need[1][1]=s[1][1]+s[0][1]+s[1][0]+s[1][2]+s[2][1];
    need[1][2]=s[0][2]+s[1][1]+s[1][2]+s[2][2];
    need[2][0]=s[1][0]+s[2][0];
    need[2][1]=s[1][1]+s[2][0]+s[2][1]+s[2][2];
    need[2][2]=s[1][2]+s[2][1]+s[2][2];
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            //printf("%d ",need[i][j]);
            if(need[i][j]%2==0) printf("1");
            else printf("0");
        }
        printf("\n");
    }
    return 0;
}
