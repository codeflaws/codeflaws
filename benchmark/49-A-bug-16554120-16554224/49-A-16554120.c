#include<stdio.h>
int main(int argc, char *argv[]){
    int i;
    char str[200];
    gets(str);
    int n=strlen(str);
    for(i=n-1;i>=0;i--){
        if(str[i]>='a'&&str[i]<='z'||str[i]>='A'&&str[i]<='Z'){
            if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U') printf("YES");
            else printf("NO");
            return 0;
        }
    }
    printf("NO");
    return 0;
}
