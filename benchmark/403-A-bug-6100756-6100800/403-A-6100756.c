#include <stdio.h>

typedef struct sEdge{
    int v;
    int l;
}edge;

//acha um tamanho de grafo que comporte 2n+p arestas
int min_size_f(int p) {
    int size;
    for(size=1; ;size++){
       if (((size*(size-1))/2)>=(2*size+p))
          break;
    }
    return size;
}

//gera um grafo, de tamanho minimo, que funciona
int gen_graph(edge* graph,int* first_free_pos, int size,int edges_wanted){
   int x; int y; 
   for(x=1; x<=size,*first_free_pos < edges_wanted; x++){
       for(y=x;y<=size ; y++){
          if(x!=y && *first_free_pos < edges_wanted) {
              graph[*first_free_pos].v=x;
              graph[*first_free_pos].l=y;
              *first_free_pos = *first_free_pos+1;
          }
       }  
    }
}

void print_graph(edge* graph,int first_free_pos){
    int x;
    for (x=0;x<first_free_pos;x++)
	printf("%d %d\n",graph[x].v,graph[x].l);
}
/*
int main(int argc, char *argv[]){
   int p = 2;
   int size;
   edge graph[625];
   int first_free_pos = 0;
   size = min_size(p);
   gen_graph(graph,&first_free_pos,size,2*size+p);
   print_graph(graph,first_free_pos);
}
*/

int main(int argc, char *argv[]) {
   int nro_exemplos; 
   int n; int p;
   int min_size;
   int edges;
   int size;
   edge graph[625]; int first_free_pos;
   scanf("%d",&nro_exemplos);
   while(nro_exemplos--) {
       scanf("%d",&n);
       scanf("%d",&p);
       min_size = min_size_f(p);
       edges = min_size*2+p;
       gen_graph(graph,&first_free_pos,min_size,edges);
       for(size = min_size+1;size<=n;size++){
          //o novo tamanho tambem eh o numero do novo vertice
          graph[first_free_pos].v = size;
          graph[first_free_pos++].l = 1;
          graph[first_free_pos].v = size;
          graph[first_free_pos++].l = 2;
       }
       print_graph(graph,first_free_pos);
   }
}
