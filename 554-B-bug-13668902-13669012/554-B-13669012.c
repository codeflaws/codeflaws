#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[])
{
    int n,i,j,c[101],max=0;
    char r[101][101];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s",r[i]);
    }
    /*for(i=0;i<n;i++){
        printf("%s\n",r[i]);
    }*/
    for(i=0;i<n;i++){
        c[i]=1;
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            //printf("r[i] %s r[j] %s\n",r[i],r[j]);
            if(strcmp(r[i],r[j])==0) {
                    //printf("r[i] %s r[j] %s\n",r[i],r[j]);
                    c[i]++;
                    r[j][0]='_';
            }

        }
    }
    for(i=0;i<n;i++){
        if(c[i]>c[max]) max=i;
    }
    printf("%d\n",c[max]);
    return 0;
}
