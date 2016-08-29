#include<stdio.h>
int main(int argc, char *argv[])
{
    int n,m,min,max,a[200],flag,i,flagmin=0,flagmax=0,flagminch=0,flagmaxch=0;
    scanf("%d %d %d %d",&n,&m,&min,&max);
    flag=2;
    for(i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]==min&&flagminch==0)
        {
            flag--;
            flagminch=1;
        }
        else if(a[i]==max&flagmaxch==0)
        {
            flag--;
            flagmaxch=1;
        }
        else if(a[i]<min&&flagmin==0)
        {
            flag++;
            flagmin=1;
        }
        else if(a[i]>max&&flagmax==0)
        {
            flag++;
            flagmax=1;
        }
    }
    if(flag<0)
    flag=0;
    if(flag>2)
    flag=2;
    if(flag==0||(n-m)>=flag)
    printf("Correct");
    else
    printf("Incorrect");
    return 0;
}