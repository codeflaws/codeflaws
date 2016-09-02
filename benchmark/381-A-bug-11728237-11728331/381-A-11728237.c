#include<stdio.h>
#include<malloc.h>
int sereja =0,dima=0,i=0,j=0;
void recur(int c[],int l,int r)
{
    while(l<=r)
    {
        if(i==j)
        {
            if(c[r]>c[l])
            {
                sereja+=c[r];
                r-=1;
            }
            else
            {
                sereja+=c[l];
                l+=1;
            }
          i++;
        }
        else
        {
            if(c[r]>c[l])
            {
                dima+=c[r];
                r-=1;
            }
            else
            {
                dima+=c[l];
                l+=1;
            }
            j++;
        }
        return recur(c,l,r);
    }

}

int main(int argc, char *argv[])
{
    int n,c[1000],i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&c[i]);
    }
    recur(c,0,n-1);
    printf("%d\n",sereja);
    printf("%d\n",dima);
}
