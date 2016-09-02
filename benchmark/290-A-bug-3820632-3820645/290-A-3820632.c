#include<stdlib.h>
int main(int argc, char *argv[])
{
    char a[40][12]={"qq","ww","ee","rr","tt","yy","uu","ii","oo","pp","aa","ss","dd","ff","gg","hh","jj","kk","ll","zz","xx","cc","vv","bb","nn","mm","qqq","www","eee","rrr","ttt","yyy","uuu","iii","ooo","ppp","aaa","sss","ddd","fff"};
    int n;
    scanf("%d",&n);
    printf("%s",a[n-1]);
    return 0;
}
