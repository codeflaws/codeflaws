#include<stdio.h>
#include<math.h>
int main(int argc, char *argv[])
{
    int x,i=1,k,j=1,l,cnt=0;
    scanf("%d",&x);int p[100],q[100];
    /*for(i=1;i<100;i++)
    {
        p[i]=0;
    } */
   for(k=1;k<=sqrt(x);k++)
   {
       if(x%k==0)
       {
           p[i++]=k;
           p[i++]=x/k;
       }
   }
    if(p[i-2]==p[i-1])
    i=i-1;

    while(x>0)
    {
        q[j++]=x%10;
        x=x/10;
    }
    int m,t,tmp=0;
    for(k=1;k<i;k++)
    {
        while(p[k]>0)
        {
            tmp=0;
            t= p[k]%10;
            for(m=1;m<j;m++)
            {
                if(t==q[m])
                {
                    cnt++;
                    tmp++;
                    break;
                }
            }
            if(tmp==1)
                break;
            p[k]=p[k]/10;
        }
    }

    printf("%d",cnt);
    return 0;
}
