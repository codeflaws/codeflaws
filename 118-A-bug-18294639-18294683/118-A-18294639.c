#include<stdio.h>

int main(int argc, char *argv[])
{
    int n,i;
    char st[101];
    scanf("%s",st);
    for(i=0;st[i]!='\0';i++){
        if(st[i]<=90){
            st[i]=st[i]+32;
        }
        if(st[i]!='a'&&st[i]!='e'&&st[i]!='i'&&st[i]!='o'&&st[i]!='u'){
            printf("%c%c",'.',st[i]);
        }
    }
return 0;
}