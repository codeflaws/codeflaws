#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[]){
    char str[1001];
    int i,j,k,flag=0,n,p,a;
    scanf("%s",str);
    scanf("%d",&k);
    n=strlen(str);
    if(n%k==0){
        p=n/k;
        for(i=0;i<k;i++){
            for(j=i*p,a=0;j<i*p+p/2;j++,a++){
                if(str[j]!=str[i*p+p-1-a]){
                    flag=1;
                    break;
                }
            }
            if(flag==1) break;
        }
    }
    if(flag==0) printf("YES");
    else printf("NO");
return 0;
}
