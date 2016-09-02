#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
    char ch[1000];
    int l,i,a=0,b=0,c=0,j;
    scanf("%s",ch);
    l=strlen(ch);

    for(i=0;i<l;i++){
        if(ch[i]=='1')
            a++;
           // printf("%d",a);
    }
    for(i=0;i<l;i++){
        if(ch[i]=='2')
            b++;
    }
    for(i=0;i<l;i++){
        if(ch[i]=='3')
            c++;
    }

    for(i=0;i<a;i++){
             if(b==0&&c==0&&i==a-1)
            printf("1");
    else
        printf("1+");
    }
    for(j=0;j<b;j++){
        if(c==0&&j==b-1)
            printf("2");
            else
        printf("2+");
    }
        for(i=0;i<c;i++){
                 if(i==c-1)
        printf("3");
        else
        printf("3+");
        }


return 0;
}
