#include<stdio.h>
int main(int argc, char *argv[])
{
    int a[3],b[3],n,self,sum=0,i,j,total=0,elf;

    for(i=0;i<3;i++){
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    for(i=0;i<3;i++){
        scanf("%d",&b[i]);
        total=total+b[i];
    }
    scanf("%d",&n);

    if(!(sum%5)) self=sum/5;
    else self=(sum/5)+1;

     if(!(total%10)) elf=total/10;
    else elf=(total/10)+1;
     printf("%d %d %d\n",self,elf,total);
        if(self+elf<=n) printf("YES");
    else printf("NO");


return 0;
}
