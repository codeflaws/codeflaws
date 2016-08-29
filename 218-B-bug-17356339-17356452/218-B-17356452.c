#include<stdio.h>
#define N 1000
#include<stdlib.h>
#include<math.h>
#define MAX_N 10000
int heap[MAX_N],size=0;
void print(){
	int i;
	for(i=0;i<size;i++){
		printf(" %d",heap[i]);
	}
	printf("\n");
}

void push(int x) {
	int i=size;
	size++;
	while(i>0) {
		int p=(i-1)/2;
		if(heap[p]>=x) break;//父亲节点小于等于儿子节点就停止！
		//儿子节点就放这个新值
		heap[i]=heap[p];//新儿子节点上放上了父亲节点的值！
		//相当于把父节点下移一层
		i=p;//这时儿子可能要放在父节点上
	}
	heap[i]=x;
}
int pop() {
	int ret=heap[0];
	size--;
	int x=heap[size];
	//这里也只是提取了最后一个元素，但是这种提取也是没有必要的！

	int i=0;
	while(i*2+1<size) {
		int a=i*2+1,b=i*2+2;
		int max=a;
		if(b<size && heap[b]>heap[a]) max=b;//保证左边儿子的值
		//这里不是保证左边儿子比右边儿子小，
		//只是取两个儿子中的最小值，来进行比较。
		//即使左边儿子比右边的大，这里也没有做出一种更换！
		if(heap[max]<=x) break;//认为heap[0]=x;=最后一个数
		heap[i]=heap[max];
		i=max;
	}
	heap[i]=x;
	return ret;
}
void sort(int a[],int n){
	int i,j;
	for(i=0;i<n-1;i++){
		int min=i;
		for(j=i+1;j<n;j++){
			if(a[j]<a[min]){
				min=j;
			}
		}
		if(min!=i){
			int tmp=a[min];
			a[min]=a[i];
			a[i]=tmp;
		}
	}
}
int main(int argc, char *argv[]) {
	int n,m;
	scanf("%d%d",&n,&m);
	int i;
	int seat[N];
	for(i=0;i<m;i++){
		scanf("%d",&seat[i]);
		push(seat[i]);
	}
	//最大值的获得是总是去当前座位中的最大值
	//最小值的获得是总是取当前座位中的最小值
	//两者都可以用heap实现，但是最小值的获得可以不用heap！
	//这个问题很棒，把我最近学习的新知识都运用了！
	//所以要排序座位
	sort(seat,m);
	int min=0;
	int people=n;
	/*
	for(i=0;i<m;i++){
		printf(" %d",seat[i]);
	}
	printf("\n");
	*/
	for(i=0;i<m;i++){
		if(people==0)break;
		if(seat[i]>=people){
			//全部使用
			int big=seat[i];
			int small=seat[i]-people+1;
			min+=((big+small)*people)/2;
			people=0;
		}else{
			min+=seat[i]*(seat[i]+1)/2;
			people=people-seat[i];
		}
	}
	int max=0;
	for(i=0;i<n;i++){
		//print();
		int get=pop();
		//print();
		max+=get;
		if(get-1>0)push(get-1);
		//print();
		//printf("----------\n");
	}
	printf("%d %d\n",max,min);

	return 0;
}
