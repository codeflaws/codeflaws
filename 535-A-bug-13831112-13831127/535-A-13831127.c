#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
    char line[4];
    char number[100][20] = {"zero","one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};

    int i,l;
    int n;

    scanf("%s",line);
    l = strlen(line);
    if(l==1){
        for(i=0;i<10;i++){
            if(line[0]-'0'==i){
                printf("%s\n",number[i]);
                break;
            }
        }
    }
    else{
        n = 10 * (line[0] - '0') + (line[1]- '0');
        if(n >= 10 && n <= 19){
            for(i=10;i<20;i++){
                if(n==i){
                    printf("%s\n",number[i]);
                    break;
                }
            }
        }
        else{
            for(i=2;i<=9;i++){
                if(line[0]-'0' == i){
                    if(line[1]-'0'== 0){
                    printf("%s\n",number[18+i]);
                    break;
                    }
                    printf("%s-",number[18+i]);
                    for(i=0;i<=9;i++){
                        if(line[1]-'0' == i){
                            printf("%s\n",number[i]);
                            break;
                        }
                    }
                    break;
                }

            }
        }
    }

        return 0;

}
