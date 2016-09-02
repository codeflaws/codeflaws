#include <stdio.h>
#include <stdlib.h>

unsigned long long int pgcd(unsigned long long int x,unsigned long long int y)
    {
        if ((x==1) || (y==1)) return 1;
        if (x==y) return x;
        if (x<y) return pgcd(x,y%x);
        return pgcd(x%y,y);
    }

int main(int argc, char *argv[])
    {
        unsigned long long int t,w,b,ww,bb,m,a,r,p,q,d,s;
        scanf("%llu%llu%llu",&t,&w,&b);
        if (w<b) m = w;
        else m = b;
        d = pgcd(w,b);
        ww = w / d;
        bb = b / d;
        if (t<ww)
            {
                a = 0;
                r = t;
            }
        else
            {
                s = ww;
                if ((t/s)<bb)
                    {
                        a = 0;
                        r = t;
                    }
                else
                    {
                        s = ww * bb;
                        if ((t/s)<d)
                            {
                                a = 0;
                                r = t;
                            }
                        else
                            {
                                s = ww * bb * d;
                                a = t / s;
                                r = t % s;
                            }
                    }
            }
        if (m<=r) p = ((a + 1) * m) - 1;
        else p = (a * m) + r;
        q = t;

        d = pgcd(p,q);
        p = p / d;
        q = q / d;
        printf("%llu/%llu",p,q);
	return 0;
    }
