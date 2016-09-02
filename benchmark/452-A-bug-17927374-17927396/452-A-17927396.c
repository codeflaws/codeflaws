#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
    char str[10];
    int k;
    scanf("%d",&k);
    scanf("%s",str);
    if(k==8)printf("vaporeon\n");
    else if(k==6)printf("espeon\n");
    else{
        if(str[0]=='j'||str[1]=='o'||str[3]=='t')printf("jolteon\n");
        else if(str[0]=='l'||str[1]=='e'||str[3]=='f')printf("leafeon\n");
         else if(str[0]=='u'||str[1]=='m'||str[2]=='b')printf("umbreon\n");
          else if(str[0]=='s'||str[1]=='y'||str[3]=='v')printf("sylveon\n");
           else if(str[0]=='f'||str[3]=='r')printf("flareon\n");
        else
            printf("glaceon\n");

    }
return 0;
}
