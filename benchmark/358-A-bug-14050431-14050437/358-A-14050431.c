#include <stdio.h>
#include <stdlib.h>

struct pair {
    int a;
    int b;
};

int main(int argc, char *argv[])
{
    int n, i, j, anterior, aux;
    struct pair *lista, *ptr, *ptr_a, *ptr_b;

    fscanf(stdin, "%d", &n);
    lista = malloc((n - 1) * sizeof(struct pair));

    ptr = lista + 0;
    fscanf(stdin, "%d", &anterior);
    ptr->a = anterior;
    fscanf(stdin, "%d", &anterior);
    ptr->b = anterior;
    if (ptr->a > ptr->b) {
        aux = ptr->a;
        ptr->a = ptr->b;
        ptr->b = ptr->a;
    }

    for (i = 2; i < n; i++) {
        ptr = lista + i - 1;
        ptr->a = anterior;
        fscanf(stdin, "%d", &anterior);
        ptr->b = anterior;
        if (ptr->a > ptr->b) {
            aux = ptr->a;
            ptr->a = ptr->b;
            ptr->b = aux;
        }
    }

    for (i = 0; i < n - 1; i++) {
        ptr_a = lista + i;
        for (j = 0; j < n - 1; j++) {
            ptr_b = lista + j;
            if ((ptr_a->a < ptr_b->a && ptr_b->a < ptr_a->b && ptr_a->b < ptr_b->b) ||
                (ptr_b->a < ptr_a->a && ptr_a->a < ptr_b->b && ptr_b->b < ptr_a->a)) {
                fprintf(stdout, "yes");
                return 0;
            }
        }
    }

    fprintf(stdout, "no");

    return 0;
}
