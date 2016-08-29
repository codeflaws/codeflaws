#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{int x,y,i,j=0,z,f=0,k=1,a[500],r;
scanf("%d%d",&x,&y);
z=y;
if (x>y){
k=1; int l=0;
for (i=0; ;i=i+2){

if (z>0) {z--; j++; ++l;  a[i]=k; a[i+1]=l ;}
else {
f++;
if (f==1) k++;
if (k > x) break ;
a[i]=k; a[i+1]=l;

k++;
j++;
}

}
printf("%d\n",j);
for (r=0;r<i;r=r+2)
printf("%d %d\n",a[r],a[r+1]);
}
else if (x==y){f=0;
int l=0 ; k=1;
for (i=0; ;i=i+2){
if (z>0) {z--; j++; l++; a[i]=k; a[i+1]=l; }
else {
k++;
a[i]=k; a[i+1]=l;



j++;
}
if (k>=x) break ;
}
printf("%d\n",j);

for (r=0;r<i+2;r=r+2)
printf("%d %d\n",a[r],a[r+1]);
}
else {
int l=0 ;
for (i=0; ;i=i+2){
if (z>0) {z--; j++; a[i]=k; a[i+1]=++l ;}
else {
f++;
if (f==1) {k++; }
if (k>x) break ;
a[i]=k; a[i+1]=l;
k++;
j++;
++l;


}}
printf("%d\n",j);
for (r=0;r<i;r=r+2)
printf("%d %d\n",a[r],a[r+1]);



}







    return 0;
}


