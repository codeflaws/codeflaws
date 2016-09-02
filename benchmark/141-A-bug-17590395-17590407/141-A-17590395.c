#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
    char str1[1000],str2[1000],str3[1000],flag=0,blag=0;
    int i,j,count=0,count1=0,count3;
    scanf("%[^\n]",str1);
    scanf(" %[^\n]",str2);
    scanf(" %[^\n]",str3);

    for(i=0;str1[i];i++){

        for(j=0;str3[j];j++){

            if(str1[i]==str3[j]){
                count++;
                str1[i]='^';
                str3[j]='*';
            }
        }
    }
    if(count==strlen(str1)){
        flag=1;
    }
    else {
        puts(str3);
        printf("%d\n",count);
        printf("NO");
        return 0;
    }

    for(i=0;str2[i];i++){

        for(j=0;str3[j];j++){

            if(str2[i]==str3[j]){
                count1++;
                 str2[i]='^';
                str3[j]='*';
            }
        }
    }
    if(count1==strlen(str2))
    {
        blag=1;
    }
    else {
        printf("NO");
        return 0;
    }
    count3=strlen(str3);
    if(count+count1==count3){
        printf("YES");
    }
    else printf("NO");

}
