#include<stdio.h>
int main(int argc, char *argv[]){int n;
scanf("%d",&n);
int a[n],b[n],i,c=0;
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++){
    if(a[i]==c+1){
        b[c]=2001+i;
        c++;
    }
}
for(i=0;i<c;i++)
printf("%d ",b[i]);
if(c==0) printf("%d",c);
return 0;}
