#include <stdio.h>

int main(int argc, char *argv[]){

     long long int n,i=0,m,ans=0,count=0;
     long long int a[1000100],max[100100],min[100100];
    scanf("%lld",&n);
    m=n;
    while(m--){
        scanf(" %lld",&a[i++]);
    }
    max[0]=a[0];
    min[n-1]=a[n-1];
    min[n]=0x3f3f3f3f;
    for(i=1;i<n;i++){
        if(a[i]>max[i-1])
            max[i]=a[i];
        else
            max[i]=max[i-1];
    }
    for(i = n-2;i>=0;i--){
        if(a[i]<min[i+1])
            min[i]=a[i];
        else
            min[i]=min[i+1];
    }
    for(i = 0;i<n;i++){
        if(max[i]<=min[i+1])
            count++;
    }

    printf("%d\n", count);
//         mm=a[0];
//         mn=a[0];
//
//         /*for(i=0;i<n;i++){
//             ma=a[i+1];
//             mi=a[i+1];*/
//             for(j=i+1;j<n;j++){
//                 if(a[j]<mn)
//                     mn=a[j];
//                 if(a[j]>mm)
//                     mm=a[j];
//                 /*if(a[j]<mi)
//                     mi=a[j];
//                 if(a[j]>ma)
//                     ma=a[j];*/
//                     if(a[j]<mi&&a[j]>ma){
//                         ma=a[i+1];
//             mi=a[i+1];
//                     }
//                        // continue;
//                     else
//                         ans++;
//
//
//
//             }
// /*
//                 max[i]=ma;
//                 min[i]=mi;
//
//         }
//         max[n-1]=mm+1;
//         min[n-1]=mm+1;
//
//         mm=a[0];
//        /* for(i=0;i<n;i++){
//
//                 if(a[i]>mm)
//                     mm=a[i];
//                 //printf("%d %d %d %d %d\n",a[i],mm,min[i],max[i],ans);
//             if(mm<=min[i]){
//             if(mm<=max[i]){
//
//                 mm=a[i+1];
//                 ans++;
//             }
//             }
//
//
//         }*/
//
//     printf("%lld\n",ans);

    return 0;
}
