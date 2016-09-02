#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){
    int len, i, flag=0;
    char str[120];
    gets(str);

    len=strlen(str);

    if(len==1){
        if( str[0]>='a' && str[0]<= 'z' ){
            printf("%c\n",(str[0]-'a'+'A' ) );
        }
        else{
            printf("%s\n",str);
        }
        return 0;

    }

    if( (str[0]>='A' && str[0]<= 'Z' && str[1]>='A' && str[1]<='Z') ){
        flag=1;
        for(i=2;i<len;i++){
            if( str[i]>'Z' || str[i]<'A' ) {
                flag=0;
                break;
            }
        }

        if(flag==1){
            for(i=0;i<len;i++){
                printf("%c",(str[i]-'A'+'a'));
            }
            printf("\n");
            return 0;
        }
    }

    else if((str[0]>='a' && str[0]<= 'z' && str[1]>='A' && str[1]<='Z')){
        flag=1;
        for(i=2;i<len;i++){
            if( str[i]>'Z' || str[i]<'A' ) {
                flag=0;
                break;
            }
        }
        if(flag==1){
            printf("%c", ( str[0]-'a'+'A' ) );
            for(i=1;i<len;i++){
                printf("%c",(str[i]-'A'+'a'));
            }
             printf("\n");
             return 0;
        }

    }

    printf("%s\n",str);


    return 0;

}



