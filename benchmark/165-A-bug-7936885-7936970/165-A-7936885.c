#include<stdio.h>
struct point{
  int x,y;
};
struct point points[200];
int main(int argc, char *argv[]){
  int i,n,j,c=0;
  scanf("%d",&n);
  for (i=0;i<n;i++){
    scanf("%d %d",&(points[i].x),&(points[i].y));
  }
  for (i=0;i<n;i++){
    int a[4]={0,0,0,0};
    for (j=0;j<n;j++){
      if ((points[i].x>points[j].x) && (points[i].y==points[j].y)) a[0]=1;
      if ((points[i].x<points[j].x) && (points[i].y==points[j].y)) a[1]=1;
      if ((points[i].x==points[j].x) && (points[i].y<points[j].y)) a[2]=1;
      if ((points[i].x==points[j].x) && (points[i].y>points[j].y)) a[3]=1;
      if (a[0]==1 && a[1]==1 && a[2]==1 && a[3]==1) c++;
    }
  }
printf("%d", c);
return 0;
}