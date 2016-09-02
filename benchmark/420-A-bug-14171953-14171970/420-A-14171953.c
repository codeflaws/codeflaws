#include<stdio.h>

int main(int argc, char *argv[])
{
    int i, n, len;
    char nm[100001];
    gets(nm);
    len = 0;
    while(nm[len]){
        len++;
    }
    //printf("%d\n", len);

    if(len==1){
        if(nm[0]=='A' || nm[0]=='H' || nm[0]=='I' || nm[0]=='M' || nm[0]=='O' || nm[0]=='T' || nm[0]=='W' || nm[0]=='V' || nm[0]=='U' || nm[0]=='Y' || nm[0]=='X'){
            printf("YES");
            return 0;
        }
        else{
            printf("NO");
            return 0;
        }
    }

    for(i=0; i<len-1; i++){
        if(nm[i]!='A' && nm[i]!='H' &&nm[i]!='I' && nm[i]!='M' && nm[i]!='O' && nm[i]!='T' && nm[i]!='W' && nm[i]!='V' && nm[i]!='U' && nm[i]!='Y' && nm[i]!='X'){
            printf("NO");
            return 0;
        }
    }
    n = len/2;
    for(i=0; i<=n; i++){
        if(nm[i]!=nm[len-i-1]){
            printf("No");
            return 0;
        }
    }
    printf("YES");
    return 0;
}
