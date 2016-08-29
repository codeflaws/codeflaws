#include<stdio.h>
int n,w[200001][2],sum=0,Hi,We,a,maxs1=0,max1=0,max2=0;
int suma(int j){
     int f;
     if(a==0){
     for(f=0;f<n;f++){
                      if(f!=j) sum+=w[f][0];
     }
     f=sum;
     return f;
     }
     else {
          sum+=w[j-1][0];
          sum-=w[j][0];
          f=sum;
          return f; 
     }
}
int maxo(int j){
     //if(a==0){
     if(j==maxs1) return max2;
     else return max1;
     //}
     //else if(j!=) 
}
int main(int argc, char *argv[]) {
    scanf("%d",&n);
    for(a=0;a<n;a++){
                     scanf("%d %d",&w[a][0],&w[a][1]);
                     if(w[a][1]>max1){
                             max2=max1;
                             max1=w[a][1];
                             maxs1=a;         
                     }
    }
    //printf("%d %d\n",max1,max2);
    for(a=0;a<n;a++){
        We=suma(a);
        Hi=maxo(a);
        printf("%d ",Hi*We);
    }
    scanf(" ");
    return 0;
}
    
