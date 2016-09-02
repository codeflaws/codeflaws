#include<stdio.h>
int main(int argc, char *argv[])
{
    int x,y,p=0;
    scanf("%d %d",&x,&y);
    while(((x>=2)&&(y>=2))||((x==1)&&(y>=12))||((x==0)&&(y>=22)))
    {
        if(p==0)
        {
        if(x>=2&&y>=2)
        {
            x-=2;
            y-=2;
            p=1;
        }
        else if(x==1&&y>=12)
        {
            x--;
            y-=12;
            p=1;

        }
        else if(x==0&&y>=22)
        {
            y=y-22;
            p=1;

        }
    }
        if(p==1)
        {
            if(y>=22)
            {
                y-=22;
                p=0;

            }
            else if(y>=12&&x>=1)
            {
                y-=12;
                x--;
                p=0;

            }
            else if(y>=2&&x>=2)
            {
                y-=2;
                x-=2;
                p=0;

            }
        }
    }
    if(p==0)
        printf("Hanako");
    else
        printf("Ceil");
    return 0;
}





