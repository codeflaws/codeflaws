#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{int year1,year2,a[5],c[11],i,j,k,t,count,rem;
scanf("%d",&year1);
i=year1+1;

while(i<=9000){

    j=i;
    k=0;
    while(j>0){
        rem=j%10;
        j=j/10;
        a[k]=rem;
        k++;
    }
    for(t=0;t<=9;t++){
        c[t]=0;
    }
    for(t=0;t<k;t++){
        c[a[t]]++;
    }
    count=0;
    for(t=0;t<=9;t++){
        if(c[t]!=0){
            count++;
        }
    }
    if(count==4){
        year2=i;
        break;
    }
    i++;
}
printf("%d",year2);

    return 0;
}
