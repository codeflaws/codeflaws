#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
    char str[102];
    int p[4],n[4],d[4];
    long long int min,r;
    while(~scanf("%s",str))
    {
        int i;
        min=101;
        d[0]=d[1]=d[2]=0;
        for(i=0; i<3; i++)
        {
            scanf("%d",&n[i]);
        }
        for(i=0; i<3; i++)
        {
            scanf("%d",&p[i]);
        }
        scanf("%lld",&r);
        i=strlen(str)-1;
        for(; i>=0; i--)
        {
            if(str[i]=='B')d[0]++;
            else if(str[i]=='S')d[1]++;
            else if(str[i]=='C')d[2]++;
        }
        for(i=0; i<3; i++)
        {
            if(d[i]!=0&&(n[i]/d[i])<min)
                min=n[i]/d[i];
        }
        if(min==101)min=0;
        for(i=0; i<3; i++)
            n[i]=n[i]-d[i]*min;
        while(r>=0)
        {
            for(i=0; i<3; i++)
            {
                if(n[i]<d[i])
                {
                    r=r-p[i]*(d[i]-n[i]);
                    n[i]=0;
                }
                else n[i]-=d[i];

            }
            if(r>=0)
                min++;
            if(n[0]+n[1]+n[2]==0)
                break;
        }
        if(r<=0)r=0;
        min=min+r/(p[1]*d[1]+p[2]*d[2]+p[0]*d[0]);
        printf("%lld\n",min);

    }
return 0;
}
