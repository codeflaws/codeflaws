#include <stdio.h>
int main(int argc, char *argv[])
{
    int n,k,i;
    scanf("%d %d",&n,&k);
    if(k>n) printf("-1");
    else{
        char s[n];
        int dl=k-2,c,x=n-1;
        i=k-1;
        for(c=1;c<=dl;c++){
            s[x]='a'+i;
            x--;
            i--;
        }
        for(i=0;i<=x;i++){
            if(i%2==0) s[i]='a';
            else s[i]='b';
        }
        for(i=0;i<n;i++) printf("%c",s[i]);
    }
    return 0;
}
