#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
    int n,d=0,i,j,a[20]; scanf("%d",&n); int x=n;
    char s[10]={0};
    while(x>0) a[d]=x%10,d++,x/=10;
    if(x==0) a[0]=0,d++;
    for(int i=0;i<d;i++){
            x=a[i];
        if(x<5){ strcat(s,"O-|"); j=0;while(j<5){if(x>0) strcat(s,"O");else if(x==0) strcat(s,"-"); else strcat(s,"O"); x--;j++;}}
        else {strcat(s,"-O|"); x-=5; j=0;while(j<5){if(x>0) strcat(s,"O");else if(x==0) strcat(s,"-"); else strcat(s,"O"); x--;j++; } }
        printf("%s\n",s); memset(s,0,sizeof(s));
    }    return 0;
}
