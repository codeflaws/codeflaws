#include<stdio.h>
//#include<conio.h>
#include<math.h>
#include<string.h>
#include<strings.h>
int main(int argc, char *argv[]){
  int n ,i,j, min =0 , first_1 = -1, last_1 = -1 , flag = 0;
  scanf("%d",&n);
  int a[n];
  for(i = 0;i<n;i++){
    scanf("%d",&a[i]);
    if(a[i] == 1){
        if(first_1 == -1) first_1 = i;
        if(first_1 != -1) last_1 = i;
    }
  }
  if(first_1 == -1){
    printf("0\n");
    return 0;
  }
  if(last_1 == -1) {
    printf("1\n");
    return 0;
  }
  min += 2;
  for(i = first_1+1 ; i<last_1 ; i++){
    if(a[i] == 1)  min++;
    else {
        if(a[i-1] == 1 && a[i+1] == 1) min++;
    }
  }
  printf("%d\n",min);

 return 0;
}
