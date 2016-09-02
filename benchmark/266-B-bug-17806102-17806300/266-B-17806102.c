#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[]){
    int x,y;
    char dizi[100],dizi1[100];
    scanf("%d",&x);
    scanf("%d",&y);
    scanf("%s",dizi);
    dizi[x]='\0';
    for(int i=0;i<y;i++){
        for(int a=0;a<x;a++){
            if(dizi[a]=='B'&&dizi[a+1]=='G'){
            dizi1[a]=dizi[a+1];    
            dizi1[a+1]=dizi[a];
            a++;}
          else{ dizi1[a]=dizi[a];}        
            }
        strcpy(dizi,dizi1);
  }
    printf("%s",dizi);
return 0;
}
