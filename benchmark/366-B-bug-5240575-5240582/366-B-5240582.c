#include<stdio.h>
int main(int argc, char *argv[]){
long n,k,a[100000],i,j,index,sum=0,z,min=999999999;
scanf("%ld %ld",&n,&k);
for(i=0;i<n;i++)
scanf("%ld",&a[i]);

if(k==1)
    printf("1\n");
else{
        if(k==n){
            for(i=0;i<n;i++){
              if(min>a[i]){
                min=a[i];
                index=i;
              }
         }
        }
        else {
    for(i=0;i<k;i++){
            z=i;
            sum=0;
        for(j=0;j<(n/k);j++){
            sum+=a[z];
            z+=k;
        }
        if(sum<min){
            min=sum;
            index=i;
        }
    }

        }




printf("%d\n",index+1);
}
return 0;
}
