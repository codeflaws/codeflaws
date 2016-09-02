#include<stdio.h>
//#include<conio.h>
#include<math.h>
#include<string.h>
#include<strings.h>

int main(int argc, char *argv[]){
 int p,q,r,l,i,j,num = 0,min,max,x,y,k = 0,flag=0;
 scanf("%d %d %d %d",&p,&q,&r,&l);
 int a[p][2],b[q][2];
 for(i=0;i<p;i++){
    scanf("%d %d",&a[i][0],&a[i][1]);
 }
for(i=0;i<q;i++){
    scanf("%d %d",&b[i][0],&b[i][1]);
}
for(i=r;i<=l;i++){
    for(j=0;j<q;j++){
        min = b[j][0]+i; max = b[j][1]+i;
        for(k=0;k<p;k++){
            if(a[k][0]>= min && a[k][0]<= max   || a[k][1]>= min && a[k][1]<= max){
                flag = 1;
                num++;
                break;
            }
        }
        if(flag == 1)break;
    }
    flag=0;
}
printf("%d\n",num);
 return 0;
}
