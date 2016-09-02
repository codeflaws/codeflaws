#include <stdio.h>
int main(int argc, char *argv[]){

int m,n,k;
int i , j;
scanf("%d %d &d",&n,&m,&k);
printf("%d\n",m*(m-1)/2);

for(i=1;i<m;i++){
    for(j=i+1;j<=m;j++){
       if(k==0) printf("%d %d\n",i,j);
       else printf("%d %d\n",j,i);
    }    
}
return 0;
}
