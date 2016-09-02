#include<stdio.h>
int main(int argc, char *argv[])
{
    int i,k,j,l,ar,swap,block1,block2;
    scanf("%d",&ar);
    int sort[ar],ip[ar];
    for(i=0; i<ar; i++)
    {
        scanf("%d",&ip[i]);

    }

    for(i=2; i<ar; i++)
    {

            if(ip[i]<ip[i-1])
            {
                swap=ip[i-1];
                ip[i-1]=ip[i];
                ip[i]=swap;
                i=1;
            }

    }
    if(ar%2==1)
    {
        block1=((ar/2)+1);
        block2=ar/2;
    }
    else
    {
        block1=(ar/2);
        block2=(ar/2);
    }
    int sm[block1],lg[block2];
    j=0;
    for(i=0; i<ar; i++)
    {
        if(i<block1)
            sm[i]=ip[i];
        else
            {

                lg[j]=ip[i];
                j++;
            }
    }

    j=0;
    k=block2-1;
    for(i=0; i<ar; i++)
    {
        if(i%2==0)
            {
             ip[i]=sm[j];
             j++;
            }
        else
        {
            ip[i]=lg[k];
            k--;
        }
    }


    for(i=0; i<ar; i++)
        printf("%d\t",ip[i]);
return 0;
}

