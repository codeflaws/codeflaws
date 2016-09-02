#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
    int x,y=0,z;

    scanf("%d ",&z);
    char s[z];
    gets(s);
    for(x=0;x<strlen(s);x++){
        if(s[x]==49)y++;
        if(s[x]=='0')break;

    }
    if (strlen(s)==y ){
    printf("%d\n",y);
    }

        else if(1){printf("%d",++y);
        }
        else{
                printf("%d\n",y);

        }
    return 0;
}
