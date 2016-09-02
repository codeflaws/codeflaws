#include<stdio.h>
#include<math.h>
int main(int argc, char *argv[])
{
    int n,x1,y1,x2,y2;
    scanf("%d%d%d%d%d",&n,&x1,&y1,&x2,&y2);
    if((y1==0 && y2==0) || (y1==n && y2==n) )
        printf("%d",abs(x2-x1));
    else if((x1==0 && x2==0) || (x1==n && x2==n))
        printf("%d",abs(y2-y1));
    else if((x1==0 && y1!=0 && x2==n && y2!=0)||(x2==0 && y2!=0 && x1==n && y1!=0))
    {
        if((y1+y2)<(n-y1+n-y2))
            printf("%d",y1+y2+n);
        else printf("%d",n-y1+n-y2+n);
    }
    else if((x1!=0 && y1==n && x2!=0 && y2==0)||(x2!=0 && y2==n && x1!=0 && y1==0))
    {
        if((x1+x2)<(n-x1+n-x2))
            printf("%d",x1+x2+n);
        else printf("%d",n-x1+n-x2+n);
    }
    else if((x1==0 && y1!=0 && x2!=0 && y2==0))
        printf("%d",y1+x2);
    else if((x1!=0 && y1==0 && x2==0&& y2!=0))
        printf("%d",y2+x1);
    else if((x1==0 && y1!=0 && x2!=0 && y2!=0))
        printf("%d",n-y1+x2);
    else if((x2==0 && y2!=0 && x1!=0 && y1!=0))
        printf("%d",n-y2+x1);
    else if((x1!=0 && y1!=0 && x2==n && y2!=0))
        printf("%d",n-x1+n-y2);
    else if((x2!=0 && y2!=0 && x1==n && y1!=0))
        printf("%d",n-x2+n-y1);
    else if((x1==n && y1!=0 && x2!=0 && y2==0))
        printf("%d",n-x2+y1);
    else if((x2==n && y2!=0 && x1!=0 && y1==0))
        printf("%d",n-x1+y2);
    else if((x1==0&&y1==0&&x2==n&&y2==n)||(x2==0&&y2==0&&x1==n&&y1==n))
        printf("%d",2*n);
    else if((x1==0 && y1==n && x2==n && y2==0)||(x2==0 && y2==n && x1==n && y1==0))
        printf("%d",2*n);
    else if((x1==x2)&&(x2==y1)&&(y1==y2))
    printf("0");
    return(0);

}
