#include <stdio.h>

int main(int argc, char *argv[]) {
    // your code goes here
    int i,a[3],b[3];
    for(i=0;i<3;i++){
        scanf("%d%d",&a[i],&b[i]);
    }
    if(a[1]+a[2]<=a[0] && b[1]<=b[0] && b[2]<=b[0]) printf("YES");
    else if(a[1]+a[2]<=b[0] && b[1]<=a[0] && b[2]<=a[0]) printf("YES");
    else if(b[1]+b[2]<=a[0] && a[1]<=b[0] && a[2]<=b[0]) printf("YES");
    else if(b[1]+b[2]<=b[0] && a[1]<=a[0] && a[2]<=a[0]) printf("YES");
    else if(a[1]+b[2]<=a[0] && a[2]<=b[0] && b[1]<=b[0]) printf("YES");
    else if(b[1]+a[2]<=a[0] && b[2]<=b[0] && a[1]<=b[0]) printf("YES");
    else if(a[1]+b[2]<=b[0] && a[2]<=a[0] && b[1]<=a[0]) printf("YES");
    else if(b[1]+a[2]<=b[0] && b[2]<=b[0] && a[1]<=b[0]) printf("YES");
    else printf("NO");
    return 0;
}
