#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define allocandzero(type, sz) ({ \
        void *result = malloc(sz * sizeof(type)); \
        memset(result, 0, sz * sizeof(type)); \
        result; \
})

typedef struct {
    int height;
    long long doubled;
    long long popped;
} node;

typedef struct {
    node *buffer;
    int length;
} stack;

void push(stack *stck, node x) {
    (stck->buffer)[stck->length++] = x;
}
node gettop(stack *stck) {
    return stck->buffer[stck->length - 1];
}
void pop(stack *stck) {
    stck->length--;
    //return stck->arr[stck->cnt];
}
int isempty(stack *stck) {
    return (stck->length == 0);
}

int main(int argc, char **argv)
{
//#ifndef ONLINE_JUDGE
//    freopen("input.txt", "rb", stdin);  
//#endif
    int n, i, j, *input, maxind = 0;
    long long pairs = 0;
    stack worker;
    node cnode, enode;
    
    scanf("%d", &n);
    //input = allocandzero(int, n);
    //worker.buffer = allocandzero(node, n + 1);
    
    input = malloc(n * sizeof(int));
    //memset(input, 0, n * sizeof(int));
    
    worker.buffer = malloc((n + 1) * sizeof(node));
    //memset(worker.buffer, 0, (n + 1) * sizeof(node));*/
    worker.length = 0;
    
    for (i = 0; i < n; i++) {
        scanf("%d", input + i);
        if (input[maxind] < input[i] || i == 0) maxind = i;
    }
    
    i = maxind;
    
    cnode.height = input[i];
    cnode.doubled = 0;
    cnode.popped = 0;
    i = (i + 1) % n;
    push(&worker, cnode);

    for (j = 1; j <= n; j++) {
        cnode.height = input[i];
        cnode.doubled = 0;
        cnode.popped = 0;
        do {
            enode = gettop(&worker);
            if (j == n && (worker.length  > 2 || worker.length == 2 && worker.buffer[worker.length - 2].doubled > 0))
                pairs += enode.doubled + 1; //reversed connection to the first node 
            if (input[i] >= enode.height) {
                pop(&worker);
                pairs += enode.popped + enode.doubled;
                if (input[i] == enode.height)
                    cnode.doubled += enode.doubled + 1;
                else
                    cnode.popped += enode.doubled + 1;
            }
            else cnode.popped += 1;
        } while (!isempty(&worker) &&  input[i] >= enode.height);
        push(&worker, cnode);

        i = (i + 1) % n;
    }
    printf("%lld\n", pairs);
    free(worker.buffer);
    free(input);
//#ifndef ONLINE_JUDGE
//    fclose(stdin);
//#endif
    return 0;
}
