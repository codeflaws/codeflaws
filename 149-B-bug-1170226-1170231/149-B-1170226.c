#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char tch, ch[6], mn[6],tstr[20];
int l1=0,l2=0,max=0,i,j,k,t;
#define ISAL(c)(((c)>='A')&&((c)<='Z'))
int main(int argc, char *argv[]){
 scanf("%s", &tstr);
 l2=strlen(tstr); 
 while(tstr[i]!=':'){
	 i++;
 }
 i--;
 for(j=0; j<i; j++){
	 if(tstr[j]=='0'){
		 tstr[j]=0;
	 } else {
		 break;
	 }
 }
 j=0;
 i++;
 k=i+1;
 while(i--){
	 ch[j++]=tstr[i];
 }
 l1=strlen(ch);
 j=0;
 l2--;
 for(i=k; i<l2; i++){
	if(tstr[i]=='0'){
		tstr[i]=0;
	} else {
		break;
	}
 }
 while(l2>=k){
	 mn[j++]=tstr[l2];
	 l2--;
 }
 l2=strlen(mn);
 //printf("%d %d\n", l1, l2);
 if(l1==1&&l2==1&&ch[0]<'Z'){
	 puts("-1");
	 return 0;
 } 
 for(i=0; i<l1; i++){
	 ch[i]-=(ISAL(ch[i]))?('A'-10):'0';
	 if(ch[i]>max){
		max=ch[i];		 
	 }
	 //printf("%d ", ch[i]);
 }
 //putchar('\n');
 for(i=0; i<l2; i++){
	 mn[i]-=(ISAL(mn[i]))?('A'-10):'0';
	 if(mn[i]>max){
		 max=mn[i];
	 }
	 //printf("%d ", mn[i]);
 }
 //printf("\nMAX:%d\n", max);
 max++;
 k=max;
 while(1){
	 t=0,j=1;
	 for(i=0; i<l1; i++){
		t+=j*ch[i];
		j*=k;
	 }
	 if(t>=24){
		 break;
	 }
	 t=0; j=1;
	 for(i=0; i<l2; i++){
		 t+=j*mn[i];
		 j*=k;
	 }
	 if(t>=60){
		 break;
	 }
	 printf("%d ", k);
	 k++;
 }
 if(k==max){
	 putchar('0');
 }
 return 0;
}
