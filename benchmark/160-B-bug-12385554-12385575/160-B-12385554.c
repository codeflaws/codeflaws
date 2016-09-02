#include<stdio.h>

char t[200];

int compare(const void *a, const void *b){
    return strcmp((char*)a, (char*)b);
}

int main(int argc, char *argv[])
{
    int n, i, flag = 0;

    scanf("%d", &n);
    scanf("%s", t);

    qsort(t, n, sizeof(char), compare);
    qsort(&t[n], n, sizeof(char), compare);

    for(i=0; i<n; i++){
        if(t[i] > t[i+n]){
            if(flag != 1 && flag != 0) flag = 3;
            else flag = 1;
        }
        else if(t[i] < t[i+n]){
            if(flag != 2 && flag != 0) flag = 3;
            else flag = 2;
        }
        else flag = 3;
    }

    if(flag == 4) printf("NO\n");
    else printf("YES\n");

    return 0;
}
