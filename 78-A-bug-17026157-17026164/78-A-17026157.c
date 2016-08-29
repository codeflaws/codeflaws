#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
int i,v1=0,v2=0,v3=0,counter=0;
char x;

while(1){

    scanf("%c",&x);
    if(x=='a' || x=='o' || x=='u' || x=='i' || x=='e')
        v1++;

    if(x=='\n'){

            if(counter==0){

                if(v1==5){
                    v1=0;
                    counter++;
                    continue;
                }
                else{
                    printf("NO");

                    return 0;
                }
            }

            if(counter==1){

                if(v1==7){
                    v1=0;
                    counter++;
                    continue;
                }

                else{ printf("NOo");
                return 0; }


             }


             if(counter==2){

                if(v1==5){
                    printf("YES");
                    return 0;
                }

                else {
                    printf("NO");
                    return 0;
                }
             }

}

}
}
