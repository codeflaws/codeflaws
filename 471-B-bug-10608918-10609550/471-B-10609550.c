#include<stdio.h>
void merge(int* a,int* b,int* c,int* d,int s,int e){
	if(s>=e)
		return ;
	merge(a,b,c,d,s,(s+e)/2);
	merge(a,b,c,d,((s+e)/2)+1,e);
	int i=s,j=((s+e)/2)+1,n=s;
	while(i<=(s+e)/2 || j<=e){
		if(a[i]<=a[j] && i<=(s+e)/2){
			b[n] = a[i];
			d[n] = c[i];
			i++;
			n++;
		}
		else{
			if(a[i]>=a[j] && j<=e){
				b[n] = a[j];
				d[n] = c[j];
				j++;
				n++;
			}
			else{
				if(i>(s+e)/2){
					while(j<=e){
					b[n] = a[j];
					d[n] = c[j];
					j++;
					n++;
					}
				}
				else{
					while(i<=(s+e)/2){
						b[n] = a[i];
						d[n] = c[i];
						i++;
						n++;
					}
				}
			}
		}
	}
	for(i=s;i<=e;i++){
		a[i] = b[i];
		c[i] = d[i];
	}
	return ;
}
int main(int argc, char *argv[]){
	int i,j,k,l,n,m,a[2000],b[2000],c[2000],d[2000];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		c[i]=i+1;
	}
	merge(a,b,c,d,0,n-1);
	int two=0,three=0,flag=0;
	int rem1,remt1,remt2;
	for(i=0;i<n-1;i++){
		if(a[i]==a[i+1]){
			if(two==0)
				remt1=i;
			else{
				remt2=i;
				flag=2;
				break;
			}
			two++;
			if(i<n-2){
				if(a[i+1]==a[i+2]){
					flag = 1;
					rem1 = i;
					break;
				}
			}
		}
	}
	if(flag==0)
		printf("NO\n");
	else if(flag==1){
		printf("YES\n");
		for(j=0;j<3;j++){
			for(i=0;i<n;i++){
				if(i==rem1 && j==1){
					printf("%d %d %d ",c[i],c[i+2],c[i+1]);
					i=i+2;
				}
				else if(i==rem1 && j==2){
					printf("%d %d %d ",c[i+2],c[i],c[i+1]);
					i=i+2;
				}
				else
					printf("%d ",c[i]);
			}
			printf("\n");
		}
	}
	else{
		printf("YES\n");
		for(j=0;j<3;j++){
			for(i=0;i<n;i++){
				if(i==remt1 && j==1){
					printf("%d %d ",c[i+1],c[i]);
					i++;
				}
				else if(i==remt2 && j==2){
					printf("%d %d ",c[i+1],c[i]);
					i++;
				}
				else
					printf("%d ",c[i]);
			}
		printf("\n");
		}
	}
	return 0;
}
