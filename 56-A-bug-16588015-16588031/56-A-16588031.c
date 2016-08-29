#include<stdio.h>
int main(int argc, char *argv[]){
    char str[][1000]={"ABSINTH", "BEER", "BRANDY", "CHAMPAGNE", "GIN", "RUM", "SAKE", "TEQUILA", "VODKA", "WHISKEY", "WINE"};
    int n,cnt=0,p=0,i,j;
    char t[10000];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s",t);
        if(t[0]>'0'&&t[0]>'9')
        for(j=0;j<11;j++){
            if(strcmp(str[j],t)==0){
                cnt+=1;
                break;
            }
        }
        else{
            p=0;
            for(j=0;j<strlen(t);j++){
                p=p*10+t[j]-'0';
            }
            if(p<18) cnt+=1;
        }
    }
    printf("%d",cnt);
    return 0;

}
