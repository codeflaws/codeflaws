#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char n[1000],m[1000];
void readInp(){
    FILE *inp = fopen("input.txt","r");
    fscanf(inp,"%s %s ", &n,&m );
    if(!strcmp(n,m)){
        printf("%s\n",n);
    } else printf("1\n");
}
int main(int argc, char *argv[])
{
    readInp();
    return 0;
}
