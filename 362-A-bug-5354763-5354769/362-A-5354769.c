#include<stdio.h>

int main(int argc, char *argv[])
{
    int t;
    int i,j;
    char a;
    int x1,y1,x2,y2;
    int sign=1;

    scanf("%d",&t);
    while(--t>=0)
    {
        sign=1;
        for(i=0;i<8;i++)
        {
            for(j=0;j<8;j++)
            {
                scanf("%c",&a);
                if(a!='.'&&a!='#'&&a!='K')
                    j--;
                if(a=='K')
                    if(sign)
                    {
                        x1=i+1;
                        y1=j+1;
                        sign=0;
                    }
                    else
                    {
                        x2=i+1;
                        y2=j+1;
                    }
            }
        }
        if((x2-x1)%4==0&&(y2-y1)%4==0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
