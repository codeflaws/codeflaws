#include<stdio.h>
//#include<conio.h>
#include<math.h>
#include<string.h>
#include<strings.h>
int Max (int,int);
int main(int argc, char *argv[]){
   int n  , i ,j, max =0 , min , curr  ,diff;
   scanf("%d",&n);
   int a[n];
   for(i = 0; i< n ;i++){
    scanf("%d",&a[i]);
   }
   min = a[n-1] - a[0];
   for(i = 1; i< n-1;i++){
        curr = i;
    for( j = 1 ; j < n ; j++){
        if( j == curr ) {
                diff = a[j+1]-a[j-1];
                j+=1;
    }
    else diff = a[j]-a[j-1];
    if(diff > max ) max = diff;
   }
      if(max < min) min = max;
   }
   printf("%d\n",min);
   return 0;
}

int Max (int a,int b){
     return (a>b)?a:b;
}
