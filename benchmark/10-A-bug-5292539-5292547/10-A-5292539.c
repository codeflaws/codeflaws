#include <stdio.h>
long int interval(long int t);
long int n,p1,p2,p3,t1,t2;
int main(int argc, char *argv[])
{
    long int x,i,power=0;
    scanf("%ld %ld %ld %ld %ld %ld ", &n,&p1,&p2,&p3,&t1,&t2);
    long int l[n],r[n];

    for (i=0; i<n; i++){
        scanf("%ld %ld", &l[i],&r[i]);
    }

    for (i=0; i<n; i++){
        power+= (r[i]-l[i])*p1;
    }
    printf("%ld\n", power);

    for (i=0; i<n-1; i++){
        x= interval(l[i+1]-r[i]);
        power+=x;
    }
    printf("%ld", power);
    return 0;
}

long int interval(long int t)
{
    long int p=0;
    if (t<=t1) return t*p1;
    else {
        p+=t1*p1;
        t=t-t1;
        if (t<=t2) {p+=t*p2; return p;}
        else {
            p+=t2*p2+(t-t2)*p3;
            return p;
        }
    }
}
