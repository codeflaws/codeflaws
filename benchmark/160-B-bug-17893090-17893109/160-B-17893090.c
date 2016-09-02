#include<stdio.h>
#define pp printf
#define ss scanf
int i,n,j,t,k,b,e;
char a1[55],a2[55];
int ans=0;
int main(int argc, char *argv[]){
	ss("%d",&n);
	for(i=0;i<n;i++){
		ss(" %c",&a1[i]);
		j=i;
		while(j){
			if(a1[j-1]>a1[j]){
				t=a1[j-1];a1[j-1]=a1[j];a1[j]=t;
				j--;}
			else break;}}
	i=j=t=0;	
	for(i=0;i<n;i++){
		ss("%c",&a2[i]);
		j=i;
		while(j){
			if(a2[j-1]>a2[j])
			{
				t=a2[j-1];a2[j-1]=a2[j];a2[j]=t;
				j--;
			}
			else break;}}
	for(i=0;i<n;i++)	
		if(a1[i]<a2[i])
			k++;
		else if (a1[i]==a2[i])
			e++;
		else
			b++;
	if((k && !e && !b)||(b && !e && !k))
		pp("YES");
	else
		pp("NO");




return 0;
}
