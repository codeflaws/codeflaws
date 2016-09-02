#include<stdio.h>

int main(int argc, char *argv[])
{
    int a[6],rep[6];
    int i,j,c,k=0;
    for(i=0;i<6;i++)
        scanf("%d",&a[i]);
    if(a[0]==a[1]&&a[1]==a[2]&&a[2]==a[3]&&a[3]==a[4]&&a[4]==a[5])
    {
        printf("Elephant\n");
        return 0;
    }
    for(i=0;i<6;i++)
        rep[i]=0;
    for(i=0;i<6;i++)
    {
        c=1;
        int flag=0;
        for(j=i+1;j<6;j++)
        {
           if(a[i]==a[j]&&a[j]!=0)
           {
               c++;
               a[j]=0;
               flag=1;
           }
        }
        if(flag==1)
        rep[k]=c;
        k++;
    }
    int flag1=0,flag2=0;
    for(i=0;i<6;i++)
        {
            if(rep[i]==4)
                flag1=1;
            if(rep[i]==2)
                flag2=1;
        }
    if(flag1==1&&flag2==0)
            printf("Bear\n");
    else if(flag1==1&&flag2==1)
            printf("Elephant\n");
    else
          printf("Alien\n");
    return 0;
}
