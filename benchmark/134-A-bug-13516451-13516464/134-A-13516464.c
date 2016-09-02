#include <stdio.h>
int main(int argc, char *argv[])
{
    int i,n,s[200000],x[200000],y=1,sum=0,count=0,j,z;
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        scanf("%d",&s[i]);
        sum+=s[i];
    }
    if(sum%n!=0) {
        printf("0\n");
        return 0;
    }
    sum=sum/n;
    for(i=1;i<=n;i++) {
        if(sum==s[i]) {
            count++;
            x[y]=i;
            y++;
        }
    }
    printf("%d\n",count);
    for(i=1;i<y;i++) {
        printf("%d ",x[i]);
    }
    return 0;
}
