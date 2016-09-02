#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(int argc, char *argv[])
{
int h, r, ans, m;
scanf("%d",&r);
scanf("%d",&h);
m = h%r;
ans = 2*h/r;
ans += ((2*m>=r)?2:1);
ans += ((2.0*m>=(sqrt(3.0)*r))?1:0);
printf("%d",ans);
return 0;
}
