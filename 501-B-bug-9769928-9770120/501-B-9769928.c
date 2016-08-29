#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    int n,i,j,k;
    char old[1000][20],neww[1000][20];
    scanf("%d",&n);
    for (i=0;i<n;i++)
        scanf("%s%s",old[i],neww[i]);
    
    int change=0;
    int flag;
    for (i=0;i<n;i++){
        flag=i;
        for (j=0;j<i;j++){
            if (strcmp(old[i],neww[j])==0){//if user change name again
                strcpy(neww[j],neww[i]);
                --change;
                for (k=flag;k<n;k++){//fix the array, the changed user's element is removed
                    strcpy(old[k],old[k+1]);
                    strcpy(neww[k],neww[k+1]);
                }
                
                --i;// change because of the fixed array
                --n;
                break;
            }
        }
        ++change;// number of distinct users
    }
    
    /*char ans1[1000][20];
    char ans2[1000][20];*/
    printf("%d\n",change);
    for (i=0;i<change;i++){
    /*  strncpy(ans1[i],old[i],20);
        strncpy(ans2[i],neww[i],20);*/
        printf("%s %s\n",old[i],neww[i]);
    }

    

    return 0;
}