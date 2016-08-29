    #include <stdio.h>
    #include <stdlib.h>
    int main(int argc, char *argv[])
    {
        int n,d,i,a,s=0;
        scanf("%d%d",&n,&d);
        for(i=1;i<=n;i++)
        {
            scanf("%d",&a);
            s=s+a;
        }
        s=s+(n-1)*10;
        if((d-s)%5==0)
        {
            printf("%d\n",(d-s)/5+(n-1)*2);
        }
        else
            printf("-1");
        return 0;
    }
