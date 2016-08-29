#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char islm[105];
int artilar[105],eksiler[105],a,b;
int n,arti,eksi,sayi;
int readInp(){
    FILE *inp = stdin;
    char c;
    while(!feof(inp)){
        fscanf(inp,"%c ",&c);
        switch(c){
        case '+':
            islm[n++] = c;
            arti ++;
            break;
        case '-':
            islm[n++] = c;
            eksi++;
            break;
        case '=':
            while(!feof(inp)){
                sayi*=10;
                fscanf(inp,"%c ",&c);
                sayi+=c-'0';
            }
            return 0;

        }
    }
}
int main(int argc, char *argv[])
{
    readInp();
    int i;

    if(eksi*sayi<(arti)) {
        for(i=0;i<sayi;i++)artilar[a++]=1;
        arti-=sayi;
        arti++;
    } else artilar[a++]=sayi;
    while(arti>sayi || eksi>sayi){
        if(arti<=1 || eksi <=1){
            printf("Impossible\n");
            return 0;
        }
        if(arti>=eksi) {
            arti-=sayi;
            eksi--;
            for(i=0;i<sayi;i++)artilar[a++]=1;
            eksiler[b++]=sayi;
        } else {
            arti--;
            eksi-=sayi;
            for(i=0;i<sayi;i++)eksiler[b++]=1;
            artilar[a++]=sayi;
        }
    }
    if(arti+eksi>0 && (!arti ||!eksi)){
        printf("Impossible\n");
        return 0;
    }
    for(i=0;i<eksi;i++)eksiler[b++]=arti;
    for(i=0;i<arti;i++)artilar[a++]=eksi;
    int x,y,o;
    x=1;y=0;
        printf("Possible\n");
    printf("%d ",artilar[0]);
    for(i=0;i<n;i++){
        printf("%c ",islm[i]);
        if(islm[i]=='+'){
            o = artilar[x++];
        } else o=eksiler[y++];
        printf("%d ",o);
    }
    printf("= %d\n",sayi);
    return 0;
}
