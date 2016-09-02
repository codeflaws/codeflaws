#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[])
{
    int k,a,b,length,size,i,t=0,remainder;
    char text[250];
    scanf("%d %d %d",&k,&a,&b);
    scanf("%s",&text);
    length=strlen(text);
    if(length>k*b || length<k*a){
        printf("No solution");
    }
    else{
        size=length/k;
        remainder=length%k;
        for(i=0;i<length;i++){
            printf("%c",text[i]);
            t++;
            if(t==size+(remainder!=0)){
                if(remainder!=0) remainder--;
                printf("\n");
                t=0;
            }
        }
    }
    return 0;
}
