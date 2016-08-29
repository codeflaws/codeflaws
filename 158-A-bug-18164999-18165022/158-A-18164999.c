#include<stdio.h>
int main(int argc, char *argv[]){
 int num,pos;
 scanf("%d %d",&num,&pos);
 int arr[num];
 int i;
 int cnt=0;
 for(i=1;i<=num;++i)
 {
    scanf("%d",&arr[i]); 
    
 }
 for(i=1;i<=pos;++i)
 {
     if(arr[i]>0)
     cnt++;
 }
 if(cnt!=0)
 for(i=pos+1;i<=num;++i)
 {
     if(arr[pos]==arr[i])
     cnt++;
     else
     break;
 }
 printf("%d",cnt);
return 0;
}