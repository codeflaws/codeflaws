#include<stdio.h>
#include<math.h>
int main(int argc, char *argv[])
{

    long long int n;
    scanf("%I64d",&n);
    long long int maxSq=sqrt(n);
    long long int sox,tmp;
    long long int i,j,ans;
    int flag=0;
    for(j=maxSq;j>=maxSq-200 && j>0;j--)
    {
        i=j*j;
        sox=0;
        tmp=j;
        while(tmp!=0)
        {
            sox=sox+tmp%10;
            tmp=tmp/10;
        }
        if((ans=(i+(sox*j)-n))==0)
        {
            printf("%I64d\n",j);
            flag=1;
            break;
        }
    }


    if(flag==0)
    {
        printf("-1\n");
    }
    return 0;
}
