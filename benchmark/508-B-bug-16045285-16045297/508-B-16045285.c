#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
    long long int a,b,c,i=0,j,k,f=0;
    char s[110000];
    scanf("%s",&s);
    a=strlen(s);
    for(i=a-1;i>=0;i--){
            b=s[i]-'0';
        if(b%2==0&&f==0){
                k=s[i];c=i;f=1;
                //printf("%d\n",b/2);
                break;
        }
    }
   // printf("%d\n",a);
   /*for(j=0;j<a;j++){
        printf("%c ",s[j]);
    }*/
    if(f==1){
    for(j=a-1;j>=0;j--){
            b=s[j]-'0';
        if(b%2==0&&s[a-1]>s[j]) {k=s[j];c=j;}
    }
    }
    j=s[a-1];
    s[a-1]=k;
    s[c]=j;
    if(f==1){
        for(j=0;j<=a;j++){
            printf("%c",s[j]);
        }
    }
    else printf("%d",-1);
    return 0;
}
