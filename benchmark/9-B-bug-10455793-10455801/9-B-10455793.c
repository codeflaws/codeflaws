#include<stdio.h>
#include<math.h>
int main(int argc, char *argv[])
{
    int n,i,j,m;
    double vb,vs,a[105],xu,yu,s,min=99999999;
    scanf("%d%lf%lf",&n,&vb,&vs);
    for(i=1;i<=n;i++)
        scanf("%lf",&a[i]);
    scanf("%lf%lf",&xu,&yu);
    for(j=2;j<=n;j++)
        {
            s=a[j]/vb+sqrt(yu*yu+(xu-a[j])*(xu-a[j]))/vs;
            if(s<min) {min=s;m=j;}
        }
    printf("%d\n",m);
    return 0;
}
