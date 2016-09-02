#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[])
{
    int i, j, k=0, n, a, b, c=0, sum=0, p, q;
    char st[3001];
    scanf("%d", &n);
    scanf("%s", st);
    for(i=0;st[i];i++){
        if(st[i]=='.') k++;
    }
    if(k==n){
        printf("%d", n);
        return 0;
    }
    for(i=0;st[i]!='L' && st[i]!='R';i++){
        c++;
    }
    if(st[i]=='R') sum+=c;
    p=i;
    c=0;
    //printf("%d\n", sum);
    for(i=n-1;st[i]!='L' && st[i]!='R';i--){
        c++;
    }
    if(st[i]=='L') sum+=c;
    //printf("%d\n", sum);
    c=0;
    q=i;
    if(st[p]=='L') a=0;
    else a=1;
    //printf("%d\n", sum);
    p++;
    while(p<=q){
        if(st[p]=='.' && (a==0 || a==1)){
            c++;
        }

        if(st[p]=='L'){
            a=0;
            if(c%2) sum+=1;
            c=0;
        }
        else if(st[p]=='R'){
            a=1;
            sum+=c;
            c=0;
        }
        p++;
        //printf("%d\n", sum);
    }
    printf("%d", sum);
    return 0;
}
