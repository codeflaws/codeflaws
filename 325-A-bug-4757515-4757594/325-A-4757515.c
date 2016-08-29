#include<stdio.h>


int area_total(int [][4],int);

int main(int argc, char *argv[])
{
 int n,a[5][4],i,j;
 scanf("%d",&n);
 
 for(i=0;i<n;i++)
  {
   for(j=0;j<4;j++)
    scanf("%d",&a[i][j]);
  }
  
 if(area_total(a,n) == 0)
   {printf("YES");
    return 0;
   }
 
 printf("NO");
 return 0;
}

int area_total(int a[5][4],int n)
{
 int i,min_x1,min_y1,max_x2,max_y2,area,sqarea;
 area = 0;
 
 for(i=0;i<n;i++)
  {
   area += (a[i][2]-a[i][0])*(a[i][3]-a[i][1]);
  }
 
 min_x1 = a[0][0];
 min_y1 = a[0][1];
 max_x2 = a[0][2];
 max_y2 = a[0][3];
 
 for(i=1;i<n;i++)
  {
   if(a[i][0]<min_x1)
     min_x1 = a[i][0];
     
   if(a[i][1]<min_y1)
     min_y1 = a[i][1];
     
   if(a[i][2]>max_x2)
     max_x2 = a[i][2];
     
   if(a[i][3]>max_y2)
     max_y2 = a[i][3];
  }
 
 sqarea = (max_x2 - min_x1)*(max_y2 - min_y1);
 
 if(area == sqarea)
   return 0;
   
 return -1;
 
}
