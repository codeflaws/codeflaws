#include <stdio.h>

int main(int argc, char *argv[]){
       int n,i,j,k,ar[200],min,count,f,idx,j1;
       char c[200][200],ch;
       
       scanf("%d",&n);
       scanf("%c",&ch);
       
       for(i=0;i<n;i++){
             for(j=0;j<n;j++)
             scanf("%c",&c[i][j]);
             
             scanf("%c",&ch);
             
       }       
       f=0;
       for(i=0;i<n;i++){
       min=99999;
       idx=-1;
             for(j=0;j<n;j++){
                   if(c[i][j]=='.'){
                   
                                ar[i]=j;
                                idx=1;
                                break;
                   }  
                       // printf("%d %d\n",i+1,idx+1);     
             }
             if(idx==-1)
             break;      
             
//             }          
                   
       }
       if(i!=n){
       f=1;
       for(i=0;i<n;i++){
       min=99999;
       idx=-1;
             for(j=0;j<n;j++){
                   if(c[j][i]=='.'){
                               ar[i]=j;
                                idx=1;
                                break;
                   }
                   
             }            
             if(idx==-1){
             f=2;
             break; 
             
             }
       }
       }
       if(f==0)
       for(i=0;i<n;i++){
       printf("%d %d\n",i+1,ar[i]+1);                 
       }
       else if(f==1)
       for(i=0;i<n;i++){
       printf("%d %d\n",ar[i]+1,i+1);                 
       }
       else
       printf("-1\n");
//getch();
return 0;       
}
