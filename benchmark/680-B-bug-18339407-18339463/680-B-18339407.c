#include <stdio.h>
int t[100];
int main(int argc, char *argv[]) {
    int n ,a;
    scanf("%d %d", &n, &a);
    int i; //loop
    for(i=0; i<n; i++) scanf("%d", &t[i]);
    a--;
    int c = 0, l=a, r=a;
    while(1)
    {
        if(l<0 && r>=n) break;
        if(l>=0 && r<n)
        {
        	if(t[l] && t[r]) c += l==r?1:2;
        }
        else if(l>0) c += t[l];
        else c += t[r];
        l--; r++;
    }
    printf("%d\n", c);
	return 0;
}
