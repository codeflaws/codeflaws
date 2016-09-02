#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 200001

int main(int argc, char *argv[])
{
    int n, i, odd_start, even_start;
    int list[MAX_SIZE] = {0};
    int counter_list[MAX_SIZE] = {0};
    
    scanf("%d", &n);
    
    for(i=0; i<n; i++)
    {
    	int front, behind;
        scanf("%d %d", &front, &behind);
        
        list[front] = behind;
        counter_list[front]++;
        counter_list[behind]--;
    }
    
    odd_start = 0;
    even_start = list[0];
    
    while(1)
    {
        if(counter_list[odd_start] == 1)
            break;
        odd_start++;
    }
    
    for(i=1; i<=n; i++)
    {
        if(i & 1)
        {
    	    printf("%d ", odd_start);
    	    odd_start = list[odd_start];
    	}
    	else
    	{
    	    printf("%d ", even_start);
    	    even_start = list[even_start];
    	}
    }
    printf("\n");
    
    return 0;
}
