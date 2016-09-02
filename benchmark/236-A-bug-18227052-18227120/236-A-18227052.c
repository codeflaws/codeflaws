#include<stdio.h>
int main(int argc, char *argv[])
{
    char s1[100];
    int i,j,c1=0,c2=0,a,l;
    gets(s1);
    l=strlen(s1);
    for(i=0;i<l;i++){
        for(j=0;j!=i&&j<l;j++){
            if(s1[i]==s1[j]){
                c2++;
            }
        }
        c1++;
    }
    a=c1-c2;
    if(a%2==0){
        printf("CHAT WITH HER!");
    }
    else{
        printf("IGNORE HIM!");
    }
    //printf("%d %d",c1,c2);
    return 0;
}
