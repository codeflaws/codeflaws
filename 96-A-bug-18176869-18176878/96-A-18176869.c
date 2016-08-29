#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){
    int flag=0,i,len;
    char str[120];
    gets(str);

    len=strlen(str);

    for(i=0;i<len-7;i++){
        if(strncmp(str+i,"1111111",7)==0){
            flag=1;
            break;
        }
        else if (strncmp(str+i,"0000000",7)==0){
            flag=1;
            break;
        }

    }

    if(flag==1){
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }

    return 0;

}



