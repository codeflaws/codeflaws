#include <stdio.h>

int main(int argc, char *argv[])
{
    int n,s,i;
    scanf("%d %d",&n,&s);

    int f[n],t[n];
    for(i=0;i<n;i++) {
        scanf("%d %d",&f[i],&t[i]);
    }


    //f_t = s-f[n-1];7>>5 \\ 2
    int t_t=0,r,f_t;

    for(i=(n-1);i>=0;i--) {
        if(i==(n-1))
            f_t = s-f[i];  //2
        else
            f_t = f[i+1]-f[i]; //printf("i=%d\tF_t=%d\t",i,f_t);  //   /  5-3=2 /1
        r = t[i]-f_t-t_t; //0  /  8-2-2=4   /1-1-8=0
        if(r<0)
            r = 0;  //printf("r=%d\t",r);
        t_t = t_t+f_t+r;// 0+2+0==2  / 2+2+4=8 /8+1+0=9
        //printf("t_t=%d\n",t_t);

    }
    int ans = t_t+f[0];


    printf("ans = %d",ans);







return 0;
}
