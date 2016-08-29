#include<stdio.h>
#include<limits.h>
int storage[25][22];
struct solve{
    int status;
    int value;
}arr[250000];
int main(int argc, char *argv[]){
int a,b,c,d,e,f,g;
int first=0;
scanf("%d%d%d",&a,&b,&c);
int i;int added=0;
for(i=0;i<a;i++){
scanf("%d",&arr[i+1].value);
}
for(i=0;i<c;i++){
int x,y;
scanf("%d%d",&x,&y);
if(x==2){
if(arr[y].status==1){
        printf("YES\n");
}
else{ printf("NO\n");
        }
}
if(x==1 && added!=b){
arr[y].status=1;
storage[first][0]=arr[y].value;
storage[first++][1]=y;
added++;
}
else if(x==1 && added==b){
int min=INT_MAX; int pos=0;
for(f=0;f<b;f++){
if(storage[f][0]<min){
    min=storage[f][0];
    pos=f;
}
}
if(arr[y].value>storage[pos][0]){
arr[storage[pos][1]].status=0;
storage[pos][0]=arr[y].value;
storage[pos][1]=y;
arr[y].status=1;
break;
}
}
}
return 0;
}
