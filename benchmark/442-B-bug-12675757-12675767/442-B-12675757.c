
#include<stdio.h>
#include<stdlib.h>

void quicksort(double p[], int first, int last);
double prob(double p[], int range);

int main(int argc, char *argv[])
{
	int n;
	double p[100];
	int i;
	double max;

	scanf("%d", &n);

	for(i = 0; i < n; i++)
		scanf("%lf", &p[i]);

	quicksort(p, 0, n-1);
	//for(i = 0; i < n; i++)
	//	printf("%.12lf  ", p[i]);
	//printf("\n");
	
	max = p[0];
	i = 1;
	double tmp;
	for(i = 1; i < n; i++){
		tmp = prob(p,i+1);
		printf("tmp = %.12lf\n", tmp);
		if(tmp > max){
			max = tmp; 
			continue;
		}
		else if(tmp < max){
			continue;
		}
		else if(tmp > max && i == n-1){
			max = tmp;
			break;
		}
	}

	printf("%.12lf\n", max);

	return 0;
}

void quicksort(double x[], int first, int last)
{
	 int pivot, j, i;
	 double temp;	
     if(first<last){
	     pivot=first;
	     i=first;
	     j=last;
         while(i<j){
             while(x[i]>=x[pivot] && i<last)
                i++;
             while(x[j]<x[pivot])
                j--;
             if(i<j){
                 temp=x[i];
                 x[i]=x[j];
                 x[j]=temp;
             }
         }
         temp=x[pivot];
         x[pivot]=x[j];
         x[j]=temp;
         quicksort(x,first,j-1);
         quicksort(x,j+1,last);
   }
}

double prob(double p[], int range)
{
	int com = 1;
	double ans = 0;
	double tmp = 0;
	int i, j;
	
	for(i = 0; i < range; i++){
		tmp = p[i];
		for(j = 0; j < range; j++){
			if(i != j)
				tmp *= com - p[j];
		}
		ans += tmp;
	}

	return ans;
}
