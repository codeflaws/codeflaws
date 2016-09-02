#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]){
  int n;
  scanf("%d\n", &n);
  int cards[100];
  char s[310];
  gets(s);
  int i;
  for(i=0; i<n; i++){
    int b;
    int a = s[3 * i + 1] - '1';
    switch(s[3 * i]){
      case 'R': b = 0; break;
      case 'G': b = 1; break;
      case 'B': b = 2; break;
      case 'Y': b = 3; break;
      case 'W': b = 4; break;
    }
    cards[i] = 5 * b + a;
  }
  int matrix[25];
  for(i=0; i<25; i++) matrix[i] = 0;
  for(i=0; i<n; i++){
    matrix[cards[i]]=1;
  }
  n = 0;
  for(i=0; i<25; i++){
    if(matrix[i] == 1){
      cards[n] = i;
      n++;
    }
  }
  int v, k;
  int res[100];
  int min = 100;
  for(v=0; v<1024; v++){
    for(i=0; i<n; i++) res[i] = 0;
    for(i=0; i<n; i++){
      for(k=0; k<5; k++){
        int a = (v >> k) & 1;
        if(cards[i] / 5 == k && a) res[i] += 1 << k;
      }
      for(k=0; k<5; k++){
        int a = (v >> (k + 5)) & 1;
        if(cards[i] % 5 == k && a) res[i] += 1 << (k + 5);
      }
    }
    int j;
    int test = 0;
    for(i=0; i<n; i++)
    for(j=0; j<n; j++)
      if(i!=j && res[i] == res[j]) test = 1;

    if(! test){
      int count = 0;
      int v1 = v;
      while(v1 > 0){
        count += v1 & 1;
        v1 >>= 1;
      }
      if(count < min){
        min = count;
      }
    }
  }
  printf("%d\n", min);
  return 0;
}
