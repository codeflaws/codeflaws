#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define max(a,b) a>b ? a : b
#define min(a,b) a>b ? b : a
/*
   typedef struct node
   {
   int x;
   int y;
   int z;
   }node;

   node tree[400010];

   node merge(node *l, node *r)
   {
   node c;
   c.x = l->x + r->x;
   c.y = l->y + r->y;
   c.z = l->z + r->z;
   return c;
   }

   void build(int idx, int start, int end)
   {
   if( start > end ) return;

   if( start == end )
   {
   tree[idx].x = tree[idx].y = tree[idx].z = 0;
   if( str[end] == 'x' )
   tree[idx].x = 1;
   else if( str[end] == 'y' )
   tree[idx].y = 1;
   else
   tree[idx].z = 1;
   }

   int mid = (start+end)/2, left = 2*idx, right = left | 1;
   build( left, start, mid);
   build( right, mid+1, end);

   tree[idx] = merge(tree[left],tree[right]);
   }

   node query(int index
 */

int x[100010]={0},y[100010]={0},z[100010]={0};

int main(int argc, char *argv[])
{
   int n,p,q,i,tmp;

   char str[100010];
   scanf("%s",str);
   int len = strlen(str);

   if( str[0] == 'x' ) x[1] = 1;
   else if( str[0] == 'y' ) y[1] = 1;
   else z[1] = 1;

   for(i=1;i<len;i++)
   {
      x[i+1] = x[i];
      y[i+1] = y[i];
      z[i+1] = z[i];

      if( str[i] == 'x' ) x[i+1]++;
      else if(str[i] == 'y' ) y[i+1]++;
      else z[i+1]++;
   }

   scanf("%d",&n);
   while(n--)
   {
      scanf("%d %d",&p,&q);
      int x1 = x[q] - x[p-1];
      int y1 = y[q] - y[p-1];
      int z1 = z[q] - z[p-1];

      if( (q-p+1) < 3 ) printf("YES\n");
      else
      {
	 int div = (q-p+1)/3;
	 int rem = (q-p+1)%3;

	 if( rem == 0 )
	 {
	    if( x1 == y1 && y1 == z1) printf("YES\n");
	    else printf("NO\n");
	 }
	 else if(rem == 1)
	 {
	    if( x1 == div && y1 == div && z1 == div+1 ) printf("YES\n");
	    else if( x1 == div && y1 == div+1 && z1 == div ) printf("YES\n");
	    else if( x1 == div+1 && y1 == div && z1 == div ) printf("YES\n");
	    else printf("NO\n");
	 }
	 else
	 {
	    if( x1 == div && y1 == div+1 && z1 == div+1) printf("YES\n");
	    else if( x1 == div+1 && y1 == div && z1 == div+1) printf("YES\n");
	    else if( x1 == div+1 && y1 == div+1 && z1 == div) printf("YES\n");
	    else printf("NO\n");
	 }
      }
   }
   return 0;
}
