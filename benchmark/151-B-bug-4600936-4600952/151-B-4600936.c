#include<stdio.h>
int main(int argc, char *argv[])
{
    int n,x=0,girl,taxi,pizza,c=0,y,i,num,max;
    scanf("%d",&n);
    char ch;
    char s[10];
    char name[n][25];
    int b[300]={0};
    for(i=0;i<n;i++)
    {
        scanf("%d",&num);
        scanf("%s",&name[i][0]);
        girl=0;taxi=0;pizza=0;
        while(num--)
        {
            scanf("%c",&ch);
            scanf("%s",&s);
            if(s[0]==s[1]&&s[1]==s[3]&&s[3]==s[4]&&s[4]==s[6]&&s[6]==s[7])
            taxi++;
            else if(s[0]>s[1]&&s[1]>s[3]&&s[3]>s[4]&&s[4]>s[6]&&s[6]>s[7])
            pizza++;
            else girl++;
        }
        b[x++]=taxi;
        b[x++]=pizza;
        b[x++]=girl;
    }
printf("If you want to call a taxi, you should call: ");

max=b[0];
for(i=0;i<x;i=i+3)
if(b[i]>max)
max=b[i];
for(i=0;i<x;i=i+3)
{
    if(b[i]==max)
    {
        y=i/3;
        if(c==0)
        {printf("%s",&name[y][0]);
        c++;}
        else
        printf(", %s",&name[y][0]);
    }
}
printf(".\n");
printf("If you want to order a pizza, you should call: ");
c=0;
max=b[1];
for(i=1;i<x;i=i+3)
if(b[i]>max)
max=b[i];
for(i=1;i<x;i=i+3)
{
    if(b[i]==max)
    {
        y=i/3;
        if(c==0)
        {printf("%s",&name[y][0]);
        c++;}
        else
        printf(", %s",&name[y][0]);
    }
}
printf(".\n");
c=0;
printf("If you want to go to a cafe with a wonderful girl, you should call: ");
max=b[2];
for(i=2;i<x;i=i+3)
if(b[i]>max)
max=b[i];
for(i=2;i<x;i=i+3)
{
    if(b[i]==max)
    {
        y=i/3;
        if(c==0)
        {printf("%s",&name[y][0]);
        c++;}
        else
        printf(" ,%s",&name[y][0]);
    }

}
printf(".\n");
return 0;
}

