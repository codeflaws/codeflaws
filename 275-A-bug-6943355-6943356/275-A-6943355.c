#include<stdio.h>
#include<math.h>
#include<ctype.h>
#include<string.h>
#define getchar getchar//_unlocked
#define M 1000000007

int getint ()
{
        int  n=0;
        char ch=getchar();

        while(ch<'0' || ch>'9')
            ch=getchar();

        while(ch>='0' && ch<='9')
        {
                n=n*10+ch-'0';
                ch=getchar();
        }

        return n;

}


unsigned long long gcd(unsigned long long a, unsigned long long b)
{


        unsigned long long div=a,did=b,rem;

        while((rem=did%div)!=0)
        {
                did=div;
                div=rem;

        }

        return div;


}

long long getlonglong ()
{
        long long  n=0;
        char ch=getchar();

        while(ch<'0' || ch>'9')
            ch=getchar();

        while(ch>='0' && ch<='9')
        {
                n=n*10+ch-'0';
                ch=getchar();
        }

        return n;

}


void sort(int a[] ,int start1 ,int end1 ,int start2 ,int end2)
{

        int temp[end1-start1 +1 + end2-start2+1 ];
        int i=start1,j=start2,count=0;

        while(i<=end1 && j<=end2)
        {
                if(a[i]<=a[j])
                    temp[count++]=a[i++];
                else
                    temp[count++]=a[j++];


        }

        for(;i<=end1;++i)
            temp[count++]=a[i];

        for(;j<=end2;++j)
            temp[count++]=a[j];

        for(i=0;i<count;++i)
            a[i+start1]=temp[i];


}

void mergesort(int a[] ,int start,int end)
{
        if(start==end)
            return;

        int middle =(start+end)/2;

        mergesort(a,start,middle);
        mergesort(a,middle+1,end);
        sort(a,start,middle,middle+1,end);

}


long long Ceil(long long a , long long n)
{
        if(a<0)
            return 0;

        if(a%n==0)
            return a/n;
        else
            return a/n +1 ;


}

long long Max(long long a ,long long b)
{

        if(a>b)
            return a;
        else
            return b;

}

long long Abs(long long a)
{

        if(a<0)
            return -a;
        else
            return a;

}


void sorttt(int n, int a[n][2])
{
        int i,j,smallest,temp1,temp2;

        for(i=0;i<n;++i)
        {
                smallest =i;

                for(j=i+1;j<n;++j)
                {
                        if(a[smallest][0] > a[j][0])
                            smallest=j;
                        if(a[smallest][0]==a[j][0] && a[smallest][1]<a[j][1])
                            smallest=j;
                }

                temp1=a[i][0];
                temp2=a[i][1];

                a[i][0]= a[smallest][0];
                a[i][1] = a[smallest][1];

                a[smallest][0] =temp1;
                a[smallest][1]=temp2;


        }


}


int main(int argc, char *argv[])
{
        int a[3][3],ans[3][3],i,j,t;

        for(i=0;i<3;++i)
            for(j=0;j<3;++j)
                a[i][j]=getint();

        for(i=0;i<3;++i)
        {

            for(j=0;j<3;++j)
            {
                    t=a[i][j];
                    if(i-1>=0)
                        t=t+a[i-1][j];
                    if(j-1>=0)
                        t=t+a[i][j-1];
                    if(j+1<=2)
                        t=t+a[i][j+1];
                    if(i+1<=2)
                        t=t+a[i+1][j];

                    ans[i][j] = 1 - t%2 ;
            }


        }

        for(i=0;i<3;++i)
        {
                for(j=0;j<3;++j)
                    printf("%d ",ans[i][j]);
                printf("\n");
        }

        return 0;

}
