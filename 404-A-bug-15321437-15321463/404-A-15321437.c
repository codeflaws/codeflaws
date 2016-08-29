#include<stdio.h>
int main(int argc, char *argv[])
{
	int n,i,j,f=1;
        char a,b,m[1000][1000];
          scanf("%d",&n);
            getchar();
	     for(i=0;i<n;i++) {
                for(j=0;j<n;j++)
                  scanf("%c",&m[i][j]); 
                  getchar();
                 }
            a=m[0][0];
            b=m[0][1];
           for(i=0;i<n;i++) {
               if(m[i][i]!=a||m[i][n-i-1]!=a) {
                  f=0;
                  break;           
               }
                  for(j=0;j<n;j++) {
                    if(i==j||i==(n-j-1))
                      continue;
                    if(m[i][j]!=b) {
                     f=0;
                     break;
                    }
           	  } 
           }       
               if(f)
                  printf("YES");
               else
                  printf("NO");

 return 0;
}
