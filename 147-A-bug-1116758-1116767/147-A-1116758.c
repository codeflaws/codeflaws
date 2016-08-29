#include <stdio.h>
#include <ctype.h>
int main(int argc, char *argv[]){
    char c;
    do {
      scanf("%c",&c);
      if (isalpha(c)) printf("%c",c);
      else {
        while(c==' ') scanf("%c",&c);
        if (isalpha(c)) printf(" %c",c);
        else {
            printf("%c ",c);
            do { scanf("%c",&c); } while(c==' '); 
        }
      }
    } while (c!='\n');
    return 0;
}