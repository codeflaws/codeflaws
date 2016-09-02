#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    char initial[28];
    gets(initial);
    int i,left=0,right;
    for(i=0;i<strlen(initial) && initial[i]!='|';i++)  left++;
    right=strlen(initial)-left-1;

    char added[28-strlen(initial)];
    gets(added);
    if(abs(left-right)==strlen(added) || ((strlen(added)>(abs(left-right)))&&((strlen(added)-abs(left-right))%2==0))){
        if(left<right){
            for(i=0;i<(right-left);i++) printf("%c",added[i]);
            int j,k;
            for(j=0;j<(strlen(added)-right+left)/2;j++) printf("%c",added[j+i]);
            printf("%s",initial);
            for(k=0;k<(strlen(added)-right+left)/2;k++) printf("%c",added[k+j+i]);
        }
        else{
            for(i=0;i<(strlen(added)-left+right)/2;i++) printf("%c",added[i]);
            printf("%s",initial);
            int j,k;
            for(j=0;j<(strlen(added)-right+left)/2;j++) printf("%c",added[j+i]);
            for(k=0;k<(left-right);k++) printf("%c",added[k+j+i]);
        }
    }
    else printf("Impossible");

return 0;
}
