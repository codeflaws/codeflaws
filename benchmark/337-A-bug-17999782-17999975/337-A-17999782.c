#include <stdio.h>
#include <string.h>
#include <malloc.h>
int calc_arr_diff(int* arr,int start, int end){
	int i;
	int diff=0;
	for(i=start;end-start/2 >= i;i++,end--){
		diff += arr[end]-arr[i];
	}
	return diff;

}
void QuickSort( int* array, int startIdx, int endIdx ) { 
     int pivot, left, right; 
     left = startIdx; 
     right = endIdx; 
     pivot = array[ left ]; // 0��° ���Ҹ� �Ǻ����� ���� 
     while( left < right ) { 
            while ((array[right] >= pivot) && (left < right) ) 
                right --; 
            if( left != right ) 
                 array[left] = array[right]; 
            while( (array[left] <= pivot) && (left < right) ) 
                left ++; 
            if( left != right ) 
                 array[right] = array[left]; 
     } 
     array[left] = pivot; 
     pivot = left; 
     if( startIdx < pivot ) 
         QuickSort( array, startIdx, pivot - 1 ); 
     if( endIdx > pivot) 
         QuickSort( array, pivot + 1, endIdx ); 
 }
void PrintArray( int array[], int size ) { 
     int i; 
     for( i=0 ; i<size ; i++ ) 
         printf( "%d ", array[i] ); 
     printf( "\n" ); 
} 

int main(int argc, char *argv[]){
	int selection;
	int display_cnt;
	int *display;
	int tmp;
	int result;
	int min=99999;
	int i;
	scanf("%d %d",&selection,&display_cnt);
	if(selection<2 || display_cnt<2 || display_cnt>50 || selection>50 || display_cnt<selection){
		printf("wrong input");
		return 0;
	}
	display = (int*)malloc(sizeof(int)*display_cnt);
	for(i=0;i<display_cnt;i++){
		scanf("%d",&display[i]);
	}
	//1. sorting
	QuickSort(display,0,display_cnt-1);
	//PrintArray(display,display_cnt);
	//2. calculate difference to find Min. diff.
	for(i=0;i<=display_cnt-selection;i++){
		tmp = calc_arr_diff(display,i,i+selection-1);
		//printf("arr[%d]~arr[%d] hsd %d difference\n",i+selection-1,i,tmp);
		if(tmp<min){
			min=tmp;
			//printf("change min : %d\n\n",min);
		}
	}
	printf("%d\n",min);
	return 0;
}
