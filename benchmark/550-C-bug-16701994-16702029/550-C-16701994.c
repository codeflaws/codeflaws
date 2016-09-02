#include<stdio.h>
#include<string.h>
#include<math.h>
#include<limits.h>
int main(int argc, char *argv[]){
    char arr[5000];
    gets(arr);
    int x=strlen(arr);
    int a,b,c;
    for(a=0;a<x;a++){
            if((arr[a]-'0')%8==0){
                    printf("YES\n%c",arr[a]);
                    return 0;
            }
    }
    for(a=0;a<x;a++){
            for(b=0;b<x;b++){
                    if(b==a)
                    continue;
            int s=(arr[a]-'0')*10 + (arr[b]-'0');
            if(s%8==0){
                    printf("YES\n%d",s);
                    return 0;
            }
            }
    }
    for(a=0;a<x;a++){
            for(b=a+1;b<x;b++){
                    for(c=b+1;c<x;c++){
                        int s=(arr[a]-'0')*100 + (arr[b]-'0')*10 + (arr[c]-'0');
                    if(s%8==0){
                            printf("YES\n%d",s);
                            return 0;
                    }
                }
            }
    }
    printf("NO");
}
