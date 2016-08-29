#include <stdio.h>

int main(int argc, char *argv[])
{
    int hr;
    int mnt;
    int tmp;
    scanf("%d:%d", &hr,&mnt);
    scanf("%d", &tmp);
    mnt = mnt + tmp;
    hr = hr + mnt/60;
    mnt = mnt%60;
    if (hr == 24)
       hr = 0;
    if (hr <10)
       printf("0%d:",hr);
    else
        printf("%d:",hr);
    if (mnt < 10)
       printf("0%d",mnt);
    else
        printf("%d",mnt);
    return 0;
}
