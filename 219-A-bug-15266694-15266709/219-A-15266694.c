#include<stdio.h>
int main(int argc, char *argv[]){
	int a[30] = {0},n = 0,yer = 0,i,sayi,k;
	char h,sonuc[1005] = {0};
	scanf("%d%c",&sayi,&h);
	while(1){
		scanf("%c",&h);
		if(h == 10)
			break;
		a[h-'a']++;
		n++;
	}
	for(i = 0 ; i < 30 ; i++)
		if(a[i] && !(a[i]%sayi)){
			for(k = 1 ; k <= a[i]/sayi ; k++){
				sonuc[yer] = i + 'a';
				yer++;
			}
		}
		else if(a[i] && a[i]%sayi){
			printf("-1");
			return 0;
		}
	for(k = 1 ; k <= sayi ; k++)
		for(i = 0 ; i <= yer ; i++)
			printf("%c",sonuc[i]);
	return 0;
}
