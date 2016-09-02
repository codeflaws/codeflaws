#include<stdio.h>
#include<math.h>
int main(int argc, char *argv[])
{
    int n,i,p;
    double x,y,min,s,vb,vs,a[110];
    scanf("%d%lf%lf",&n,&vb,&vs);
    for(i=1;i<=n;i++)scanf("%lf",&a[i]);
    scanf("%lf%lf",&x,&y);
    p=2;
    min=a[2]/vb+sqrt((a[2]-x)*(a[2]-x)+y*y)/vs;
    for(i=3;i<=n;i++){
        s=a[i]/vb+sqrt((a[i]-x)*(a[i]-x)+y*y)/vs;
        if(min-s>0.000000001){
            min=s;
            p=i;
        }
    }
    printf("%d\n",p);
    return 0;
}
