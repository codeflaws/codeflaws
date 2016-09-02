#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[]){
    int len,i,j;
    char str[3];
    char *x[]={"","","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
    char *y[]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    char *z[]={"ten","eleven","twelve","thirteen","forteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
    scanf("%s",str);
    len=strlen(str);
    if(len==1){
            i=str[0]-48;
    //printf("%s %d\n",str,i);
        printf("%s",y[i]);
    }

    else
    {
        if(str[0]=='1')
        {
            i=str[1]-48;
            printf("%s",z[i]);
        }
        else
        {
            i=str[0]-48;
            j=str[1]-48;
            if(str[1]=='0')
                printf("%s",x[i]);
            else
                printf("%s-%s",x[i],y[j]);
        }
    }

return 0;
}
