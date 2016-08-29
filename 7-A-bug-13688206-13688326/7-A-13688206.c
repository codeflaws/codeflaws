#include <stdio.h>

int all_same_horizon(char str[8]){
    int i, counter=0;
    for(i=0; str[i]!='\0'; i++){
        if(str[i]=='B') counter+=1;
    }
    if(counter==8) return 1;
    else return 0;
}

int B_counter(char str[8]){
    int i, count=0;
    for(i=0; str[i]!='\0'; i++){
        if(str[i]=='B') count++;
    }
    return count;
}


int main(int argc, char *argv[])
{
    int i,k=1, j,stroke=0, temp=0, final_stroke;
    char word[8];
    for(i=1; i<=8; i++){
        scanf("%s", word);
        if(all_same_horizon(word)==1) stroke++;
        else temp=temp+B_counter(word);
    }
    final_stroke=stroke+(temp/(8-stroke));
    printf("%d", final_stroke);
    return 0;
}
