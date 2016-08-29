#include<stdio.h>
int main(int argc, char *argv[]){
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
long int n,m,i,j;
char v[200];
scanf("%ld%ld",&n,&m);

j=n+m;
if(m>n || m==n){
v[0]='G';
m--;}
else{
    v[0]='B';
    n--;
}

for(i=1;i<j;i++){
    if(((v[i-1]!='B') && (n!=0)) || ( m==0 )){
        v[i]='B';
        n--;
    }
    else if(((v[i-1]!='G') && (m!=0)) || ((n==0)) ){
        v[i]='G';
        m--;
    }
}
for(i=0;i<j;i++){
printf("%c",v[i]);
}

return 0;
}
