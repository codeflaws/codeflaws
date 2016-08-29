#include <stdio.h>
#include <string.h>

int poww(int m, int n)
{
    int t = 1;
    int i;
    
    if(n == 0) 
        return 1;
    else 
        for(i = 1; i <= n; i++)
            t *= m;
        
    return t;
}

int main(int argc, char *argv[])
{
    char hour[6];
    char minu[6];
    int h, m;
    int hmax, mmax;
    int min, max;
    int left;
    int flag;
    int i, j;
    char c;
    int hflag, mflag;
    
    i = 0;
    while(1) {
        c = getchar();
        if(c != ':') {
            hour[i] = c;
            i++;
        }
        else {
            hour[i] = 0;
            break;
        }
    }

    i = 0;
    while(1) {
        c = getchar();
        if(c != '\n') {
            minu[i] = c;
            i++;
        }
        else {
            minu[i] = 0;
            break;
        }
    }
    
    h = strlen(hour);
    m = strlen(minu);
    
    i = 0;
    while(hour[i] == '0') {
        h--;
        i++;
    }
    hflag = i;
  
    i = 0;
    while(minu[i] == '0') {
        m--;
        i++;
    }
    mflag = i;
    
    if(m == 1 && h == 1)
        if(hour[hflag] >= '0' && hour[hflag] <= '9' || hour[hflag] <= 'N' && hour[hflag] >= 'A') {
            printf("-1\n");
            return 0;
        }   
    if(m == 0 && h == 0) {
        printf("-1\n");
        return 0;
    }  
    
    if(h == 1 && hour[hflag] > 'N' && hour[hflag] <= 'Z') {
        printf("0\n");
        return 0;
    }
    
    if(h > 0) {
        hmax = 2;
        for(i = hflag; i < hflag + h; i++) {
            if(hour[i] <= '9' && hour[i] >= '0')
                hmax = hmax > (hour[i] - '0' + 1) ? hmax : (hour[i] - '0' + 1);
            else 
                hmax = hmax > (hour[i] - 'A' + 11) ? hmax : (hour[i] - 'A' + 11);
        }
    }
    else
        hmax = -1;
        
    if(m > 0) {
        mmax = 2;
        for(i = mflag; i < mflag + m; i++) {
            if(minu[i] <= '9' && minu[i] >= '0')
                mmax = mmax > (minu[i] - '0' + 1) ? mmax : (minu[i] - '0' + 1);
            else
                mmax = mmax > (minu[i] - 'A' + 11) ? mmax : (minu[i] - 'A' + 11);
        }
    }
    else
        mmax = -1;
    
    min = hmax > mmax ? hmax : mmax;
    mmax = mmax == -1 ? mmax : min;
    hmax = hmax == -1 ? hmax : hmax;
    
    if(h == 1)
        hmax = -1;
    else if(hmax != -1) {
        flag = 0;
        while( 1 ) {
            left = 23;
            for(i = hflag + h - 1, j = 0; i >= hflag; i--, j++) {
                if(hour[i] <= '9' && hour[i] >= '0')
                    left -= (hour[i] - '0') * poww(hmax, j); 
                else
                    left -= (hour[i] - 'A' + 10) * poww(hmax, j);
            }
        
            if(left >= 0) {
                flag = 1;
                hmax++;
            }
            else if(flag == 0) {
                printf("0\n");
                return 0;
            }
            else {
                hmax--;
                break;
            }
        }
    }
   
    if(m == 1)
        mmax = -1;
    else if(mmax != -1) {
        flag = 0;
        while( 1 ) {
            left = 59;
            for(i = mflag + m - 1, j = 0; i >= mflag; i--, j++) {
                if(minu[i] <= '9' && minu[i] >= '0')
                    left -= (minu[i] - '0') * poww(mmax, j); 
                else
                    left -= (minu[i] - 'A' + 10) * poww(mmax, j);
            }
        
            if(left >= 0) {
                flag = 1;
                mmax++;
            }
            else if(flag == 0) {
                printf("0\n");
                return 0;
            }
            else {
                mmax--;
                break;
            }
        }
    }
    
    if(hmax != -1 && mmax != -1)
        max = hmax > mmax ? mmax : hmax;
    else
        max = mmax == -1 ? hmax : mmax;
    
    for(i = min; i <= max; i++) {
        if(i == max) 
            printf("%d\n", i);
        else
            printf("%d ", i);
    }
    
    return 0;
}
