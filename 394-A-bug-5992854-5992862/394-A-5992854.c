#include<stdio.h>
char s[303];
int main(int argc, char *argv[])
{
    int i,a,b,c,k;
    while(~scanf("%s",s)){
        a=b=c=0;
        for(i=0;s[i]!='+';i++)
            a++;
        for(i=a+1;s[i]!='=';i++)
            b++;
        for(i=a+b+2;s[i];i++)
            c++;
        if(a+b==c)
            printf("%s",s);
        else {
            if(a+b+1==c-1){
                    a++;
                    c--;
            }
            if(a+b-1==c+1){
                    c--;
                    if(a==1)b--;
                    else a--;
            }
            if(a+b==c){
                for(i=0;i<a;i++)
                    printf("|");
                printf("+");
                for(i=0;i<b;i++)
                    printf("|");
                printf("=");
                for(i=0;i<c;i++)
                    printf("|");
            }
            else printf("Impossible");
        }
        printf("\n");
    }
    return 0;
}
