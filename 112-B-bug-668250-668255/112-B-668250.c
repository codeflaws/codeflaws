#include<stdio.h>
int main(int argc, char *argv[])
{

    int n,x,y,z;
    scanf("%d%d%d",&n,&x,&y);
    z=n/2;
    if(((x==z)||(x==(z+1)))&&(y==z)||(y==(z+1)))
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }
    return 0;
}
