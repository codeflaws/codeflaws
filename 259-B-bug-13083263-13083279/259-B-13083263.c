#include <stdio.h>
 
int main(int argc, char *argv[]) {
 
    long int i,j;
    long int a[3][3];
 
 
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    scanf("%d",&a[i][j]);
 
 long int low=1;
 long int high=100000;
 
    while(low<=high){
    i=low+(high-low)/2;
    
    if(a[0][1]+a[0][2]>(((i+a[0][1]+a[0][2])-(a[2][0]+a[2][1]))+((i+a[0][1]+a[0][2])-(a[1][0]+a[1][2]))))
    low=i+1;
  else if(a[0][1]+a[0][2]<(((i+a[0][1]+a[0][2])-(a[2][0]+a[2][1]))+((i+a[0][1]+a[0][2])-(a[1][0]+a[1][2]))))
    high=i-1;
    else
    break;
}
 
    a[0][0]=i-1;
    a[1][1]=((i+a[0][1]+a[0][2])-(a[1][0]+a[1][2]));
    a[2][2]=((i+a[0][1]+a[0][2])-(a[2][0]+a[2][1]));
 
    for(i=0;i<3;i++){
    printf("\n");
    for(j=0;j<3;j++){
    printf("%d ",a[i][j]);}}
    return 0;
}