#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[])
{
	char s[100010];
	gets(s);
	int l=strlen(s),i,c1=0,c2=0,d,x,flag=1,c_x=0;
	for(i=0;i<l;i++){
		if(s[i]=='(') c1++;
		else if(s[i]==')') c2++;
		else{
			x=i;
			c_x++;
		}
	}
	int a[c_x],idx=0;
	if(c1<=c2) printf("-1");
	else{
		d=c1-c2;
		c1=0,c2=0;
		for(i=0;i<l;i++){
			if(s[i]=='(') c1++;
			else if(s[i]==')') c2++;
			else{
				if(i!=x){
					if(c2>=c1){
						flag=0;
						break;
					}
					else{
						d--;
						c2++;
						a[idx]=1;
						idx++;
					}
				}
				else{
					if(c2>=c1){
						flag=0;
						break;
					}
					else{
						a[idx]=d;
					}
				}
			}
			if(c2>c1){
				flag=0;
				break;
			}
		}
		if(flag){
			for(i=0;i<c_x;i++) printf("%d\n",a[i]);
		}
		else printf("-1");
	}
	return 0;
}
