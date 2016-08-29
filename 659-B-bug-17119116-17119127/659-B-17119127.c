#include <stdio.h>
typedef struct node{
    char name[11];
    int a,b;
}node;
node inp[100001];
int n,m;
void readinp(){
    FILE *inp2 = stdin;
    fscanf(inp2, "%d %d ",&n,&m);
    int i;
    for(i=0;i<n;i++)
        fscanf(inp2,"%s %d %d ",inp[i].name, &inp[i].a,&inp[i].b);
}

int comp (const void * aa, const void * bb){
    node *a = (node*)aa;
    node *b = (node*)bb;
    if(a->a == b->a){
        return a->b-b->b;
    }
    return a->a-b->a;
}
int main(int argc, char *argv[]) {
	// your code goes here
	readinp();
	qsort(inp, n, sizeof(node), comp);
    int i=0,j;
    while(i<n){
        while((i+1)<n && inp[i].a == inp[i+1].a)i++;
        if(i-2>=0 && inp[i-2].a == inp[i].a && inp[i-2].b == inp[i-1].b){
            printf("?\n");
            i++;
            continue;
        }
        printf("%s %s\n",inp[i].name, inp[i-1].name);
        i++;
    }
	return 0;
}

