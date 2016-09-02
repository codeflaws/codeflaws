#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    char str[120];
    int i, hello[5]={};

    scanf("%s",str);

    for(i=0; str[i]!=0;i++){
        if(hello[0]==0 && str[i]=='h'){
            hello[0]=1;
        }
        else if(hello[0]==1 && hello[1]==0 && str[i]=='e'){
            hello[1]=1;
        }
        else if(hello[1]==1 && hello[2]==0 && str[i]=='l'){
            hello[2]=1;
        }
        else if(hello[2]==1 && hello[3]==0 && str[i]=='l'){
            hello[3]=1;
        }
        else if(hello[3]==1 && hello[4]==0 && str[i]=='l'){
            hello[4]=1;
            break;
        }


    }

    if(hello[4]==1){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }



    return 0;

}

