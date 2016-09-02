#include<stdio.h>
#include<string.h>
#include<limits.h>

#define N (int)(1e6)

char sequence[N+1];
int stack[N],top,minLeft[N],left,right,maxLength,maxCount,size,i;

int main(int argc, char *argv[]) {
    while(gets(sequence)) {
        size=strlen(sequence);
        for(i=0; i<size; ++i) {
            minLeft[i]=INT_MAX;
        }
        top=0;
        for(i=0; i<size; ++i) {
            if(sequence[i]=='(') {
                stack[top++]=i;
            } else {
                if(top!=0) {
                    left=stack[top-1];
                    right=i;
                    top--;
                    if(left>0&&minLeft[left-1]<minLeft[right]) {
                        minLeft[right]=minLeft[left-1];
                    }
                }
            }
        }
        maxLength=0;
        maxCount=1;
        for(i=0; i<size; ++i) {
            if(minLeft[i]!=INT_MAX) {
                left=minLeft[i];
                right=i;
                if(right-left+1>maxLength) {
                    maxLength=right-left+1;
                    maxCount=1;
                } else if(right-left+1==maxLength) {
                    maxCount++;
                }
            }
        }
        printf("%d %d\n",maxLength,maxCount);
    }
    return 0;
}
