#include<stdio.h>
int main(int argc, char *argv[])
{
    int n,i,livea=0,liveb=0,deada=0,deadb=0;
    short a,b,c;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%hd%hd%hd",&a,&b,&c);
        if(a==1)
        {
            livea+=b;
            deada+=c;
        }
        else
        {
            liveb+=b;
            deadb+=c;
        }
    }
    if(livea>=deadb)
        printf("LIVE\n");
    else
        printf("DEAD\n");
    if(liveb>=deadb)
        printf("LIVE\n");
    else
        printf("DEAD\n");
    return(0);
}
