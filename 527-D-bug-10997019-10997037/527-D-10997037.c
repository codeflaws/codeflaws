#include<stdio.h>
#include<stdlib.h>

typedef struct {
	/* data */
	int left;
	int right;
} point;

void quicksort(point *data, int left, int right);
void swap(point *a, point *b);

int main(int argc, char *argv[]){
	int n;
	scanf("%d", &n);
	
	point points[200020];


	int i;
	int weight, coord;
	for(i = 0; i < n; i++){
		scanf("%d %d", &coord, &weight);
		points[i].right = coord + weight;
		points[i].left = coord - weight;
	}


	//printf("%d\n\n", points[1].left);
	quicksort(points, 0, n);

	/*for (i = 0; i < n; ++i)
	{
		
		printf("%d\n", points[i].left);
	}*/
	
	int vertexes = 0;
	int tmpl = points[0].left;
	int tmpr = points[0].right;

	for(i = 0; i < n; i++){
		if(points[i].left >= tmpr){
			vertexes += 1;
			tmpl = points[i].left;
			tmpr = points[i].right;
		}
		/*else if(points[i].left >= tmpl && points[i].right <= tmpr){
			tmpl = points[i].left;
			tmpr = points[i].right;
		}*/
		/*else if(points[i].left >= tmpl && points[i].right >= tmpr && points[i].left <= tmpr){
			vertexes += 1;
			tmpl = points[i].left;
			tmpr = points[i].right;
		}*/
		else if(points[i].left >= tmpl && points[i].right < tmpr){
			tmpl = points[i].left;
			tmpr = points[i].right;
		}
	}

	printf("%d\n", vertexes+1);
	
	return 0;
}

void quicksort(point arr[], int beg, int end)
{
  if (end > beg + 1)
  {
    int piv = (arr+beg) -> left, l = beg + 1, r = end;
    while (l < r)
    {
      if ((arr+l)->left <= piv)
        l++;
      else
        swap(&arr[l], &arr[--r]);
    }
    swap(&arr[--l], &arr[beg]);
    quicksort(arr, beg, l);
    quicksort(arr, r, end);
  }
}

void swap(point *a, point *b)
{
	    point temp = *a;
	    *a = *b;
	    *b = temp;
}
