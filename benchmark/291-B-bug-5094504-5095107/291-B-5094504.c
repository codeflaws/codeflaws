#include <stdio.h>
int main(int argc, char *argv[]){
    char c;
    while((c=getchar())!='\n'){
            if(c!=' '){
            printf("<");
         if(c=='"'){
            while((c=getchar())!='"')
               printf("%c",c);
         }
         else{
                printf("%c",c);
            while((c=getchar())!=' ')
               printf("%c",c);
         }
         printf(">\n",c);
        }
    }
   return 0;
}
