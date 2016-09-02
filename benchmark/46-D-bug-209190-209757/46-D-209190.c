#include <stdio.h>
long ll[10000]={0},rr[10000]={0},hash[200000]={0};
int main(int argc, char *argv[])
{
    long L,b,f,n,i,j,tot=0,st,flag,o,sum,w,op,ask;
    scanf("%ld %ld %ld\n",&L,&b,&f);
    scanf("%ld\n",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%ld %ld\n",&ask,&op);
        if(ask==1)
        {
            tot++;
            st=1; flag=0;
            while(1)
            {
                o=st;
                for(st++;st<=L;st++)
                    if(hash[st]!=hash[st-1])
                        break;
                if(hash[o]==0)
                {
                    sum=(st<=L?f:0);
                    w=(o>1?b:0);
                    if(sum+w+op<=st-o)
                    {
                        printf("%ld\n",o+w-1);
                        for(j=0;j<op;j++)
                            hash[j+o+w]=1;
                        ll[tot]=o+w; rr[tot]=o+w+op-1;
                        flag=1;
                        break;
                    }
                }
                if(st==L+1)
                    break;
            }
            if(!flag)
                printf("-1\n");
        }
        else
            for(j=ll[op];j<=rr[op];j++)
                hash[j]=0;
    }

    return 0;
}
