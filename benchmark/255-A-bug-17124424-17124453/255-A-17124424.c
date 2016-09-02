#include <stdio.h>
int main(int argc, char *argv[])
{
	int a,b,i,chest=0,biceps=0,back=0;
	scanf("%d",&a);
	for(i=0;i<a;i++){
		scanf("%d",&b);
		if(i%3==0)
        {
            chest+=b;
        }

		else if(i%3==1)
        {
            biceps+=b;
        }

		else
        {
            back+=b;
        }

    }
	if(chest>biceps&&chest>back)
    {
        printf("chest\n");
    }

	else if(biceps>chest&&biceps>back)
	{
	    printf("biceps\n");
	}

	else
    {
        printf("backc\n");
    }

	return 0;
}
