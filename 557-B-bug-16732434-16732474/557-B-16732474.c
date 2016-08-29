#include<stdio.h>
#include<stdlib.h>


void Merge(int *a,int *L,int leftCount,int *R,int rightCount) {
	int i,j,k;


	i = 0; j = 0; k =0;

	while(i<leftCount && j< rightCount) {
		if(L[i]  < R[j]) a[k++] = L[i++];
		else a[k++] = R[j++];
	}
	while(i < leftCount) a[k++] = L[i++];
	while(j < rightCount) a[k++] = R[j++];
}


void MergeSort(int *a,int n) {
	int mid,i, *L, *R;
	if(n < 2) return;

	mid = n/2;

	L = (int*)malloc(mid*sizeof(int));
	R = (int*)malloc((n- mid)*sizeof(int));

	for(i = 0;i<mid;i++) L[i] = a[i];
	for(i = mid;i<n;i++) R[i-mid] = a[i];

	MergeSort(L,mid);
	MergeSort(R,n-mid);
	Merge(a,L,mid,R,n-mid);
        free(L);
        free(R);
}


int main(int argc, char *argv[]){

int n,k,i,q,w;

scanf("%d %d",&n,&k);

n += n;

int a[n];

for(i=0;i<n;i++)
    scanf("%d",&a[i]);




MergeSort(a,n);


q = a[n/2];
w = a[0];

float total;

if(2*w > q)
    total = .75*(float)q*(float)n;
else
    total = 1.5*(float)w*(float)n;

if(total > (float)k)
    printf("%d",k);

else
    printf("%f",total);

return 0;
}