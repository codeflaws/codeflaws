#include<stdio.h>
#include<string.h>

#define SIZE_N 100010
#define MIN(x, y) ((x) < (y) ? (x) : (y))
#define MAX(x, y) ((x) > (y) ? (x) : (y))
#define ABSE(x) ((x) > 0 ? (x) : (-(x)))

char strA[SIZE_N];
char strB[SIZE_N];
int next[SIZE_N];

void getNext(char *str,int len)
{
    int i,j;

    i = 0;
    j = -1;
    next[0] = -1;
    while(i < len) {
        if(j < 0 || str[i] == str[j]) {
            i ++;
            j ++;
            next[i] = j;
        }
        else {
            j = next[j];
        }
    }
}

int getAns()
{
    int i,j,ans;
    int lenA,lenB,len,cl;

    lenA = strlen(strA);
    lenB = strlen(strB);
    len = MAX(lenA, lenB);
    for(i = j = 0;i < len && j < len;i ++,j ++) {
        i %= lenA;
        j %= lenB;
        if(strA[i] != strB[j]) {
            return 0;
        }
    }
    getNext(strA, lenA);
    cl = lenA - next[lenA];
    ans = 0;
    for(i = cl;i <= lenA;i += cl) {
        if(lenA % i == 0 && lenB % i == 0) {
            ans ++;
        }
    }
    return ans;
}

int main(int argc, char *argv[])
{
    int ans;

    while(scanf("%s%s",strA,strB) != EOF) {
        ans = getAns();
        printf("%d\n",ans);
    }
    return 0;
}
