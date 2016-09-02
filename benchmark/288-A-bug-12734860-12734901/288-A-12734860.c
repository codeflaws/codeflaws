#include <stdio.h>

int main(int argc, char *argv[]){

  int n, k, i, aux;
  char aorb;
  scanf("%d %d", &n, &k);

  if(n >= k && k > 1){
    char str[n+1];
    str[n] = 0;
    aux = 0;
    aorb = 0x61;
    for(i = 0; i < n+2-k; i++){
      str[i] = aorb;
      if(aorb == 0x61)
    aorb = 0x62;
      else
    aorb = 0x61;
    }
    aorb = 0x63;
    for(i = n+2-k; i < n; i++){
      str[i] = aorb+aux;
      aux++;
    }
    printf("%s\n", str);
  }
  else
    printf("-1\n");
return 0;
}
