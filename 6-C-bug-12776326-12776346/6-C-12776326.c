#include<stdio.h>

int main(int argc, char *argv[])
{
int n,i,j;
scanf("%d",&n);

if(n==1)
    printf("1 0\n"); return 0;

int arr[n];

for(i=0;i<n;i++)
scanf("%d",&arr[i]);

int cna=0,cnb=0;
int t1=0,t2=0;

i=0;
j=n-1;

cna++; cnb++;
t1+=arr[0];
t2+=arr[n-1];

//printf("%d %d    %d %d\n\n",t1,t2,i,j);

while((i+1)!=j)
{
    if(t1<t2)
    {
        i++;
        cna++;
        t1+=arr[i];
    }
    else if(t2<t1)
    {
        j--;
        cnb++;
        t2+=arr[j];
    }
    else if(t2==t1 && (i+2)!=j)
    {
        j--;
        cnb++;
        t2+=arr[j];

        i++;
        cna++;
        t1+=arr[i];
    }

    if((i+2)==j && t2==t1)
    {
        cna++;
        t1+=arr[i];
        break;
    }
//printf("%d %d    %d %d\n",t1,t2,i,j);

}

printf("%d %d\n",cna,cnb);


return 0;
}
