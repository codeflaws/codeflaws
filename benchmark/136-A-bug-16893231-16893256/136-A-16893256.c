#include<stdio.h>

int main(int argc, char *argv[])
{
    int num,i,j,temp;
    scanf("%d",&num);
    int ip[num];
    for(i=0;i<num;i++)
    {
        scanf("%d",&ip[i]);
    }
    for(i=0;i<num;i++)
    {
        for(j=0;j<num;j++)
        {
            if(ip[j]==i+1)
            {
                printf("%d ",j+1);
            }
        }
    }


return 0;
}
