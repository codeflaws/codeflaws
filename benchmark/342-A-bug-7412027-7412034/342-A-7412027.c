#include<stdio.h>
int main(int argc, char *argv[]){
    int N;
    scanf("%i",&N);
    int Pole[N];
    int i=0;
    for(i=0;i<N;i++){
        scanf("%i", &Pole[i]);
    }
    int pocet[8];
    for(i=0;i<8;i++){
        pocet[i]=0;
    }
    for(i=0;i<N;i++){
        pocet[Pole[i]]++;
    }
    int stav=1;
    if(pocet[5]!=0||pocet[7]!=0) stav=0;
    if(pocet[1]!=pocet[2]+pocet[3]) stav=0;
    if(pocet[4]+pocet[6]!=pocet[1]) stav=0;
    if(pocet[4]>pocet[2]) stav=0;
    if(stav){
        for(i=0;i<pocet[4];i++){
            printf("1 2 4\n");
        }
        for(i=pocet[4];i<pocet[2];i++){
            printf("1 2 6\n");
        }
        for(i=pocet[2];i<pocet[1];i++){
            printf("1 3 6\n");
        }
    }
    return 0;
}

