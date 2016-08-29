#include <stdio.h>

int main(int argc, char *argv[]) {
	// your code goes here
	//AHIMOTUVWXY.
	
	int n,i,j,k,l;
	char arr[100002];
	scanf("%s",arr);
	l=strlen(arr);
	for(i=0;i<l;i++)
	{
	    if(arr[i]=='A'||arr[i]=='H'||arr[i]=='I'||arr[i]=='M'||arr[i]=='O'||arr[i]=='T'||arr[i]=='U'||arr[i]=='V'||arr[i]=='W'||arr[i]=='X'||arr[i]=='Y')
	    {
	        
	        if(arr[l-1-i]=='A'||arr[l-1-i]=='H'||arr[l-1-i]=='I'||arr[l-1-i]=='M'||arr[l-1-i]=='O'||arr[l-1-i]=='T'||arr[l-1-i]=='U'||arr[l-1-i]=='V'||arr[l-1-i]=='W'||arr[l-1-i]=='X'||arr[l-1-i]=='Y')
	    {
	        if(arr[i]==arr[l-1-i])continue;
	        else break;
	    }
	        
	    }
	    
	    
	}
	if(i==l)printf("YES");
	else printf("NO");
	return 0;
}