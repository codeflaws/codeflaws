#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[])
{
    char str[10005];
    int i,len,n,ara[26],max,sum1=0,sum2=0,res;
    scanf("%s %d",str,&n);
    for(i=0;i<26;i++){
        scanf("%d",&ara[i]);
    }
    len=strlen(str);
    max=ara[0];
    for(i=1;i<26;i++){
        if(ara[i]>max){
            max=ara[i];
        }
    }
    for(i=0;i<len;i++){
        sum1+=(i+1)*ara[i];
    }
    for(i=len;i<len+n;i++){
        sum2+=(i+1)*max;
    }
    res=sum1+sum2;
    printf("%d\n",res);
    return 0;
}