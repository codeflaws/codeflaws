#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
    long long int i,m,max,ck1=0,ck2=0,ck3=0,ck4=0;
    char a[100];
    scanf("%s",a);
    long long int s=strlen(a);
    for(i=0;i<s;i++)
    {

        if(a[i]=='n') ck1++;
        if(a[i]=='i') ck2++;
        if(a[i]=='t') ck3++;
        if(a[i]=='e') ck4++;
    }
    if(ck1<3) m=0;
    else m=1;
    max=(ck1-3)/2;
    if(max<0) max=0;
    ck1=m+max;
    ck4=ck4/3;
    long long int min=ck1;
    long long int b[4]={ck1,ck2,ck3,ck4};
    for(i=0;i<4;i++)
    {
        if(min>b[i]) min=b[i];
    }
    printf("%I64d",min);

    return 0;

}
