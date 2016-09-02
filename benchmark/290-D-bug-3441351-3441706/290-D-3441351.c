#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
    int x,y;
    int i,N;
    char st[53];
    //scanf("%d%d",&x,&y);
    //if(x<=y)printf("0\n");
    //else printf("1\n");
    gets(st);
    scanf("%d",&N);
    for(i=0;st[i]!='\0';i++)
    if(st[i]<N+97)
    st[i]=toupper(st[i]);
    else st[i]=tolower(st[i]);
    //putchar('A'+14);
   // printf("%d",'a'+14);
   puts(st);
    return 0;
}
