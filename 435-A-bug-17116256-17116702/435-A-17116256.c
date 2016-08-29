#include<stdio.h>
int main(int argc, char *argv[])
{
        int a,b,i,k,c,count=1;
        scanf("%d %d",&a,&b);
        k=b;
        for(i=1;i<=a;i++)
        {
                scanf("%d",&c);
                if(k>=c)
                {
                        k=k-c;
                }
                else
                {
                     k=3;
                    count++;
                    k=k-c;
                }

        }
        printf("%d",count);
return 0;
}
