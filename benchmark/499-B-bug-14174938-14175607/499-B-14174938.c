#include<stdio.h>
#include<string.h>
char a[3004][12] ,b[3003][12],str[3004][12],temp[12];
int n,m,i,j,len1,len2;

int main(int argc, char *argv[])
{
    scanf("%d %d",&n,&m);
    for(i=0;i<m;i++){
        scanf("%s %s",a[i],b[i]);
    }
    for(i=0;i<n;i++){
        len1=strlen(a[i]);
        len2=strlen(b[i]);
        if(len1<=len2){
            strcpy(temp,a[i]);
            strcpy(a[i],b[i]);
            strcpy(b[i],temp);
        }
    }
    for(i=0;i<n;i++){
        scanf("%s",str[i]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(strcmp(a[j],str[i])==0){
                strcpy(str[i],b[j]);
            }
        }
    }
    for(i=0;i<n;i++){
        printf("%s ",str[i]);
    }
    return 0;
}
