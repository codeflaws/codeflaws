#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
    {
        int n,i,m,x,y,k;
        int T[100000];
        char s[100001];
        scanf("%d",&n);
        scanf("%s",s);
        x = -1;
        m = 0;
        y = 0;
        k = 0;
        for (i=0;i<n;i++)
            {
                if (x!=s[i]-'0')
                    {
                        if (x!=-1)
                            {
                                if (y<T[m-1]) y = T[m-1];
                                if (1<T[m-1]) k++;
                            }
                        T[m] = 1;
                        x = s[i] - '0';
                        m++;
                    }
                else T[m-1] = T[m-1] + 1;
            }
        if (y<T[m-1]) y = T[m-1];
        if (2<y) m = m + 2;
        else
            {
                if (k>=2) m = m + 2;
                else if (k==1) m++;
            }
        printf("%d",m);
    return 0;
}
