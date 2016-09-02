#include<stdio.h>
#define swap(a,b) { t=a; a=b; b=t; }

int n;
int h[100000],son=0,t,k,l,hh[10000];
void ekle(int x)
{
	h[++son]=x;
	k=son;
	while(k/2)
	{
		if(h[k/2]<h[k])
		{
			swap(h[k/2],h[k])
			k/=2;
			continue;
		}
		break;
	}
}

void sil()
{
	int x = h[n];
	h[n--] = h[1];
	int k = 1;
	while(k * 2 <= n)
	{
		k=k*2+(h[2*k+1]>h[2*k] && 2*k+1 <= n);
		if(x<=h[k])	h[k/2] = h[k];
		else{ k /= 2; break; }
	}
	h[k] = x;
}
int main(int argc, char *argv[])
{
	int i,j,a;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a);
		ekle(a);
	}
	if(n==1)
	{
		printf("1");
		return 0;
	}
	int N = n,terim,b,sonraki,yukseklik,t=0;
	n = son;
	for(i=0;i<N;i++)
		sil();
	n=N;
	/*for(i=1;i<=n;i++)
		printf("%d ",h[i]);
	printf("\n");*/
	//printf("%d ",n);
	while(n>0)
	{
		t++;
		b=1;
		yukseklik=0;
		//terim=0;
		//puts("");
		while(b<N) 
		{
			while((hh[b] || h[b]<yukseklik) && b<N)
			{
				b++;
			}
			if(h[b]<yukseklik || hh[b])
				break;
			hh[b]=1;
			yukseklik++;
			n--;
		//	printf("%d ",h[b]);
			//getchar();
			//getchar();
			//printf("%d %d\n",h[b],yukseklik-1);
		}
	}
	printf("%d",t);
	return 0;
}
