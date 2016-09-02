#include<stdio.h>
#include<math.h>
#include<string.h>
int main(int argc, char *argv[])
{
    int n,i,a,b=0,c=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&a);
        if(a==100)b++;
        else c++;
    }
    if(b%2==1)printf("NO");
    else if(b%2==0 && c%2==0)printf("YES");
    else if(b>=(c*2) && b%2==0)printf("YES");
    else if(c%2==1 && (b-200)%2==0)printf("YES");
    else printf("NO");

    return 0;
}
