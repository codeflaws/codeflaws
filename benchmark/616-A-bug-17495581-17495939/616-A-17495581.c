#include<stdio.h>

int main(int argc, char *argv[]){
    char a[1000001],b[1000001];
    int i=0,j=0,m,n,lengthA=0,lengthB=0,equal=0;
    scanf("%s%s",a,b);
    for(i=0;a[i]!='\0';i++){
        if(a[i]!='0') break;
    }
    for(j=0;b[j]!='\0';j++){
        if(b[j]!='0') break;
    }
    m=i;
    while(a[i]!='\0'){
        lengthA++;
        i++;
    }
    n=j;
    while(b[j]!='\0'){
        lengthB++;
        j++;
    }
    if(lengthA>lengthB) printf(">");
    else if(lengthA<lengthB) printf("<");
    else{
        for(i=m;a[i]!='\0';i++){
            if(a[i]>b[n]){
                printf(">");
                equal=0;
                break;
            }
            else if(a[i]<b[n]){
                printf("<");
                equal=0;
                break;
            }
            else {
                equal=1;
                n++;
            }
        }
        if(equal==1) printf("=");
    }
    return 0;
}
