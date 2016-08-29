#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int value(char c){
    if(c>='0' && c<='9') return c-'0';
    else if(c>='A' && c<='Z' ) return c-'A'+10;
    else {
        printf("Error radix\n");
        return -1;
    }
}
int valueR(char* num,int radix){
    int i;
    int rt=0;
    for(i=0;i<strlen(num);i++){
        rt=rt*radix+value(num[i]);
    }
    return rt;
}
int main(int argc, char *argv[]){
    char num[20];
    char num1[6];
    char num2[6];
    
    int max=0;
    int i,j;
    int check,c;
    
    scanf("%s",num);
    check=0;//count 0
    c=0;
    for(i=0;num[i]!=':';i++){
        if(num[i]!='0') check=1;
        if(check==1){
            num1[c++]=num[i];
            if(value(num[i])>max) max= value(num[i]);
        }
    }
    num1[c]='\0';
    
    check=0;
    c=0;
    i++;
    for(;num[i]!='\0';i++){
        if(num[i]!='0') check=1;
        if(check==1) {
            num2[c++]=num[i];
            if(value(num[i])>max) max= value(num[i]);
        }
    }
    num2[c]='\0';

    //printf("\n%s:%s %d\n",num1,num2,max);
    
    //caculate
    if(strlen(num1)<=1&&value(num1[0])<24&&strlen(num2)<=1&&value(num2[0])<60) printf("-1\n");
    else{
        i=max+1;
        check=0;
        while(1){
            //check radix i
            if(valueR(num1,i)<24 && valueR(num2,i)<60){
                printf("%d ",i);
                check=1;
            }else{
                if(check==0) printf("0");
                break;
            }
            i++;
        }
    }
    return 0;
}