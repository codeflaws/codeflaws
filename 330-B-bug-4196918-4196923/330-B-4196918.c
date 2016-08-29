#include <stdio.h>

int main(int argc, char *argv[]){
       int ar[2000]={0},i,j,k,a,b,n,m;
       
       scanf("%d %d",&n,&m);
       
       for(i=0;i<m;i++){
              scanf("%d %d",&a,&b);
              ar[a]=1;
              ar[b]=1;         
       }
       
       i=1;
       while(ar[i]!=0)
       i++;
       
       k=i;
       j=1;
       printf("%d\n",n);
       for(i=1;i<=n;i++)
       {
                      if(i!=k)
                      printf("%d %d\n",i,k);  
                        
       }
//       getch();
return 0;       
}
