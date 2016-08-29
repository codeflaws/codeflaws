#include <stdio.h>
#include <stdlib.h>

int pgcd(int x,int y)
    {
        if (x==y) return x;
        if (x==0) return y;
        if (y==0) return x;
        if (x<y) return pgcd(x,y%x);
        return pgcd(x%y,y);
    }

int main(int argc, char *argv[])
    {
        int a,i,s,x,y;
        scanf("%d",&a);
        s = 2;
        for (i=2;i<a-1;i++)
            {
                x = 1;
                while (x<=a) x = x * i;
                x = x / i;
                y = a;
                while (y!=0)
                    {
                        s = s + (y/x);
                        y = y % x;
                        x = x / i;
                    }
            }
        y = pgcd(s,a-2);
        printf("%d/%d",s/y,(a-2)/y);
	return 0;
    }
