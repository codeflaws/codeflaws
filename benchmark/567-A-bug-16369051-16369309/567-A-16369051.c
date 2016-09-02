#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[])
{
	int n,i;
    unsigned long max,max1,min,min1;

	scanf("%d", &n);
	int numbers[n];

	for(i = 0;i < n;i++){
		scanf("%d", &numbers[i]);
	}
	min = 4294967295;
	min1 = 4294967295;
	max = 0;
	max1 = 0;
	for(i = 0;i < n;i++){
        max = fabs(numbers[i] - numbers[0]);
        max1 = fabs(numbers[i] - numbers[n-1]);
        if(max < max1)
            max = max1;
        if(i > 1&&i < n-1){
        min = fabs(numbers[i] - numbers[i-1]);
        min1 = fabs(numbers[i] - numbers[i+1]);
        }
        else if(i == 0)
            min = fabs(numbers[i] - numbers[i+1]);
        else
            min = fabs(numbers[i] - numbers[i-1]);
        if(min > min1)
            min = min1;
        printf("%ld %ld\n", min, max);
        min = 4294967295;
        min1 = 4294967295;
        max = 0;
        max1 = 0;
	}
return 0;
}
