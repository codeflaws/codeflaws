#include<stdio.h>
int q,b,ind,l;
int r[25];
int p[11];
int temp(int lvl);
int main(int argc, char *argv[]){
    int i,o,m;
    char s[11];
    scanf("%s",s);
    for(i=o=0;s[i]!='\0';i++){
        if(s[i]=='+'){
            o++;
        }else{
            o--;
        }
    }
    scanf("%s",s);
    for(i=m=b=0;s[i]!='\0';i++){
        if(s[i]=='+'){
            m++;
        }
        if (s[i]=='-'){
            m--;
        }
        if (s[i]=='?'){
            b++;
        }
    }
    temp(0);
    printf("%.10lf",((double)(r[o-m+11]))/((double)(1<<b)));
}
int temp(int lvl){
    if(lvl==b){
        for(ind=l=0;l<lvl;l++){
            ind+=p[l];
        }
        r[ind+11]++;
    }else{
        for(p[lvl]=-1;p[lvl]<2;p[lvl]+=2){
            temp(lvl+1);
        }
    }
return 0;
}
