#include<stdio.h>
#include<string.h>
char s[100010],t[100010];
int main(int argc, char *argv[]) {
int a=0,b=0,p,i,q;
gets(s);
gets(t);
for(i=0;s[i]!='|';i++) {
a++;
}
b=strlen(s)-1-a;
if((a==b)&&strlen(t)&1==1){
    puts("Impossible"); return 0;
}
else if((a==b)&&strlen(t)%2==0) {
    for(i=0;i<strlen(t)/2;i++)
        printf("%c",t[i]);
    printf("%s",s);
    for(i=strlen(t)/2;i<strlen(t);i++)
    printf("%c",t[i]);
    return 0;
}
//printf("%d %d",a,b);
if(a!=b){
    if(a>b) {
        p=a-b;
        q=strlen(t)-p;
        if(q==0){
            printf("%s",s);
            for(i=0;i<p;i++) printf("%c",t[i]);
        }
        else if(q>0){
            if(q%2==0){
                for(i=0;i<q/2;i++) printf("%c",t[i]);
                printf("%s",s);
                for(i=q/2;t[i]!='\0';i++) printf("%c",t[i]);
            }
            else printf("Impossible");
        }
        else
            puts("Impossible");
    }
    else {
        p=b-a;
        q=strlen(t)-p;
        if(q==0) {
            for(i=0;i<p;i++) printf("%c",t[i]);
            printf("%s",s);
        }
        else if(q>0) {
            if(q%2==0) {
                for(i=0;i<(p+(q/2));i++) printf("%c",t[i]);
                printf("%s",s);
                for(i=(p+(q/2));t[i]!='\0';i++) printf("%c",t[i]);
            }

        }
        else puts("Impossible");
    }
}
return 0;
}
