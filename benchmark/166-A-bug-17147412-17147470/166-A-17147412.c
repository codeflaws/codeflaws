#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
int n,r,i,ans=0,temp1,temp2,k;
int solved[50];
int penalty[50];


scanf("%d%d",&n,&r);

for(i=0;i<n;i++)
    scanf("%d%d",&solved[i],&penalty[i]);



for(i=0;i<n;i++){
    for(k=0;k<n-1;k++){
        if(penalty[k]>penalty[k+1]){
            temp1=penalty[k];
            penalty[k]=penalty[k+1];
            penalty[k+1]=temp1;

            temp2=solved[k];
            solved[k]=solved[k+1];
            solved[k+1]=temp2;
        }
    }
}



for(i=0;i<n;i++){
    for(k=0;k<n-1;k++){
        if(solved[k]<solved[k+1]){

            temp1=solved[k];
            solved[k]=solved[k+1];
            solved[k+1]=temp1;

            temp2=penalty[k];
            penalty[k]=penalty[k+1];
            penalty[k+1]=temp2;
        }
    }
}



for(i=0;i<n;i++){
    if(solved[i]==solved[r-1])
        ans++;
}




printf("%d",ans);
return 0;
}
