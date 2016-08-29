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
            while((c=getchar())!=' '&&c!='\n')
               printf("%c",c);
         }
         printf(">\n",c);
        }
        if(c=='\n') break;
    }
   return 0;
}
