#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>

char s1[5], s2[10], s3[10], s4[10];
int aray[1002][2];
int main(int argc, char *argv[])
{
    int n, i, j, k, a, num, right, left;
    scanf("%d %d", &n, &a);
    left=0;right=n+1;
    for(i=0;i<a;i++){
        scanf("%s %s %s %s %d", s1, s2, s3, s4, &num);
        aray[i][0]=num;
        if(s3[0]=='r') {
            aray[i][1]=1;
            if(left<num) left=num;
        }
        else {
            aray[i][1]=2;
            if(right>num) right=num;
        }
    }
    if(right-left==1){
        printf("-1");
        return 0;
    }

    printf("%d ", right-left-1);



    return 0;
}
