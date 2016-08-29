#include<stdio.h>;

//2n-1 no. n can change sign to get max sum.
int n;
int main(int argc, char *argv[])
{
    scanf("%d",&n);
    int i,j=0,temp,mp;
    int x[2*n-1];
    for(i=0; i<2*n-1; i++)
    {
        scanf("%d",&x[i]);
    }
    int min=1000;
// sort absolute nos.
    /*for(j=0; j<n; j++)
    {
    */
    for(i=0; i<2*n-1; i++)
    {
        if(x[i]<0)
        {
            j++;
        }
        if(abs(x[i])<=min)
        {
            min=abs(x[i]);
            mp=i;
        }
    }
    /*      max=-1000;
          temp=abs(x[mp]);
          x[mp]=x[j];
          x[j]=temp;
      }*/
      temp=0;
      for(i=0; i<2*n-1; i++)
        {
            temp=temp+abs(x[i]);
        }
    if(n%2!=0){}
    else if(j%2!=0)
    {

        temp=temp-2*abs(x[mp]);
    }
    printf("%d",temp);
    return 0;

}

int abs(int v)
{
    return v * ( (v<0) * (-1) + (v>0));
    // simpler: v * ((v>0) - (v<0))
}
