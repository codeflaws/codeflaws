#include <stdio.h>

int main(int argc, char *argv[]) {
	char a[3][3];
	int i,j,k;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		    printf("enter X if you want to press that particular no. otherwise press . \n");
		scanf("\n%c",&a[i][j]);
		}
	}
	 if(a[0][0]==a[2][2] && a[0][1]==a[2][1] && a[0][2]==a[2][0] && a[1][0]==a[1][2])
       printf("YES");
       else
       printf("NO");

	return 0;
}

