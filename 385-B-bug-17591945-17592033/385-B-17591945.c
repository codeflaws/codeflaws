#include <stdio.h>

int main(int argc, char *argv[])
{
    int oldi=-1,count=0;
    char s[5001];

    scanf("%s",s);

    for(int i=0;i<strlen(s)-3;i++)
        //for(int j=i;j<strlen(s)-3;j++)
            if(s[i]=='b' && s[i+1]=='e' && s[i+2]=='a' && s[i+3]=='r')
            {
                //++c;
                count+=((strlen(s)-(i+4))+1) * ((i)-oldi);
                oldi=i;
            }

    printf("%d",count);

    return 0;

}
