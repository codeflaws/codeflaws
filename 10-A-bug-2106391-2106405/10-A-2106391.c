#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
    int n,p1,p2,p3,t1,t2,a,c,b,e,i,d=0;
    long int p=0;
    scanf("%d%d%d%d%d%d",&n,&p1,&p2,&p3,&t1,&t2);
    scanf("%d %d",&a,&b);
    if(n==1) p=(b-a)*p1;
        else {  p=(b-a)*p1;
                for(i=1;i<n;i++);
                scanf("%d %d",&c,&e);
                d=c-b;
                if(d>=t1)   {p+=t1*p1;
                            d-=t1;
                            }
                            else if(d>0) {p+=d*p1;
                                            d=0;
                                        }
                if(d>=t2) {p+=t2*p2;
                            d-=t2;
                            }
                           else if(d>0) {p+=d*p2;
                                        d=0;
                                        }
                if(d>0) p+=d*p3;
                p+=p1*(e-c);
                a=c;
                b=e;
                }
             printf("%ld",p);
    return 0;
}
