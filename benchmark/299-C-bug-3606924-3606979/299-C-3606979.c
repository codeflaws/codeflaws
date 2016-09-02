#include <stdio.h>
#include <string.h>
#include <math.h>
char s1[2000010],s2[2000010];
int main(int argc, char *argv[])
{
    int i,j,n,m,s,t,k;
    int sum1,sum2,sum3,sum4;
    while(scanf("%d",&n)!=EOF)
    {
        scanf("%s",s1);
        scanf("%s",s2);
        sum1=sum2=sum3=sum4=0;
        for(i=0;i<=2*n-1;i++)
        {
            if(s1[i]=='1'&&s2[i]=='0')
            {
                sum1+=1;
            }else if(s1[i]=='0'&&s2[i]=='1')
            {
                sum2+=1;
            }else if(s1[i]=='1'&&s2[i]=='1')
            {
                sum3+=1;
            }
        }
        k=0;
        if(sum3%2==0)
        {
            if(sum1==sum2)
            {
                k=3;
            }else if(sum1>sum2)
            {
                k=1;
            }else
            {
                if(sum2-sum1==1)
                {
                    k=3;
                }else
                {
                    k=2;
                }
            }
        }else
        {
            if(sum1==sum2)
            {
                k=1;
            }else if(sum1>sum2)
            {
                k=1;
            }else
            {
                if(sum2-sum1<=2)
                {
                    k=3;
                }else
                {
                    k=2;
                }
            }
        }
        if(k==1)
        {
            printf("First\n");
        }else if(k==2)
        {
            printf("Second\n");
        }else
        {
            printf("Draw\n");
        }
    }
    return 0;
}
