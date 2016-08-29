# include <stdio.h>


int main(int argc, char *argv[])
{

    int n;
    scanf("%d",&n);

    int a[n];
    int i,j,t=1;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

   long int score1=0,score2=0;
    i=0;j=n-1;
    while(i<=j)
    {
        if(t%2==0)
        {
           if(a[i]>a[j])
           {
               score1+=a[i];
               i++;
           }
           else
           {
               score1+=a[j];
               j--;
           }
        }
        else
        {
            if(a[i]>a[j])
           {
               score2+=a[i];
               i++;
           }
           else
           {
               score2+=a[j];
               j--;
           }
        }
        t++;
    }

    printf("%ld %ld",score1,score2);
    return 0;

}
