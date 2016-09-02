#include<stdio.h>

int main(int argc, char *argv[])
{
    int i,j,a,b,c,flag=0;

    scanf("%d %d %d",&a,&b,&c);

    for(i=0;;i++)
    {
        for(j=0;;j++)
        {
            if(a*i+b*j==c)
            {
                flag=1;
                break;
            }
            if(a*i+b*j>c)
            {
                break;
            }
        }
        if(flag==1)
            break;
        if(a*i>c&&b*j>c)
        {
            break;
        }
    }
    if(flag==1)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }

    return 0;
}
