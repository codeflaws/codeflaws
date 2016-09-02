#include <stdio.h>

int main(int argc, char *argv[])
{
    long int n ;
    int e[4];
    e[0] = 1;
    e[1]= 2;
    int i;
    e[2] = 3;
    e[3] = 4;
    scanf("%ld",&n);
     int a[5],b[5],c[5],d[5];
    for(i =0 ; i < 4;i ++){
        scanf("%d",&a[i]);
    }
    for(i =0 ; i < 4;i ++){
        scanf("%d",&b[i]);
    }
    for(i =0 ; i < 4;i ++){
        scanf("%d",&c[i]);
    }
    for(i =0 ; i < 4;i ++){
        scanf("%d",&d[i]);
    }
    if((a[0] +  a[2] ) == n ){
        printf("%d %d %d",e[0],a[0],a[2]);
    }else 
    if((a[1] +  a[3] ) == n ){
        printf("%d %d %d",e[0],a[1],a[3]);
    } else
        if((b[0] +  b[2] ) == n ){
        printf("%d %d %d",e[1],b[0],b[2]);
    }
    else
    if((b[1] +  b[3] ) == n ){
        printf("%d %d %d",e[1],b[1],b[3]);
    }
    else
    if((c[0] +  c[2] ) == n){
        printf("%d %d %d",e[2],c[0],c[2]);
    } else
    if((c[1] +  c[3] ) == n ){
        printf("%d %d %d",e[2],c[1],c[3]);
    }else 
    if((d[0] +  d[2] ) == n ){
        printf("%d %d %d",e[3],d[0],d[2]);
    }else 
    if((d[1] +  d[3] ) == n ){
        printf("%d %d %d",e[3],d[1],d[3]);
    }
    
    else 
    if((a[0] +  a[2] ) < n ) {
        printf("%d %d %d",e[0],a[0],(n - a[0]) );
    }
    else 
    if((a[1] +  a[3] ) < n ) {
        printf("%d %d %d",e[0],a[1],(n - a[1]) );
    }
    else 
    if((b[0] +  b[2] ) < n ) {
        printf("%d %d %d",e[1],b[0],(n - b[0]) );
    }else 
    if((b[1] +  b[3] ) < n ) {
        printf("%d %d %d",e[1],b[1],(n - b[1]) );
    }else 
    if((c[0] +  c[2] ) < n ) {
        printf("%d %d %d",e[2],c[0],(n - c[0]) );
    }else 
    if((c[1] +  c[3] ) < n ) {
        printf("%d %d %d",e[2],c[1],(n - c[1]));
    }else 
    if((d[0] +  d[2] ) < n ) {
        printf("%d %d %d",e[3],d[0],(n - d[0]) );
    }else 
    if((d[1] +  d[3] ) < n ) {
        printf("%d %d %d",e[3],d[1],(n - d[1]) );
    }
    if((a[0] +  a[3] ) == n ){
        printf("%d %d %d",e[0],a[0],a[3]);
    }else 
    if((a[1] +  a[2] ) == n ){
        printf("%d %d %d",e[0],a[1],a[2]);
    } else
        if((b[0] +  b[3] ) == n ){
        printf("%d %d %d",e[1],b[0],b[3]);
    }
    else
    if((b[1] +  b[2] ) == n ){
        printf("%d %d %d",e[1],b[1],b[2]);
    }
    else
    if((c[0] +  c[3] ) == n){
        printf("%d %d %d",e[2],c[0],c[3]);
    } else
    if((c[1] +  c[2] ) == n ){
        printf("%d %d %d",e[2],c[1],c[2]);
    }else 
    if((d[0] +  d[3] ) == n ){
        printf("%d %d %d",e[3],d[0],d[3]);
    }else 
    if((d[1] +  d[2] ) == n ){
        printf("%d %d %d",e[3],d[1],d[2]);
    }
    
    else 
    if((a[0] +  a[3] ) < n ) {
        printf("%d %d %d",e[0],a[0],(n - a[0]) );
    }
    else 
    if((a[1] +  a[2] ) < n ) {
        printf("%d %d %d",e[0],a[1],(n - a[1]) );
    }
    else 
    if((b[0] +  b[3] ) < n ) {
        printf("%d %d %d",e[1],b[0],(n - b[0]) );
    }else 
    if((b[1] +  b[2] ) < n ) {
        printf("%d %d %d",e[1],b[1],(n - b[1]) );
    }else 
    if((c[0] +  c[3] ) < n ) {
        printf("%d %d %d",e[2],c[0],(n - c[0]) );
    }else 
    if((c[1] +  c[2] ) < n ) {
        printf("%d %d %d",e[2],c[1],(n - c[1]));
    }else 
    if((d[0] +  d[3] ) < n ) {
        printf("%d %d %d",e[3],d[0],(n - d[0]) );
    }else 
    if((d[1] +  d[2] ) < n ) {
        printf("%d %d %d",e[3],d[1],(n - d[1]) );
    }
    else {
        printf("-1");
    }
    

    return 0;
}
