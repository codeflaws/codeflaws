#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
    int i,j,k,l,a,b,m,n,x,z;
    char st[1000],ar[19]="nineteen",c;
    gets(st);
    l=strlen(st);
    ar[3]=0;a=0;b=0;ar[2]=0;ar[0]=0;ar[1]=0;
    for(i=0;i<l;i++)
    {
        if(st[i]=='n')
        {
            a++;
            if(a==2){
            ar[0]++;a=0;}
        }
        if(st[i]=='e')
        {b++;
        if(b==3){
        ar[1]++;
        b=0;}
        }
        if(st[i]=='i')
        ar[2]++;
        if(st[i]=='t')
        ar[3]++;

    }
    if(a==0&&ar[0]>0)
    ar[0]--;
    int min=105;
    for(i=0;i<4;i++)
    {
        if(ar[i]<min)
        min=ar[i];
    }
    printf("%d\n",min);
    return 0;
}
