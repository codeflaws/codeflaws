#include<stdio.h>
    int N;
     int P;
         int i=0;
         int j=0;
         int ano;
         int posledni;
         int stav;
         int stav2=0;
int palindromes(char *a){
    //printf("%i", posledni);
    ano=0;
    posledni=N;
    /*for(i=0;i<N;i++){
        printf("%c", a[i]+97);
    }
    printf("\n");*/
    for(i=0;i<N;i++){
        stav=0;
        for(j=1;j<N;j++){
            if(i>=j&&i+j<N&&a[i-j]==a[i+j]){ano=1; if(i+j<posledni) posledni=i+j;stav=1;}
            else break;
        }
    }
    for(i=0;i<N-1;i++){
        stav=0;
        for(j=0;j<N;j++){
            if((i>=j)&&(i+j+1<N)&&(a[i-j]==a[i+j+1])){ano=1; if(i+j<posledni) posledni=i+j+1;stav=1;}
            else break;
        }
    }
    if(ano==0) return 1;
    else {
        if(posledni==1&&a[0]==P-1&&stav2==1) return 0;
        for(i=posledni;i>=0;i--){
                if(a[i]!=P-1) {a[i]++; break;}
                else if(a[i]==P-1) a[i]=0;
                else if(i==0) return 0;
                else break;
        }
        for(i=posledni+1;i<N;i++){
            a[i]=0;
        }
        stav2=1;
    return 3;
    }
}

int main(int argc, char *argv[]){

    scanf("%i %i", &N, &P);
    char Pole[N];
    char blbost;
    scanf("%c", &blbost);
    int res=3;
    for(i=0;i<N;i++){
        scanf("%c", &Pole[i]);
        Pole[i]=Pole[i]-97;
    }
    char ab=Pole[0];
    for(i=N-1;i>=0;i--){
        if(Pole[i]!=P-1) {Pole[i]++; break;}
        else Pole[i]=0;
        if(i==0) res=0;
    }
    /*for(i=0;i<N;i++){
            printf("%c", Pole[i]+97);
        }
        printf("\n");*/
    /*char x={'c', 'a', 'd'};
    printf("%i\n\n", palindromes(&x));*/
    while(res==3) res=palindromes(&Pole);
    if(N==1&&ab!=P-1) printf("%c\n", ab+98 );
    else if(N==1&&ab==P-1) printf("NO\n");
    else if(res==1){
        for(i=0;i<N;i++){
            printf("%c", Pole[i]+97);
        }
        printf("\n");
    }
    else printf("NO\n");
    return 0;
}
