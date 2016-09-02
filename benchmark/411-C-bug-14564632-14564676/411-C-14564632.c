#include<stdio.h>
int main(int argc, char *argv[]){
   int a[4][2],i,j,team1=0,team2=0;
   for(i=0;i<4;i++){
    scanf("%d %d",&a[i][0],&a[i][1]);
   }

   if(a[0][0]>a[3][1]&&a[1][1]>a[2][0]&&a[0][0]>a[2][1]&&a[1][1]>a[3][0]){
      printf("Team 1");
      return 0;
   }
   if(a[1][0]>a[3][1]&&a[0][1]>a[2][0]&&a[1][0]>a[2][1]&&a[0][1]>a[3][0]){
     printf("Team 1");
      return 0;
   }
   if(((a[2][0]>a[1][1]&&a[3][1]>a[0][0]) || (a[2][0]>a[0][1]&&a[3][1]>a[1][0])) && ((a[3][0]>a[1][1]&&a[2][1]>a[0][0]) || (a[3][0]>a[0][1]&&a[2][1]>a[1][0])) ){
      printf("Team 2");
      return 0;
   }

   printf("Draw\n");
 return 0;
}
