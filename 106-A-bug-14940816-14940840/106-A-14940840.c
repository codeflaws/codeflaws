#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[])
{
    int i,j,w,g,h;
    char c[2];
    char str[100];
    char ch[11]={'6','7','8','9','T','J','Q','K','A'};
    scanf("%s\n",c);

        gets(str);

    //printf("%c",ch[0]);
    if (str[1]==c[0] && str[4]==c[0]){
for (i=0;i<9;i++){
            if(ch[i]==str[0]){
                g=i+1;
                 
                break;
            }
        }
        for (i=0;i<9;i++){
            if(ch[i]==str[3]){
                h=i+1;
                break;
            }
        }
        if(g>h){
            printf("YES");
        }
        else{
            printf("NO");
        }
    }
    else if(str[1]==c[0]){
        printf("YES");
    }
    else if (str[4]==c[0]){
        printf("NO");
    }
    else{
        for (i=0;i<9;i++){
            if(ch[i]==str[0]){
                g=i+1;
                 
                break;
            }
        }
        for (i=0;i<9;i++){
            if(ch[i]==str[3]){
                h=i+1;
                break;
            }
        }

        if (str[1]==str[4]){
                if (g>h){
                printf("YES");
            }
            else{
                printf("NO");
            }
        }
        else{
            printf("NO");
        }
    }
    return 0;
}