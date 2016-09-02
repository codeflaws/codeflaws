#include<stdio.h>
long long int arr[250000];
int compare(long long int *a,long long int *b){
    return *a-*b;
}
int main(int argc, char *argv[]){
int a,b,c,d,e;
scanf("%d%d",&a,&b);
int i;
for(i=0;i<a*2;i++){
        scanf("%lld",arr+i);
}
qsort(arr,a*2,sizeof(long long int),compare);
if((arr[a]*a+(arr[a]/2.0*a)) <= b && arr[0]>=arr[a]/2.0)
printf("%lf", arr[a]*a + arr[0]/2.0*a);
else if(((arr[0]*a) + ((2*arr[0])*a))<=b && arr[a]>=2*arr[0])
printf("%lld",((arr[0]*a) + ((2*arr[0])*a)));
else printf("%lf",(double)b);
}
