#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
    char *s;
    scanf("%s",s);
    int i,l=strlen(s),f=0,c=0,d=0,e=0;
    if(l<5){
        printf("Too weak");
        return 0;
    }
    else{
        for(i=0;i<l;i++){
            if(s[i]>=97 && s[i]<=122){
                if(d==0)f++;
                d=1;
            }
            else if(s[i]>=65 && s[i]<=90){
                if(c==0)f++;
                c=1;
            }
            else if(s[i]>=48 && s[i]<=57){
                if(e==0)f++;
                e=1;

            }
        }
    }
    if(f==3){
        printf("Correct");
    }
    else{
        printf("Too weak");
    }
    return 0;
}
