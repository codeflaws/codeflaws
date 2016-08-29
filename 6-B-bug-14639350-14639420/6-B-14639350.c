#include<stdio.h>
#include<stdlib.h>
#define max(a,b) a>b?a:b
int main(int argc, char *argv[])
{
    int i, j, k=0, a=0, b=0, n, m, p, q;
    char st[103][103], ch, aray[100001];
    scanf("%d %d %c", &n, &m, &ch);
    getchar();
    for(i=1;i<=n;i++){
        scanf("%s", st[i]);
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            if(st[i][j]==ch){
                if(st[i-1][j]!='.' && st[i-1][j]!=ch && st[i-1][j]>='A' && st[i-1][j]<='Z'){
                    for(p=0;p<k;p++){
                        if(aray[p]==st[i-1][j]) break;
                    }
                    if(p==k){
                        aray[k]=st[i-1][j];
                        k++;
                    }
                }
                if(st[i][j-1]!='.' && st[i][j-1]!=ch && st[i][j-1]>='A' && st[i][j-1]<='Z'){
                    for(p=0;p<k;p++){
                        if(aray[p]==st[i][j-1]) break;
                    }
                    if(p==k){
                        aray[k]=st[i][j-1];
                        k++;
                    }
                }
                if(st[i+1][j]!='.' && st[i+1][j]!=ch && st[i+1][j]>='A' && st[i+1][j]<='Z'){
                    for(p=0;p<k;p++){
                        if(aray[p]==st[i+1][j]) break;
                    }
                    if(p==k){
                        aray[k]=st[i+1][j];
                        k++;
                    }
                }
                if(st[i][j+1]!='.' && st[i][j+1]!=ch && st[i][j+1]>='A' && st[i][j+1]<='Z'){
                    for(p=0;p<k;p++){
                        if(aray[p]==st[i][j+1]) break;
                    }
                    if(p==k){
                        aray[k]=st[i][j+1];
                        k++;
                    }
                }
            }
        }
    }
   // for(i=0;i<k;i++){
     //   printf("%c ", aray[i]);
    //}
    //printf("%c", aray[0]);
    printf("%d", k);
    return 0;
}
