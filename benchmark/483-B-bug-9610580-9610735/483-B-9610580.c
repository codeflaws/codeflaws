#include <stdio.h>
//#include <conio.h>

typedef long long ll;

ll kqua(ll cnt1, ll cnt2, ll x, ll y)
{
    ll L = 1, R = 1e18, mid, count1, count2;
    while (L < R)
    {
        mid = (L + R) / 2;
        count1 = mid - mid / x;
        count2 = mid - mid / y;
        if (count1 >= cnt1 && count2 >= cnt2 && count1 + count2 - mid / (x*y) >= cnt1 + cnt2)
            R = mid;
        else
            L = mid + 1;
    }
    return L;
}

int main(int argc, char *argv[])
{
    ll cnt1, cnt2, x, y;
    scanf("%lld %lld %lld %lld", &cnt1, &cnt2, &x, &y);
    printf("%lld", kqua(cnt1, cnt2, x, y));
  
    return 0;
}
