#include<stdio.h>
int main(int argc, char *argv[])
{
    int l,m;
    char a[6];
    scanf("%s", a);
    for(l = 0; a[l]!='\0'; l++){
        if(a[l]=='0'){
            m = l;
            break;
        }
    }
    for(l = 0;a[l]!='\0';l++){
        if(l!=m)printf("%c", a[l]);
    }
    return 0;
}