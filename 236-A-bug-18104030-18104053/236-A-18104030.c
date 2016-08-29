#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[])
{
    char str[20],temp;
    int i,j,k,count=0;
    scanf("%s",str);
    for(i=0;i<strlen(str);i++){
        for(j=0;j<strlen(str)-1;j++){
            if(str[j]>str[j+1]){
                temp=str[j];
                str[j]=str[j+1];
                str[j+1]=temp;
            }
        }
    }
    //printf("%s\n",str);
    for(i=0;i<strlen(str);i++){
        if(str[i]!=str[i+1])
            count++;
        if(str[i]==str[i+1]){
            count++;
            for(j=i;;j++){
                if(str[j]!=str[j+1]){

                    i=j;
                    break;
                }
            }
        }
        continue;
    }
    //printf("%d\n",count);
    if(count%2==0)
        printf("CHAT WITH HER!\n");
    else
        printf("IGNORE HIM!\n");

    return 0;
}
