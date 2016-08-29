#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

#define fo(i,m,n) for(i=m;i<n;i++)
#define rep(i,n) fo(i,0,n)
#define s(n) scanf("%lld",&n)
#define ss(s) scanf("%s",s)
#define sc(c) scanf("%c",&c)
#define ps(s) printf("%s",s)
#define p(n) printf("%lld\n",n)
#define swp(i,a,b) {i=a^b; a^=i; b^=i;}

typedef long long int ll;

typedef struct node
{
	ll x,y; struct node* next;
}pair;

int main(int argc, char *argv[])
{
	ll i,j,k,n,l=0,tmp; s(n); pair *v,*c,*t=NULL; ll a[n]; rep(i,n) s(a[i]);
	rep(i,n)
	{
		j=i;
		fo(k,i+1,n) if(a[j]>a[k]) j=k;
		if(i!=j)
		{
			c=(pair*)malloc(sizeof(pair)); c->x=i; c->y=j; c->next=NULL;
			if(t){
				t->next=c;
				t=t->next;
			}
			else v=t=c; l++;
		} swp(tmp,a[i],a[j]);
	} p(l);
	while(v)
	{
		printf("%lld %lld\n",v->x,v->y);
		c=v; v=v->next; free(c);
	}
	return 0;
}
