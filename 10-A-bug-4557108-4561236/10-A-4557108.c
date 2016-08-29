#include <stdio.h>

int i,n,m,p1,p2,p3,t1,t2,l,r,p,s,t,ar[2][101];

int main(int argc, char *argv[]){
    scanf("%d%d%d%d%d%d",&n,&p1,&p2,&p3,&t1,&t2);

    for (i=0; i<n; i++){
        scanf("%d%d",&l,&r);
        ar[0][i]=l;
        ar[1][i]=r;
    }

    i=0;
    while (i<=n){
        s=ar[1][i]-ar[0][i];
        p+=s*p1;
        if (n>=i+1 && ar[0][i+1]-ar[1][i]>0){
            m=ar[0][i+1]-ar[1][i];
            if (m>=t1){p+=p1*t1;} else {p+=p1*m;}
            if (m-t1>=t2){p+=p2*t2;} else if (m>t1 && m<t2) {p+=p2*(m-t1);}
            if (m-t1>t2){p+=p3*(m-(t2+t1));}
        }
        t=ar[1][i];
        i++;
    }

    printf("%d",p);
    return(0);
}
