#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    long value;
    long pgcd;
    struct node* next;
} node_t;

long pgcd(long a, long b){
    if(a < b) pgcd(b,a);
    if(b == 0) return a;
    pgcd(b, a % b);
}

long find(max, min){
    long p = min;
    while(++p < max){
        if(pgcd(p, max) == 1 && pgcd(p, min) == 1) return p;
    }
    if(min>0 && pgcd(min, min-1) == 1 && pgcd(max, min-1) == 1) return min-1;
    if(max>0 && pgcd(max, max-1) == 1 && pgcd(max-1, min) == 1) return max-1;
}

int main(int argc, char **argv) {
    int nb_elt, i;
    long k=0;
    node_t *tab, *p;
    long newval;
    
    scanf("%d", &nb_elt);
    tab = calloc(nb_elt, sizeof(node_t));
    for(i=0; i < nb_elt; i++){
        scanf("%li", &tab[i].value);
        if(i>0){ 
            tab[i-1].next = &tab[i];
            tab[i-1].pgcd = pgcd(tab[i-1].value, tab[i].value);
        }
    }
    
    for(i=0; i < nb_elt-1; i++){
        if(tab[i].pgcd != 1){
            k=k+1;
            newval = (tab[i].value > tab[i+1].value) ? find(tab[i].value, tab[i+1].value): find(tab[i+1].value, tab[i].value);
            node_t* ins = calloc(1, sizeof(node_t));
            ins->value = newval;
            ins->next = tab[i].next;
            tab[i].next = ins;
        }
    }
    
    printf("%ld\n", k);
    p = &tab[0];
    i = 0;
    while(p->next != 0){
        printf("%ld ", p->value);
        p = p->next;
    }
    printf("%ld", p->value);
    
    for(i=0; i < nb_elt; i++){
        if (tab[i].pgcd != 1) free(tab[i].next);
    };
    
    free(tab);
    return 0;
}
