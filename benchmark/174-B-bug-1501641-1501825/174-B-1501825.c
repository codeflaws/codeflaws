#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
        int l,i,j,f,l1,A[500000],sum=0;
        char a[500000];
        scanf("%s",a);
        l1=strlen(a);
        sum=0;l=0;
        for(i=0;i<l1;i++)
        {
                if(a[i]=='.')
                {
                        A[l++]=sum;
                        sum=0;
                }
                else
                        sum++;
        }
        A[l++]=sum;f=0;
        //printf("%d %d %d %d %d\n",A[0],A[1],A[2],A[3],l);
        if(A[0]>8 || A[0]<1)
        {
                f=1;
        //      printf("here");
        }
        if(A[l-1]>3 || A[l-1]<1)
        {
                f=1;
        //      printf("here2");
        }
        for(i=1;i<l-1;i++)
                if(A[i]>11 || A[i]<2)
                        f=1;
        if(l<=1)
                f=1;
        sum=0;
        if(f==1)
                printf("NO\n");
        else
        {
                printf("YES\n");
                for(i=0;i<l;i++)
                {
                        if(i==0)
                        {
                                for(j=0;j<A[0];j++)
                                        printf("%c",a[j]);
                                sum+=A[0];
                        }
                        else if(i==(l-1))
                        {
                                sum++;
                                printf(".");
                                for(j=sum;j<sum+A[i];j++)
                                        printf("%c",a[j]);
                                printf("\n");
                        }
                        else
                        {
                                sum++;
                                printf(".");
                                if(A[i]>3)
                                {
                                        for(j=sum;j<sum+3;j++)
                                                printf("%c",a[j]);
                                        printf("\n");
                                        for(;j<sum+A[i];j++)
                                                printf("%c",a[j]);
                                }
                                else
                                {
                                        for(j=sum;j<sum+1;j++)
                                                printf("%c",a[j]);
                                        printf("\n");
                                        for(;j<sum+A[i];j++)
                                                printf("%c",a[j]);
                                }
                                sum+=A[i];
                        }
                }
        }
        return 0;
}
