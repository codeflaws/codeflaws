#include<stdio.h>

int main(int argc, char *argv[])
{
    int n, i,j,k,l;
    scanf("%d",&n);
    int a[5005],b[5005],c[5005],d[5005];
    int w=0,x=0,y=0;
    for(i=1,j=1,k=1,l=1;i<=n;i++){
        scanf("%d",&a[i]);
        if(a[i]==1){
            b[j]=i;
            w++;
            j++;
        }
       else if(a[i]==2){
            c[k]=i;
            x++;
            k++;
        }
       else if(a[i]==3){
            d[l]=i;
            y++;
            l++;
        }
    }
    int min=w;
    if(x<min){
        min=x;
    }
    else if(y<min){
        min=y;
    }
    printf("%d\n",min);
   for(i=1;i<=min;i++){
          printf("%d %d %d\n",b[i],c[i],d[i]);
   }
   return 0;
}
