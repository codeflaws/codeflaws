#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[]){
    char *str1="WBWBWBWB";
    char *str2="BWBWBWBW";
    char s[9][9];
    int n=0,m=0,i;
    for(i=0;i<8;++i)
        scanf("%s",s[i]);
    for(i=0;i<8;++i){
        if(strcmp(s[i],str1)==0)
            n++;
        if(strcmp(s[i],str2)==0)
            m++;
    }
    //printf("%d %d",m,n);
    if(n==4&&m==4)
        printf("YES\n");
    else
        printf("NO\n");
return 0;
}
