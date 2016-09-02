//两个对角线是一种字母，对角线之外是另外一种字母！
//不能有其他字母出现！
/*interface*/
/*interface implementation*/
/*client*/
#include<stdio.h>
#define N 300+1
int main(int argc, char *argv[]) {
    int n;
    scanf("%d",&n);
    char paper[N][N];
    int i;
    for(i=0; i<n; i++) {
        scanf("%s",paper[i]);
    }
    char diagonal_element=paper[0][0];
    int j;
    int is_X=1;
    for(i=0; i<n && is_X; i++) {
        //i=j
        if(paper[i][i]!=diagonal_element) {
            is_X=0;
        }
    }
    //printf("is_X=%d at left top diagonal\n",is_X);
    //(0,n-1),(1,n-2),(2,n-3)
    for(i=0; i<n && is_X; i++) {
        //j=n-1-i
        if(paper[i][n-1-i]!=diagonal_element) {
            is_X=0;
        }
    }
    //printf("is_X=%d at right top diagonal\n",is_X);
    if(paper[0][1]!=paper[1][0]) {
        is_X=0;
    } else {
        char non_diagonal_element=paper[1][0];
	if(non_diagonal_element==diagonal_element) is_X=0;
        for(i=0; i<n && is_X; i++) {
            for(j=0; j<n && is_X; j++) {
                if(i!=j && j!=n-1-i) {
                    if(paper[i][j]!= non_diagonal_element) {
                        is_X=0;
                    }
                }
            }
        }
    }
    //printf("is_X=%d at non diagonal\n",is_X);
    if(is_X)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
