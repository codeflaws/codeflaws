# include<stdio.h>
int main(int argc, char *argv[])
{
    int n,i,x=0,y=0,z=0;
    scanf("%d",&n);
    int a[3*n];
    for(i=0;i<3*n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<3*n;i=i+3)
    {
        x=x+a[i];
    }
    for(i=1;i<3*n;i=i+3)
    {
        y=y+a[i];
    }
    for(i=2;i<3*n;i=i+3)
    {
        z=z+a[i];
    }
    if(x+y+z==0)
       printf("YES\n");
    else
        printf("NO\n");
    return 0;

}
