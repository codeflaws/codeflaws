#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include <limits.h>
#define INF INT_MIN
typedef long long int LL;
#define SI(n) scanf("%d",&n)
#define PI(n) printf("%d",n)

int max(int a , int b){
	if(a>=b) return a;
	return b;
}
int min(int a , int b){
	if(a>b) return b;
	return a;
}
typedef struct node{
	int val;
	struct node* next;
}node;

typedef struct stack{
	node* startnode;
	int size;
}stack;

void push(stack* given , int value){
	if(given->startnode == NULL){
		given->startnode = (node*)malloc(sizeof(node));
		given->startnode->val = value;
		given->startnode->next = NULL;
		(given->size)++;
		return;
	}
	node* temp;
	temp = (node*)malloc(sizeof(node));
	temp->val = value;
	temp->next = given->startnode;
	given->startnode = temp;
	(given->size)++;
	return;

}

int top(stack* given){
	if(given->startnode)
		return given->startnode->val;
	return INF;
}

int size(stack* given){
	return given->size;
}

bool isempty(stack* given){
	if(given->size==0)
		return true;
	return false;
}

void pop(stack* given){
	if(isempty(given)){
		//printf("Stack is empty!\n");
		return;
	}
	node* temp = given->startnode;
	given->startnode = given->startnode->next;
	(given->size)--;
	free(temp);
	return;
}


int main(int argc, char *argv[])
{
	int n,i;
	SI(n);
	int a[n] , L[n] , R[n];
	
	for(i=0;i<n;i++)
		SI(a[i]);
	L[0]=-1;
	stack* mystack;
	mystack = malloc(sizeof(stack));
	mystack->size=0;
	mystack->startnode=NULL;
	push(mystack,0);
	for(i=1;i<n;i++)
	{
		while(!isempty(mystack) && a[top(mystack)]>=a[i])
			pop(mystack);
		if(isempty(mystack))
			L[i]=-1;
		else
			L[i]=top(mystack);
		push(mystack,i);
	}
	while(!isempty(mystack))
		pop(mystack);
	R[n-1]=n;
	push(mystack,n-1);
	for(i=n-2;i>=0;i--)
	{
		while(!isempty(mystack) && a[top(mystack)]>=a[i])
			pop(mystack);
		if(isempty(mystack))
			R[i]=n;
		else
			R[i]=top(mystack);
		push(mystack,i);
	}
	int ans[n+1];
	for(i=0;i<=n;i++)
		ans[i]=0;
	for(i=0;i<n;i++)
	{
		ans[R[i]-L[i]-1]=max(ans[R[i]-L[i]-1] ,a[i] );
		//printf("%d %d\n",R[i],L[i]);
	}
	for(i=n-1;i>=0;i--)
	{
		ans[i]=max(ans[i] , ans[i+1]);
	}
	for(i=1;i<n;i++) {
		PI(ans[i]);
		printf(" ");
	}
	PI(ans[i]);
	printf("\n");
	return 0;
}
