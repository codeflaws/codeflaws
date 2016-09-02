#include<stdio.h>
int main(int argc, char *argv[]){
    int len;
    scanf("%d",&len);
    int i=0,a[26],d=0;
    char c[len];
    scanf("%s",c);
    for(i=0;i<26;i++)
        a[i]=0;
    if(len>26)
        printf("-1\n");
    else{
        for(i=0;i<len;i++){
            	if(a[c[i]-'a']==0)
                	a[c[i]-'a']++;
		else
			d++;
        }
    }
	printf("%d\n",d);
    return 0;
}