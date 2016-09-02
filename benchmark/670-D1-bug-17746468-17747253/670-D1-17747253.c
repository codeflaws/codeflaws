#include <stdio.h>

struct cookies{
	int a;
	int b;
	int c;
};
typedef struct cookies cookies;

cookies a[1000006],b[1000006];

void sort(cookies* a, int i)
{
 if(i==1||i==0) return;
 
 int x=0, y=0,j=0;
 int z=i;
 
 sort(a,i/2);
 sort(a+i/2,i-i/2);
 
 while(z--)
 {
  if(x==i/2)
  {
   b[j]=a[i/2+y];
   j++;
   y++;
   continue;
  }
  if(y==(i-i/2))
  {
   b[j]=a[x];
   j++;
   x++;
   continue;
  }
  
  if(a[x].c<=a[i/2+y].c)
  {
   b[j]=a[x];
   j++;
   x++;
  }
 
  else
  {
   b[j]=a[i/2+y];
   j++;
   y++;
  }
 }
 
 z=0;
 while(j--)
 {
  a[z]=b[z];
  z++;
 }
 return;
}

int main(int argc, char *argv[]) {
	
	int n,k,i=0,sum=0,sum1=0,ans;
	
	
	scanf("%d %d",&n,&k);
	
	while(i<n)
	{
		scanf("%d",&a[i].a);
		i++;
	}
	i=0;
	while(i<n)
	{
		scanf("%d",&a[i].b);
		a[i].c=a[i].b/a[i].a;
		i++;
	}
	
	sort(a,n);
	i=0;
	
	while(k>0&&i<n)
	{
		sum1=sum;
		while(i<n-1&&a[i].c==a[i+1].c) {sum+=a[i].a;sum1+=(a[i].c+1)*a[i].a-a[i].b;  i++;}
		sum+=a[i].a;sum1+=(a[i].c+1)*a[i].a-a[i].b;
		ans=a[i].c;
		if(k>=sum1){k-=sum1;sum1=0;ans++;}
		else break;
		if(i==n-1) break;
		if(ans+k/sum<a[i+1].c){ans+=k/sum;break;}
		else{k-=((a[i+1].c-ans)*sum);ans=a[i+1].c;}
		i++;
		
	}
	
	if(k>0&&i==n-1)
	{
		ans+=k/sum;
	}
	printf("%d",ans);
	return 0;
}
