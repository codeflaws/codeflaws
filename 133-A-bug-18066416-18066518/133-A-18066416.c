#include <stdio.h>
int main(int argc, char *argv[])
{
    char str[101];
    scanf("%s",str);
    int i,j,k,ck=0;
    for(i=0;i<strlen(str);i++){
        if(str[i]=='H'||str[i]=='Q'||str[i]=='9'||str[i]=='+')
        {
            //printf("YES\n");
            ck=1;
            break;
        }
        else{
            ck=0;
        }
    }
    if(ck==1)
        printf("YES\n");
    else
        printf("NO\n");

}
