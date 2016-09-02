#include <stdio.h>
typedef struct {
	short year;
        short month;
	short day;
	int occ;
} date;
date dates[100000];
int arr[3];
int maxdt,i,j,t,k;
int months[]={
	31, /*jan*/
	28, /*feb*/
	31, /*mar*/
	30, /*apr*/
	31, /*may*/
	30, /*jun*/
	31, /*jul*/
	31, /*aug*/
	30, /*sep*/
	31, /*oct*/
	30, /*nov*/
	31  /*dec*/
};
char c,str[100000];
#define ISN(a) (((a)>='0')&&((a)<='9'))
int main(int argc, char *argv[]){
	scanf("%s", str);
	for(i=0; str[i]; i++){
		if(ISN(str[i])){
			j=i;
			arr[0]=0;
			for(t=0; t<2; t++, j++){
				if(!str[j] || !ISN(str[j])){
				   goto next_num;	
				}
				arr[0]*=10;
				arr[0]+=str[j]-'0';		
			}
			if(!arr[0]||!str[j]||str[j]!='-'){
				goto next_num;
			}
			j++;

			arr[1]=0;
			//printf("%d\n", arr[0]);
			for(t=0; t<2; t++, j++){
				if(!str[j] || !ISN(str[j])){
					goto next_num;
				}
				arr[1]*=10;
				arr[1]+=str[j]-'0';
			}
			if(!arr[1]||arr[1]>12||(arr[0]>months[arr[1]-1])){
				goto next_num;
			}
			//printf("%d", arr[1]);
			if(!str[j]||str[j]!='-'){
				goto next_num;
			}
			j++;

			arr[2]=0;
			for(t=0; t<4; t++, j++){
				if(!str[j] || !ISN(str[j])){
					goto next_num;
				}
				arr[2]*=10;
				arr[2]+=str[j]-'0';
			}
			if(arr[2]<2013||arr[2]>2015){
				goto next_num;
			}
			//printf("%d--%d--%d\n", arr[0], arr[1], arr[2]);
			for(j=0; j<maxdt; j++){
				if((dates[j].day==arr[0])
			        && (dates[j].month==arr[1]) && dates[j].year==arr[2]){
					dates[j].occ++;
					break;
				}
			}
			if(j==maxdt){
				dates[j].day=arr[0];
				dates[j].month=arr[1];
				dates[j].year=arr[2];
				dates[j].occ++;
				maxdt++;
			}
			//printf("%d\n", maxdt);
		}
		next_num:;
	}
	t=0;
	for(i=1; i<maxdt; i++){
		if(dates[i].occ>dates[t].occ){
			t=i;
		}
	}
	printf("%d-%d-%d\n", dates[t].day, dates[t].month, dates[t].year);
	return 0;	
}
