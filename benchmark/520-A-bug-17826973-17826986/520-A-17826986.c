#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
    char str1[100],str2[30]="abcdefghijklmnopqrstuvwxyz",str3[34]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int n,m,l,i,j,k=0;
    while(scanf("%d",&n)!=EOF){
    scanf("%s",str1);
    k=0;
    for(i=0;i<26;i++){
        for(j=0;j<n;j++){
            if((str1[j]==str2[i])||(str1[j]==str3[i])){
            k++;
            break;
            }

        }

    }
//printf("%d\n",k);
    if(k==26)
        printf("YES\n");
    else
        printf("NO\n");
    }
return 0;
}
