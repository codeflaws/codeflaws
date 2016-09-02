#include<stdio.h>
#include<stdlib.h>

typedef struct LEG{
	int l;
	int d;
}LEG; 

int cmp(const void *,const void *);
int dc[202],count[100005],cost[100005];
LEG *ar;
int main(int argc, char *argv[]){
	int n,i,j,k,now,ncost,ans,left,ncount,db1,db2,db3;
	for(i=0;i<202;i++)
		dc[i]=0;
	scanf("%d",&n);
	ar=(LEG *)malloc(sizeof(LEG)*n);
	for(i=0;i<n;i++)
		scanf("%d",&(ar[i].l));
	for(i=0;i<n;i++)
		scanf("%d",&(ar[i].d));
	qsort(ar,n,sizeof(LEG),cmp);
	for(i=0;i<100005;i++)
		count[i]=0;
	now=-1;
	ncost=0;
	for(i=n-1;i>=0;i--){
		count[ar[i].l]++;
		if(ar[i].l!=now){
			cost[ar[i].l]=ncost;
			now=ar[i].l;
		}
		ncost+=ar[i].d;
	}
	i=0;
	now=-1;
	ncount=0;
	ans=1000000007;
	while(i<n){
		if(ar[i].l==now){
			dc[ar[i].d]++;
			i++;
			ncount++;
		}
		else{
			now=ar[i].l;
			left=ncount;
			if(left<count[ar[i].l]){
				if(ans>cost[ar[i].l]){
					ans=cost[ar[i].l];
					db1=ar[i].l;
					db2=cost[ar[i].l];
					db3=0;
				}
			}
			else{
				ncost=cost[ar[i].l];
				j=left+1-count[ar[i].l];
				k=1;
				while(j>0&&k<=200){
					if(dc[k]>j){
						ncost+=k*j;
						j=0;
					}
					else{
						ncost+=dc[k]*k;
						j-=dc[k];
					}
					k++;
				}
				if(j==0&&ncost<ans){
					ans=ncost;
					db1=ar[i].l;
					db2=cost[ar[i].l];
					db3=ncost;
				}
			}
			i++;
			ncount++;
		}
	}
	printf("%d\n",ans);
	//	printf("%d %d %d\n",db1,db2,db3);
	return 0;
}

int cmp(const void *a,const void *b){
	LEG *l1,*l2;
	l1=(LEG *)a;l2=(LEG *)b;
	if(l1->l>l2->l)
		return 1;
	else if(l1->l==l2->l)
		return 0;
	else
		return -1;
}
