#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char remix[201], song[201];
    scanf("%s", remix);
    int len=strlen(remix), i=0, j=0,flag=1,flag2=1;
    if(remix[0]=='W'&&remix[1]=='U'&&remix[2]=='B'){
        flag=0;
    }
    //printf("%d %s\n", ct, remix);
    while(i<len){
        if(remix[i]=='W' && remix[i+1]=='U' && remix[i+2]=='B'){
            i+=3;
            if(flag!=0 && flag2!=0){
                song[j]=' ';
                j++;
                flag=1;
                flag2=0;
            }
        }
        else{
            song[j]=remix[i];
            j++;
            i++;
            flag=1;
            flag2=1;
        }
    } 
    if(song[j-1]==' '){
        song[j-1]='\0';
    }
    else{
        song[j]='\0';
    }
    printf("%s\n", song);
    return 0;   
}
